#include <iostream>
#include <vector>
using namespace std;
int main() {
    // Create a vector of strings
    vector<string> names;
    // Add elements to the vector
    names.push_back("Aryan");
    names.push_back("Vishnu");
    names.push_back("Adi");
    // Access and print elements using the correct for loop
    for (size_t i = 0; i < names.size(); ++i) {
        cout << "Name " << i << ": " << names[i] << endl;
    }
    return 0;
}