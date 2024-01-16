#include <iostream>
#include <fstream>
#include <set>

using namespace std;

class Person {
public:
  string name;
  int age;

  Person(string name, int age) {
    this->name = name;
    this->age = age;
  }

  bool operator<(const Person &other) const {
    return this->age < other.age;
  }
};

void serialize(multiset<Person> &m, ofstream &out) {
  for (const auto &person : m) {
    int nameLength = person.name.length();
    out.write((char *)(&nameLength), sizeof(int));
    out.write(person.name.c_str(), nameLength);
    out.write((char *)(&person.age), sizeof(int));
  }
}

void deserialize(multiset<Person> &m, ifstream &in) {
  while (true) {
    int nameLength;
    if (!in.read((char *)(&nameLength), sizeof(int))) {
      break;
    }

    char *nameBuffer = new char[nameLength + 1];
    in.read(nameBuffer, nameLength);
    nameBuffer[nameLength] = '\0';

    int age;
    in.read((char *)(&age), sizeof(int));

    m.insert(Person(string(nameBuffer), age));

    delete[] nameBuffer;
  }
}

int main() {
  multiset<Person> m;
  m.insert(Person("sid", 30));
  m.insert(Person("Jane Doe", 25));
  m.insert(Person("Ayush", 15));

  ofstream out("people.bin", ios::binary);
  if (!out) {
    cerr << "Error opening file." << endl;
    return 1;
  }

  serialize(m, out);
  out.close();

  multiset<Person> loadedData;

  ifstream in("people.bin", ios::binary);
  if (!in) {
    cerr << "Error opening file." << endl;
    return 1;
  }

  deserialize(loadedData, in);
  in.close();

  // Print the loaded data
  for (const auto &person : loadedData) {
    cout << "Name: " << person.name << ", Age: " << person.age << endl;
  }

  return 0;
}
