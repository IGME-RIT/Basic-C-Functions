/*
Functions
(c) 2016
Author: David Erbelding
Written under the supervision of David I. Schwartz, Ph.D., and
supported by a professional development seed grant from the B. Thomas
Golisano College of Computing & Information Sciences
(https://www.rit.edu/gccis) at the Rochester Institute of Technology.
This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or (at
your option) any later version.
This program is distributed in the hope that it will be useful, but
WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
General Public License for more details.
You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/



// Include iostream for output during the program.
#include <iostream>
// Use std to avoid writing std:: everywhere.
using namespace std;

// In C++, functions must be declared before they are used.
// If they aren't the compiler will error.
// This is because it doesn't know if the function is being used correctly or not.
// This is fixed by using forward declaration, which can be done two ways:

// A) Declare and Define the function before it's used.
bool functionA()   // This line is the declaration.
{                  // Everything inside the braces is the definition.
    cout << "functionA called." << endl;
    return true;
}

// B) Declare the function early, and then define it later.
// This is done by ending early with ; and then defining the function later on.
void functionB();

// Defining a function after it has been declared.
// This is a silly example because it's no different from the line above, but demonstrates how the syntax works.
void functionB()
{
    cout << "functionB called." << endl;
    // void functions are not required to return a value.
    // They just execute.
}

// C) In reality, forward declaration looks like this:
// The definition is after other functions in the file.
void functionC();


// Parameters and return types work very similarly to most other programming languages.
float calcMean(float a, float b)
{
    return (a + b) / 2;
}

// Functions can also return at different times.
float absoluteValue(float x)
{
    if (x < 0)
    {
        return -x;
    }
    else
    {
        return x;
    }
}

// Most Importantly, functions can be called within other functions.
float getAreaOfRectangle(float side1, float side2)
{
    // the area of a rectangle is always positive.
    return absoluteValue(side1 * side2);
}


// Start of main function
int main() 
{
    // Functions can be repeated to run the same code over and over again.
    functionA();
    functionA();
    functionA();

    functionB();
    functionB();
    functionB();

    functionC();
    functionC();
    functionC();



    float temp;

    // Test Function parameters
    temp = calcMean(5, 7);
    cout << "mean of 5 and 7: " << temp << endl;

    // Test Function parameters using variables
    temp = calcMean(temp, temp * 2);
    cout << "mean of mean and mean times two: " << temp << endl;

    // Test absolute value function
    temp = absoluteValue(10);
    cout << "absolute value of 10: " << temp << endl;
    temp = absoluteValue(-10);
    cout << "absoulte value of -10: " << temp << endl;
    
    // Test are of rectangle
    temp = getAreaOfRectangle(8.5, 11);
    cout << "area of 8.5\" x 11\" paper: " << temp << " square inches" << endl;
    temp = getAreaOfRectangle(7, -7);
    cout << "area of 7 x -7 rectangle: " << temp << endl;

    cin.get();
    return 0;   // End Program.
}


// Function definition appearing after the function is called.
void functionC()
{
    cout << "functionC called." << endl;
}