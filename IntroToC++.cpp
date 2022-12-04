#include <iostream>

int main() {
//     std::cout << "Hello World!";
//     std::cout << "I am watching you!!!"; This does not include a new line, this would print "Hello World!I am watching you!!!"
//     return 0;

// This would add a new line, using \n
//     std::cout << "Hello, World! \n";
//     std::cout << "I am watching you!!!";
//     return 0;
// 

// Another way to do this is to use std::endl
//     std::cout << "Hello, World!" << std::endl;
//     std::cout << "I am also on a new line!";
//     return 0;
// 


// Strings and ints
//     std::string name = "Ember";
//     int age = 17;
//     std::cout << "Hello!! ";
//     std::cout << name << std::endl;
//     std::cout << age;
//     return 0;


// int myNum = 5;               // Integer (whole number without decimals)
// double myFloatNum = 5.99;    // Floating point number (with decimals)
// char myLetter = 'D';         // Character
// string myText = "Hello";     // String (text)
// bool myBoolean = true;       // Boolean (true or false) 

// To display variables we do:

//     std::string name = "Ember";
//     int age = 17;

//     std::cout << "Hello, "<< name << ", you are " << age << "!!";
//     return 0;

// This will display "Hello, Ember, you are 17!!"

// Adding
//     int x = 5;
//     int y = 10;
//     int sum = y + x;
//     std::cout << sum;
//     return 0;


// We can use a comma-seperated list to declare multiple variables at once:
//     int x = 5, y = 10, sum = x + y;
//     std::cout << sum;
//     return 0;


// Constants
//     const int minsPerHour = 60;
//     int minsPerHour = 70;
//     std::cout << minsPerHour;
//     return 0;

// This returns this error:

/*/home/ember/Documents/Code/1/IntroToC++.cpp:75:9: error: conflicting declaration ‘int minsPerHour’
    75 |     int minsPerHour = 70;
        |         ^~~~~~~~~~~
/home/ember/Documents/Code/1/IntroToC++.cpp:74:15: note: previous declaration as ‘const int minsPerHour’
    74 |     const int minsPerHour = 60;
        |               ^~~~~~~~~~~*/

// User Input

// int x;
// std::cout << "Enter a number: ";
// std::cin >> x;
// std::cout << "The number you entered is " << x;

// This asks for an input then prints a the number enetered

// Calc

// int x, y;
// int sum;
// std::cout << "Enter the first number: ";
// std::cin >> x;
// std::cout << "Enter the second number ";
// std::cin >> y;
// sum = x + y;
// std::cout << "The numbers added together are: " << sum;
// }