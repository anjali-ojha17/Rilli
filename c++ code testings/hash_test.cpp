#include <iostream>
using namespace std;


int main() {
    string inputString = "Hello, World!";
    
    // Use hash to convert the string into a hash code
    hash<string> hasher;
    size_t hashCode = hasher(inputString);

    cout << "Hash code for '" << inputString << "': " << hashCode << endl;

    // Convert the hash code to a string
    string hashCodeString = to_string(hashCode);

    cout << "Hash code as a string: " << hashCodeString << endl;

    return 0;
}
