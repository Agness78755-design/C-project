#ifndef STUDENT_H  // Include guard: prevents multiple inclusions of this header file
#define STUDENT_H  // Define the include guard macro

#include <iostream>  // Include input/output stream library for cout
#include <string>    // Include string library for using std::string type

using namespace std;  // Allow using standard library names without std:: prefix

// Student class definition: blueprint for creating student objects
class Student {
private:  // Private access specifier: these attributes can only be accessed inside the class
    // Private attributes (encapsulation): data hiding to protect student information
    string name;    // Student's full name (e.g., "John Doe")
    int age;        // Student's age in years (e.g., 20)
    string gender;  // Student's gender (e.g., "Male", "Female", "Non-binary")
    int id;         // Student's unique identification number (e.g., 12345)
    string program; // Student's academic program/major (e.g., "Computer Science")
    double gpa;     // Student's Grade Point Average (e.g., 3.75)

public:  // Public access specifier: these methods can be accessed from outside the class
    // Constructor: special method that initializes object when created
    // Uses 'this' keyword to distinguish between parameters and class attributes
    Student(string name, int age, string gender, int id, string program, double gpa) {
        // 'this->' refers to the current object's attributes
        // Left side: object's attribute | Right side: constructor parameter
        this->name = name;        // Assign parameter 'name' to object's 'name' attribute
        this->age = age;          // Assign parameter 'age' to object's 'age' attribute
        this->gender = gender;    // Assign parameter 'gender' to object's 'gender' attribute
        this->id = id;            // Assign parameter 'id' to object's 'id' attribute
        this->program = program;  // Assign parameter 'program' to object's 'program' attribute
        this->gpa = gpa;          // Assign parameter 'gpa' to object's 'gpa' attribute
    }

    // Getter methods (accessors): allow controlled access to private attributes
    // Each getter returns the value of a specific private attribute
    
    string getName() {           // Method to retrieve student's name
        return this->name;       // Return name attribute using 'this' pointer
    }

    int getAge() {              // Method to retrieve student's age
        return this->age;       // Return age attribute using 'this' pointer
    }

    string getGender() {        // Method to retrieve student's gender
        return this->gender;    // Return gender attribute using 'this' pointer
    }

    int getId() {               // Method to retrieve student's ID
        return this->id;        // Return id attribute using 'this' pointer
    }

    string getProgram() {       // Method to retrieve student's program
        return this->program;   // Return program attribute using 'this' pointer
    }

    double getGpa() {           // Method to retrieve student's GPA
        return this->gpa;       // Return gpa attribute using 'this' pointer
    }

    // Method to display all student information formatted nicely
    void displayInfo() {        // No parameters, returns nothing
        cout << "\n--- Student Information ---" << endl;  // Print header separator
        cout << "Name: " << this->name << endl;           // Print student's name
        cout << "Age: " << this->age << endl;             // Print student's age
        cout << "Gender: " << this->gender << endl;       // Print student's gender
        cout << "ID: " << this->id << endl;               // Print student's ID number
        cout << "Program: " << this->program << endl;     // Print student's program
        cout << "GPA: " << this->gpa << endl;             // Print student's GPA
        cout << "---------------------------" << endl;    // Print footer separator
    }
};

#endif  // End of include guard: closes the #ifndef STUDENT_H block