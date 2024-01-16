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
  multiset<Person> loadedData;

  ifstream in("Final_test.bin", ios::binary);
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
