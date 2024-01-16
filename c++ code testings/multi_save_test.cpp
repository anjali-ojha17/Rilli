#include <iostream>
#include <fstream>
#include <set>

using namespace std;

class Person {
public:
  string name;
  int age;

  Person(string name, int age) {
    this->name = name;            //"this->" is imp here for proper saving
    this->age = age;              //"this->" is imp here for proper saving
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

int main() {
  multiset<Person> m;
  m.insert(Person("Ayush", 119));
  m.insert(Person("Siddharth", 1120));
  m.insert(Person("Anjali", 11220));

  ofstream out("Final_test.bin", ios::binary);
  if (!out) {
    cerr << "Error opening file." << endl;
    return 1;
  }

  serialize(m, out);
  out.close();

  return 0;
}