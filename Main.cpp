#include <iostream>      // Include input/output stream library for cin, cout, endl
#include <string>        // Include string library for using std::string type
#include <vector>        // Include vector library for dynamic array to store multiple students
#include "Student.h"     // Include our Student class header file (the separated file)

using namespace std;     // Allow using standard library names without std:: prefix

int main() {             // Main function: program entry point
    // Vector to store multiple student objects dynamically
    // vector<Student> creates a container that can hold multiple Student objects
    vector<Student> students;  // Empty vector that will store Student objects
    
    // Variables to hold temporary input values before creating Student object
    string tempName, tempGender, tempProgram;  // String variables for text input
    int tempAge, tempId;                       // Integer variables for numeric input
    double tempGpa;                            // Double variable for decimal input
    char choice;  // Character variable to store user's choice for continuing or breaking
    
    // Do-while loop - executes at least once, repeats until user chooses to break
    // The condition is 'true' meaning it runs forever until 'break' statement is encountered
    do {
        // Clear input buffer and display header
        // This prints a decorative header for the registration system
        cout << "\n========== STUDENT REGISTRATION SYSTEM ==========" << endl;
        
        // Get student information from user input
        // Using getline() instead of cin >> to allow spaces in names (e.g., "John Doe")
        cout << "Enter student name: ";   // Prompt user for name
        getline(cin, tempName);           // Read entire line including spaces into tempName
        
        cout << "Enter student age: ";    // Prompt user for age
        cin >> tempAge;                   // Read integer value into tempAge
        
        // Clear input buffer after reading integer
        // cin.ignore() removes the newline character left by cin >>
        // 10000 is maximum characters to ignore, '\n' is the delimiter to stop at
        cin.ignore(10000, '\n');          // Ignore up to 10000 chars or until newline
        
        cout << "Enter student gender: "; // Prompt user for gender
        getline(cin, tempGender);         // Read gender (may have spaces) into tempGender
        
        cout << "Enter student ID: ";     // Prompt user for ID number
        cin >> tempId;                    // Read integer ID into tempId
        
        // Clear input buffer after reading integer
        cin.ignore(10000, '\n');          // Remove newline character from buffer
        
        cout << "Enter student program: "; // Prompt user for academic program
        getline(cin, tempProgram);        // Read program name into tempProgram
        
        cout << "Enter student GPA: ";    // Prompt user for GPA
        cin >> tempGpa;                   // Read double value into tempGpa
        
        // Clear input buffer after reading double
        cin.ignore(10000, '\n');          // Remove newline character from buffer
        
        // Create a new Student object using the constructor
        // This calls the Student constructor with all the collected data
        // The 'new' keyword is NOT needed - we're creating an object on the stack (automatic memory)
        Student newStudent(tempName, tempAge, tempGender, tempId, tempProgram, tempGpa);
        
        // Add the student to our vector collection
        // push_back() adds the newStudent object to the end of the students vector
        students.push_back(newStudent);
        
        // Display the newly created student's information using getter methods
        cout << "\nStudent successfully registered!" << endl;  // Confirmation message
        // Using getters to access private attributes (encapsulation in action)
        cout << "Name (using getter): " << newStudent.getName() << endl;  // Call getName() method
        cout << "ID (using getter): " << newStudent.getId() << endl;      // Call getId() method
        cout << "GPA (using getter): " << newStudent.getGpa() << endl;    // Call getGpa() method
        
        // Ask user if they want to continue or break out of the loop
        cout << "\nDo you want to enter another student? (y/n): ";  // Prompt for choice
        cin >> choice;                   // Read single character choice into variable
        
        // Clear input buffer after reading character
        cin.ignore(10000, '\n');         // Remove newline character from buffer
        
        // Check if user wants to break (if choice is 'n' or 'N' for No)
        if (choice == 'n' || choice == 'N') {  // Logical OR: true if either condition is true
            cout << "\nExiting input loop..." << endl;  // Inform user loop is ending
            break;  // Break out of the do-while loop immediately
        }
        
    } while (true);  // Loop continues indefinitely until break statement is executed
    
    // Display all students that were entered in the vector
    // This section runs after the user exits the input loop
    cout << "\n========== ALL REGISTERED STUDENTS ==========" << endl;  // Header for display
    cout << "Total students registered: " << students.size() << endl;  // size() returns number of elements
    
    // Loop through vector and display each student's information
    // For loop: initialize i=0; continue while i < students.size(); increment i after each iteration
    for (int i = 0; i < students.size(); i++) {
        cout << "\nStudent #" << (i + 1) << ":" << endl;  // Print student number (1-based index)
        students[i].displayInfo();  // Call displayInfo() method for each student object in vector
    }
    
    // Print termination message
    cout << "\nProgram terminated. Goodbye!" << endl;  // Farewell message
    
    return 0;  // Return 0 to operating system indicating successful program completion
}  // End of main function