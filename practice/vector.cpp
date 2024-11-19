#include <iostream>
#include <vector> // Include the vector library

using namespace std;

int main() {
    vector<int> numbers; // Create a vector to store integers

    // Adding items
    numbers.push_back(5); // Adds 5 to the vector
    numbers.push_back(10); // Adds 10
    numbers.push_back(15); // Adds 15

    // Accessing items
    cout << "First number: " << numbers[0] << endl; // Prints 5
    cout << "Second number: " << numbers[1] << endl; // Prints 10
    cout << "Third number: " << numbers[2] << endl; // Prints 15

    // Size of the vector
    cout << "Vector size: " << numbers.size() << endl; // Prints 3

    return 0;
}
