#include <iostream>
using namespace std;

int main() {
    int sum = 0; 
    // Initialize sum to 0
    int i = 0; 
    // Initialize i to 0

    while (i < 11) {
        cout << "Current number: " << i << endl; 
        // Print the current number
        sum = sum + i; 
        // Add the current number to the sum
        i++; // Increment i
        cout << "Current sum: " << sum << endl; 
        // Print the current sum
    }

    return 0; // Return 0 to indicate that the program ended successfully
}

