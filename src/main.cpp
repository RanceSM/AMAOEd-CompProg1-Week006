/* ****************************************************************
 * @author: RanceSM
 * @app name: LaboratoryExercise04
 * @app desc: (AMAoed) Computer Programming 1 laboratory exercise
 * ****************************************************************/

#include <cstdio>
#include <cstdlib>
#include <iostream>
#include "_pause.h"

using namespace std;

//////////////////////////////////////////////////////////////////
//                               NOTE
// This is your program entry point. Your main logic is placed
// inside this function. You may add your functions before this
// "main()", or after this "main()" provided you added reference
// before this "main()" function.
//////////////////////////////////////////////////////////////////

// Write a program that accepts user’s section, and display them back with the format “*** Section: user’s section ***”
void problem1(){
    string section;
    cout << "Please enter your section:\n>";
    cin >> section;
    cout << "*** Section: " << section << " ***" << endl;
}
// Write a program that accepts user’s name, password and address and display them back using the format “Hi, I am user’s name. I live at user’s address”
void problem3(){
    string name, password, address;
    cout << "Name:\n>";
    getline(cin,name);
    cout << "Password:\n>";
    getline(cin,password);
    cout << "Address:\n>";
    getline(cin,address);
    cout << "\nHi, I am " << name << ". I live at " << address << ".\n";
}

int main() {
    // ************************** TO DO **************************
    // Place your code logic after this comment line
    // ***********************************************************

    problem3();

    // ********************** DO NOT CHANGE **********************
    // Print a new line and ask user for any key before exiting
    // ***********************************************************
    _pause();
    return EXIT_SUCCESS;
}