#include <iostream> 
// Include the input-output stream library
#include <string>   
// Include the string library for using string data type

using namespace std; 
// Use the standard namespace

int main() {
    string name; 
    // Declare a string variable to store the name
    int age;     
    // Declare an integer variable to store the age

    cout << "Enter your name: "; 
    // Prompt the user to enter their name
    getline(cin, name); 
    // print the full name from user input and also print name is space addded 

    cout << "Enter your age: "; 
    // Prompt the user to enter their age
    cin >> age; 
    // Get the age from user input

    cout << "Your name is: " << name << endl; 
    // Output the name
    cout << "Your age is: " << age << endl; 
    // Output the age

     cout << "Have a great day!" << endl; 

    return 0; 
    // Return 0 to indicate that the program ended successfully
}

