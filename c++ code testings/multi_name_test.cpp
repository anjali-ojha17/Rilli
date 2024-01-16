#include <iostream>
#include <set>
#include <string>

using namespace std;
std::multiset<int> createUniqueMultiset() {
    static int counter = 0; // Counter for generating unique names
    std::string name = "multiset_" + std::to_string(counter++);
    std::multiset<int> ms;

    // Populate the multiset (you can modify this part as needed)
    ms.insert(5);
    ms.insert(2);
    ms.insert(8);
    ms.insert(2);

    std::cout << "Created multiset: " << name << std::endl;
    return ms;
}

int main() {
    std::multiset<int> ms1 = createUniqueMultiset();
    std::multiset<int> ms2 = createUniqueMultiset();

    for (const int& num : ms1) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
