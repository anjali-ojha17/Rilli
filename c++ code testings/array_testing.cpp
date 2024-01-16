#include <iostream>
#include <string>

int main() {
    const int size = 40;

    // Declare arrays
    std::string roomno[size];
    std::string course[size];
    std::string teacher[size];
    std::string type[size];

    // Insert default values into the arrays using a loop
    for (int i = 0; i < size; ++i) {
        roomno[i] = "DefaultRoom";
        course[i] = "DefaultCourse";
        teacher[i] = "DefaultTeacher";
        type[i] = "DefaultType";
    }

    // Display the arrays
    for (int i = 0; i < size; ++i) {
        std::cout << "Room No: " << roomno[i] << ", Course: " << course[i]
                  << ", Teacher: " << teacher[i] << ", Type: " << type[i] << std::endl;
    }

    return 0;
}
