#include <iostream>
#include "header.h" // include our haeder file, containing declerations

// Note: angled brackets are used to tell the compiler that we are including a header file
// that was included with the compiler, so it should look for that header file in the system
// directories. The double-quotes tell the compiler that this is a header file we are supplying

// Rule: Use angled brackets to include header files that come with the compiler. Use double
// quotes to include any other header files.

// Rule: Each .cpp file should explicitly #include all of the header files it needs to compile.

// Rule: use the non .h version of a library if it exists, and access the functionality through
// the std namespace. If the non .h version does not exist, or you are creating your own headers,
// use the .h version

/*

I got to chapter: 1.9 — Header files

*/


// Rule: When you use an identifier in a namespace, you always have to identify the namespace along with the identifier
using namespace std;

// Function prototyping
// declaire a function prototype, so that the compiler knows about the functions used
// int add(int x, int y);
// function prototype includes return type, name, parameters, and semicolon.  No function body!
// int multxy(int x, int y); //this is how it's done. see header file .h



 // We can write a function like this
int afunction5()
{
    // this function returns an integer, so a return statement is needed
    return 5; // we're going to return integer value 5 back to the caller of this function
}


// a function does not return a value, a return type of void is used
void justprint()
{
    // this just prints something
    cout << "This just prints something on the screen, could be a message" << endl;
}


// a function with arguments:
int add(int x, int y)
{
    return x + y;
}



int main()
{
    // the std::cout object (in the iostream library) can be used to output text to the console
    cout << "Hello world!" << endl;
    // When used with std::cout, std::endl inserts a newline character
    // (causing the cursor to go to the start of the next line)

    // Like this we can write comments
    /* or like this for multi-line
    comments */

    int x;
    x = 5;
    cout << "x is equal to: " << x << endl; // print more things

    // int x = 5; // initialize variable x with the value 5,
    // Rule: When giving variables an initial value, favor initialization over assignment.
    // Rule: Make sure all of your variables have known values (either through initialization or assignment).


    // std::cin reads input from the user at the console using the input operator (>>)
    cout << "Enter a number: "; // ask user for a number
    int y; // no need to initialize x since we're going to overwrite that value on the very next line
    cin >> y; // read number from console and store it in x
    cout << "You entered " << y << endl;



    // We can call a function like this, and print it
    cout << afunction5() << endl;

    // call justprint to directly print message
    justprint();

    // function call with arguments
    cout << add(7, 3) << endl;

    // function call with arguments
    cout << add2(7, 4) << endl;





    // Rule: Names used for function parameters or variables declared in a function
    // body are only visible within the function that declares them.

    // Rule: When addressing compile errors in your programs, always resolve the first error produced first.



    cout << multxy(2, 3) << endl;



    return 0;
}
