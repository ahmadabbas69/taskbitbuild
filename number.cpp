#include <iostream> 
// Include the input-output stream library
using namespace std; 
// Use the standard namespace

int main() {
    int number; 
    // Declare an integer variable to store the number

    cout << "Enter the number you provide: "; 
    // Prompt the user to enter a number
    cin >> number; 
    // Get the number from user input

    // Check if the input extraction failed
    if (cin.fail()) {
        cout << "Please enter a valid number." << endl; 
        // Output an error message if input is not a number
    } else {
        // Check if the number is positive, zero, or negative
        if (number > 0) {
            cout << "The number you entered is positive." << endl; 
            // Output if the number is positive
        } else if (number == 0) {
            cout << "The number you entered is zero." << endl; 
            // Output if the number is zero
        } else if (number < 0) {
            cout << "The number you entered is negative." << endl; 
            // Output if the number is negative
        }
    }

    return 0; 
}

