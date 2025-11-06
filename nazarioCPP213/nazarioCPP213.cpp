// Nazario, Xavier
// October 30, 2025 ©
// Chapter 13 Programming Assignment Employee Class
// References:
//  Gaddis, Tony. Starting Out with C++ from Control Structures Through Objects.
//      (10th Edition). Pearson Education (US), 2022.
//  C++ Tutorials: Classes(I) - https://cplusplus.com/doc/tutorial/classes/
//    Classes(II) - https://cplusplus.com/doc/tutorial/templates/
//    Special Members - https://cplusplus.com/doc/tutorial/classes2/
//    Friendship and Inheritance - https://cplusplus.com/doc/tutorial/inheritance/

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

// Define Employee Class
//  Make Private
class Employee
{
    // Step 1
    private:
        string name;    // Holds Name
        int idNumber;   // Holds employee ID Number
        string department;  // Holds Dept employee works
        string position;    // Holds employee Job Title

    // Constructor Definition
    //  Make ALL public
    public:

    // Step 2
    // Constructor 1: Default
    //  Uses Name, idNumber, department, position
    //  All initialized to 0 or empty string
        Employee()
        {
            name = "";
            idNumber = 0;
            department = "";
            position = "";
        }

    // Step 3
    // Constructor 2
    //  Takes Name, idNumber, department, position
    //  Use n for name, id for idNumber, dept for department, p for position
        Employee(string n, int id, string dept, string p)
        {
            name = n;
            idNumber = id;
            department = dept;
            position = p;

        }

    // Step 4
    // Constructor 3
    //  Takes Name and idNumber
    //  Use n for name and id for idNumber
    //  dept/postion set to ""
        Employee(string n, int id)
        {
            name = n;
            idNumber = id;
            department = "";
            position = "";
        }

    // Step 5: Mutator Functions
    //  Use "set..." for naming
        void setName(string n) { name = n; }    // Stores name
        void setIdNumber(int id) { idNumber = id; } // Stores idNumber
        void setDepartment(string dept) { department = dept; } // Stores department
        void setPosition(string p) { position = p; }    // Stores Job Title

    // Step 6: Accessor Functions
    //  Use "get..." for naming
    //  All will be constants? / returns their attribute
        string getName() const { return name; } // Returns name
        int getIdNumber() const { return idNumber; }   // Returns idNumber
        string getDepartment() const { return department; } // Returns department
        string getPosition() const { return position; } // Returns position
};

// Main function starts here
int main()
{
    // Step 1: Define emplys array for Employee class
    //  constant 3 *text examples*
    //  Use NUM_EMPLYS as variable
    const int NUM_EMPLYS = 3;
    Employee emplys[NUM_EMPLYS] =
    {
        Employee("Susan Meyers", 47899, "Accounting", "Vice President"),
        Employee("Mark Jones", 39119, "IT", "Programmer"),
        Employee("Joy Rogers", 81774, "Manufacturing", "Engineer")
    };

    // Step 2: Display Employee data in table
    //  Use for loop, i as variable
    //  Format with left justification, setw() (play with numbers while testing)
    //  Create title OUTSIDE for loop of employee array
    cout << left << setw(20) << "Name"
         << setw(12) << "ID Number"
         << setw(20) << "Department"
         << setw(20) << "Position"
         << endl;

    // Holds title/data line
    cout << string(70, '-') << endl;

    // for Loop to display emplys array
    //  i as variable, format accordingly (title settings)
    for (int i = 0; i < NUM_EMPLYS; i++)
    {
        cout << left << setw(20) << emplys[i].getName()
             << setw(12) << emplys[i].getIdNumber()
             << setw(20) << emplys[i].getDepartment()
             << setw(20) << emplys[i].getPosition()
             << endl;
    }
    
    // return 0
    return 0;
}