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

/*
1.	Write a program that will accept an integer and execute one of 
the following based on the input using IF statements:
a.	If 0, display only "Hello World".
b.	If 1, display only "I am Groot".
c.	If 2, display only "To the Top".
d.	If 3, display only "Where is the horizon".
e.	If 4, display only "I do not know".
f.	If none of the above, display only "Yeah, I will.".
*/
void problem1(int n){
    string say_this = "HELP";
    if (n == 0)
    {
        say_this = "Hello World";
    }
    else if (n == 1)
    {
        say_this = "I am Groot";
    }
    else if (n == 2)
    {
        say_this = "To the Top";
    }
    else if (n == 3)
    {
        say_this = "Where is the horizon";
    }
    else if (n == 4)
    {
        say_this = "I do not know";
    }
    else
    {
        say_this = "Yeah, I will.";
    }
    cout << say_this << endl;
}
// Using SWITCH statements.
void problem2(int n){
    string say_this = "HELP";
    switch (n){
        case 0:
            say_this = "Hello World";
            break;
        case 1:
            say_this = "I am Groot";
           break;
        case 2:
            say_this = "To the Top";
            break;
        case 3:
            say_this = "Where is the horizon";
            break;
        case 4:
            say_this = "I do not know";
            break;
        default:
            say_this = "Yeah, I will.";
    }
    cout << say_this << endl;
}
/*
3.	Write a program that will divide the two floating points entered by
the user (first number entered divided by the second number entered).
Make sure your application handles all possible scenarios with floating
points.
*/
void problem3(){
    string input1, input2;
    float first, second;
    try
    {
        cout << "Enter first floating number: \n>";
        getline(cin, input1);
        cout << "Enter second floating number: \n>";
        getline(cin, input2);
        first = stof(input1);
        second = stof(input2);
        cout << "The answer is: " << first / second << endl;
    }
    catch(const exception& e)
    {
        cout << "Error: You did something wrong." << endl;
        problem3();
    }
    
}

int main() {
    // ************************** TO DO **************************
    // Place your code logic after this comment line
    // ***********************************************************

    // Problems 1 & 2
    // for(int i = 0; i < 6; i++)
    // {
    //     problem2(i);
    // }
    // Problem 3
    problem3();


    // ********************** DO NOT CHANGE **********************
    // Print a new line and ask user for any key before exiting
    // ***********************************************************
    _pause();
    return EXIT_SUCCESS;
}