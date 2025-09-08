#include<string>
#include<iostream>     // Header file to get the input output functions (like cin, cout)
using namespace std;    // This will save us from writing std:: before every cin, cout 

int main() // main function - program will start execution from here
{
    // Variable declaration - every variable must be declared first before using
    // All variable need to have a "type" (ex: int, float, char etc) which tells the compiler what kind of data it will store
    // Unlike Python, you can not change the type of a variable once declared

    // this is a single line comment create by using //
    // comments are ignored by the compiler and can be put on the same line as code too
    int myVariable; //  <-- Example | Everything after // is a comment on this line

    /*
    this is a multi-line comment
    created by using / * to start and * / to end (Without space in between, spaces added to avoid errors)
    */

    // Keywords: reserved words in C++ that you cannot use as variable names
    // Examples of keywords: int, float, return, if, else, while, for, etc.

    // Programmer-defined symbol names: names created by the programmer for variables, functions, etc.
    //      take our vairable above. We named it "myVariable" which is a programmer-defined symbol name
    // Rules for naming variables:
    //      must start with a letter (A-Z, a-z) or an underscore (_)
    //      can not contain spaces or special characters (like !, @, #, $, %, etc)
    //      can not be a keyword (like int, float, return, if, else, while, for, etc)
    //      are case-sensitive (myVariable and MyVariable are different variables)

    // Puedo rules for naming variables:
    //      should be meaningful and descriptive (like age, name, totalPrice, etc)
    //      should follow a consistent naming convention (like camelCase, snake_case, etc)
    //      should be easy to read and understand

}

void variables(){
    // standard data type in C++ is delcared as follows:
    //      Type variable_name = initial_value; or Type variable_name; (if no initial value)
    //      notice that variables do not need to start with a value or be initialized (same thing as no value)
    // Examples:
        int number = 10; // integer type variable (Whole numbers negative or positive with 0)
    //  ^  ^        ^
    //  |  |        |
    //  |  |        +-- initial value
    //  |  +----------- variable name, you can choose any name, but there are some rules: like Keywords or spaces are not allowed
    //  +-------------- type of variable (int, float, char etc)

    int age = 19; // example of a declaration with initial value
    int year; // example of a declaration without initial value
    year = 2024; // assigning a value to the variable after declaration
    
    // More examples:
    float decimalNumber = 3.14; // float type variable (Decimal numbers)
    double largeDecimalNumber = 3.141592653589793; // double type variable (Decimal numbers with more precision)
    // you can choose either for this course

    char character = 'A'; // char type variable (Single character, must be enclosed in single quotes)
    string text = "Hello"; // string type variable (Sequence of characters, must be enclosed in double quotes) (like a list of characters or "chars")

    bool isTrue = true; // boolean type variable (can be either true or false)
    bool isFalse = false; // boolean type variable (can be either true or false)
    bool num_Truth = 1; // boolean type variable (1 or > is true)
    bool num_False = 0; // boolean type variable (ONLY 0 is false)
}

void operators(){
    // Punctuators: 
    // Symbols that have a special meaning in C++
    // Examples of punctuators --> ; (semicolon), {} (curly braces), () (parentheses), [] (square brackets), , (comma), . (dot), etc.
    // most statements end with a semicolon (;)
    // Curly braces ({}) are used to define a block of code (like in functions, loops, if statements, etc) (ex: seen in main function above)
    // Parentheses (()) are used to group expressions and to define function parameters

    // Statements:
    // A statement is a complete instruction that tells the compiler to do something
    // Example of a statement:
    int x = 5; // this is a statement
    // basically if a line does something, it is a statement

    // Operators: Symbols that perform operations on variables and values
    // Arithmetic Operators: +, -, *, /, % (modulus)
    // Example:
    int a = 10;
    int b = 3;
    int sum = a + b; // outcome is 13
    int diff = a - b; // outcome is 7
    int prod = a * b; // outcome is 30
    int quot = a / b; // outcome is 3 (integer division)

    // integer or in division "truncates" the decimal, meaning it removes the decimal part and only keeps the whole number part
    // if you want to keep the decimal part, you need to use float or double type variables
    float f_quot = (float)a / (float)b; // outcome is 3.33333 (float division)

    // That (float) is called type casting, it converts the variable to the specified type for that operation only
    // Warning: does not change the original variable type, a and b are still int
    // Professor might want you to use static_cast<float>(a) instead of (float)a, both are correct
    float d_quot = static_cast<float>(a) / static_cast<float>(b); // outcome is 3.33333 (float division)

    // Modulus operator (%) gives the remainder of a division (useful for checking even/odd numbers)
    int rem = a % b; // outcome is 1 (10 divided by 3 is 3 with a remainder of 1)
    bool isEven = (a % 2 == 0); // outcome is true (10 is even), also uses numbers instead of true/false and a comparison operator (==)

    // Comparison Operators: ==, !=, >, <, >=, <=
    // Used to compare two values, outcome is a boolean (true or false)
    // most commonly used in if statements and loops
    bool isEqual = (a == b); // outcome is false (10 is not equal to 3)

    // shorthand operators: +=, -=, *=, /=, %=
    a += 5; // same as a = a + 5, outcome is 15
    b *= 2; // same as b = b * 2, outcome is 6
    a--; // same as a = a - 1, outcome is 14 --> Professor and most sites prefer this --a; (same thing)
    b++; // same as b = b + 1, outcome is 7 --> Professor and most sites prefer this ++b; (same thing)

}

void inputAndOutput(){
    // Input and Output: using cin and cout
    // cout is used to print output to the console and produces a output to the user
    cout << "Hello, World!" << endl; // endl is used to end the line (like \n in Python)
    cout << "hi people\n"; // same as above

    // you can add variables to the output using <<
    int age = 19;
    cout << "I am Reza and I am " << age << " years old." << endl; // see how variable need to be outside the quotes
    // anything inside the quotes is treated as a string
    // you can also do operations inside the output
    cout << "Next year, I will be " << age + 1 << " years old." << endl;

    // cin is used to take input from the user
    string name;
    cout << "Enter your name: ";
    cin >> name; // takes input and stores it in the variable name
    cout << "Hello, " << name << "!" << endl;
    // cin only takes input until the first "Whitespace" (space, tab, enter)

    // to take input with spaces, you need to use getline
    string fullName;
    cout << "Enter your full name: ";
    getline(cin, fullName); // takes input with spaces and stores it in the variable fullName
    cout << "Hello, " << fullName << "!" << endl;

}