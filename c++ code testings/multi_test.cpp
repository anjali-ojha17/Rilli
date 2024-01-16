#include <iostream>
#include <set>

int main() {
    std::multiset<int> ms;

    // Insert elements
    ms.insert(5);
    ms.insert(2);
    ms.insert(8);
    ms.insert(2); // Duplicate element

    // Print elements
    for (const int& num : ms) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
