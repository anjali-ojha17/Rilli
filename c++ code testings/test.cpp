#include <iostream>
#include <string>

class Student {
public:
    Student(std::string name, int age) : name(name), age(age) {}

    void display() {
        std::cout << "Name: " << name << ", Age: " << age << std::endl;
    }

private:
    std::string name;
    int age;
};

int main() {
    const int rows = 2;
    const int columns = 3;

    Student students[rows][columns] = {
        {Student("Alice", 20), Student("Bob", 22), Student("Carol", 21)},
        {Student("David", 19), Student("Eve", 23), Student("Frank", 20)}
    };

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < columns; ++j) {
            students[i][j].display();
        }
    }

    return 0;
}
