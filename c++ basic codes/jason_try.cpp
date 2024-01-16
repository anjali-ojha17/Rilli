#include "D:\Rilli\json.hpp"
#include <iostream>
#include <fstream>
#include <set>


class Person {
public:
    std::string name;
    int age;

    // Serialization to JSON
    void to_json(nlohmann::json& j) const {
        j = nlohmann::json{{"name", name}, {"age", age}};
    }

    // Deserialization from JSON
    static Person from_json(const nlohmann::json& j) {
        Person person;
        person.name = j["name"];
        person.age = j["age"];
        return person;
    }
    bool operator<(const Person &other) const {
    return this->age < other.age;
  }
};

int main() {
    // Create a multiset of Person objects
    std::multiset<Person> personSet;
    personSet.insert({"Alice", 25});
    personSet.insert({"Bob", 30});
    personSet.insert({"Eve", 28});

    // Serialize and save to a JSON file
    nlohmann::json jsonData;
    for (const auto& person : personSet) {
        person.to_json(jsonData["persons"]);
    }

    std::ofstream outFile("persons.json");
    outFile << jsonData.dump(4);
    outFile.close();

    // Deserialize and load from the JSON file
    std::ifstream inFile("persons.json");
    nlohmann::json loadedData;
    inFile >> loadedData;

    std::multiset<Person> loadedPersonSet;
    for (const auto& personJson : loadedData["persons"]) {
        Person person = personJson.get<Person>(); // This will now work
        loadedPersonSet.insert(person);
    }

    // Display loaded persons
    for (const auto& person : loadedPersonSet) {
        std::cout << "Name: " << person.name << ", Age: " << person.age << std::endl;
    }

    return 0;
}
