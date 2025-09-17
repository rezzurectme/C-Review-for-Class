#include<string>
#include<iostream>     // Header file to get the input output functions (like cin, cout)
#include<fstream>      // Header file to get file handling functions (like ifstream, ofstream)
using namespace std;    // This will save us from writing std:: before every cin, cout 

// function prototypes: used to declare a function before it is defined
// Format: ReturnType FunctionName(ParameterType1 parameter1, ParameterType2 parameter2, ...);
// example:
void variables(); // function to demonstrate variable declaration and initialization
void operators(); // function to demonstrate operators
void inputAndOutput(); // function to demonstrate input and output
void decisionMaking(); // function to demonstrate decision making (if, else if, else, switch case)
void loops(); // function to demonstrate loops (for, while, do-while)
void makingEnums(); // function to demonstrate enums
void fileHandling(); // function to demonstrate file handling (ifstream, ofstream)
int add(int a, int b); // function that takes two int parameters and returns their sum
void greet(string name); // function that takes a string parameter and returns nothing (void)

// these prototypes are for functions that are defined after main function
// avoiding "implicit declaration" errors


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

    // calling a function
    variables(); // function to demonstrate variable declaration and initialization
    int addResult = add(5, 3); // calling the add function and storing the result in a variable
    cout << "The sum of 5 and 3 is: " << addResult << endl; // printing the result
    greet("Reza"); // calling the greet function

    return 0; // return 0 to indicate that the program ended successfully

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

void decisionMaking(){
    // decision making: if, else if, else statements
    // using composed of a condition (boolean expression) and a block of code (curly braces {})
    // Format of a simple if statement: 
    /*
    if(condition)
    {
        // block of code to be executed if the condition is true
    }
    */ 
    // indentation does not matter, only curly braces matter
    // condition must be a boolean expression (true or false)
    // example:
    int a;
    a = 6;
    if (a > 5) // condition is true
    {
        cout << "a is greater than 5" << endl; // this block of code will be executed
    }

    int b = 3;
    if (b > 5) // condition is false
    {
        cout << "b is greater than 5" << endl; // this block of code will NOT be executed
    }

    // if statement do not need curly braces if there is only one line of code to be executed
    if (b < 5) // condition is true
        cout << "b is less than 5" << endl; // this block of code will be executed

    // if else or if-elseif statements
    /*
    if(condition)
    {
        // block of code to be executed if the condition is true
    }
    else if(condition)
    {
        // block of code to be executed if the condition is true
    }
    else
    {
        // block of code to be executed if all conditions are false
    }
    */
    // if the first condition is true, the block of code inside the if statement is executed
    // if the first condition is false, the next condition is checked, and so on
    // if all conditions are false, the block of code inside the else statement is executed

    // Once 1 condition is true and the code block is executed, the rest of the conditions are skipped
    // example:
    int c =10;
    if (c < 5) // condition is false
    {
        cout << "c is less than 5" << endl; // this block of code will NOT be executed
    }
    else
    {
        cout << "c is not less than 5" << endl; // this block of code will be executed
    }

    // you can also assign a variable in the condition
    int d;
    cout << "Enter a number: ";
    cin >> d;
    if (d = 5) // condition is true (assignment operator = is used instead of comparison operator ==), so d is assigned the value 5 inside the condition
    {
        cout << "d is 5" << endl; // this block of code will be executed
    }
    else
    {
        cout << "d is not 5" << endl; // this block of code will NOT be executed
    }
    // Warning: common mistake is using = instead of == in the condition
    
    // Comparison operators: ==, !=, >, <, >=, <=
    // Logical operators: && (AND), || (OR), ! (NOT)
    /*
    == --> equal to
    != --> not equal to
    >  --> greater than
    <  --> less than
    >= --> greater than or equal to
    <= --> less than or equal to
    && --> AND operator, both conditions must be true
    || --> OR operator, at least one condition must be true
    !  --> NOT operator, negates the condition
    */
   // example of each:
   int x = 10;
   int y = 5;
   
    if (x == 10) // true
    {
         cout << "x is equal to 10" << endl;
    }
    if (y != 10) // true
    {
         cout << "y is not equal to 10" << endl;
    }
    if (x > 5) // true
    {
         cout << "x is greater than 5" << endl;
    }
    if (y < 10) // true
    {
         cout << "y is less than 10" << endl;
    }
    if (x >= 10) // true
    {
         cout << "x is greater than or equal to 10" << endl;
    }
    if (y <= 5) // true
    {
         cout << "y is less than or equal to 5" << endl;
    }
    if (x > 5 && y < 10) // true
    {
         cout << "x is greater than 5 AND y is less than 10" << endl;
    }
    if (x > 5 || y > 10) // true
    {
         cout << "x is greater than 5 OR y is greater than 10" << endl;
    }
    if (!(x < 5)) // true
    {
         cout << "x is NOT less than 5" << endl;
    }

    // short hand if else (ternary) operator
    // Format: condition ? expression1 : expression2;
    // if the condition is true, expression1 is executed, otherwise expression2 is executed
    int z = (x > y) ? x : y; // z is assigned the value of x if x is greater than y, otherwise z is assigned the value of y
    cout << "The greater value between x and y is: " << z << endl;

    // do not forget about operator precedence (order of operations) and short-circuit evaluation
    // use parentheses to group conditions and make the code more readable
    /*
    int x = 10;
    int y = 5;
    */
    if ((x > 5 && y < 10) || (x < 5 && y > 10)) // true
    {
         cout << "Complex condition is true" << endl;
    }
    if (x > 5 || (y++ > 10)) // true, y is not incremented because the first condition is true (short-circuit evaluation)
    {
         cout << "Short-circuit evaluation: y is " << y << endl; // y is still 5
    }

    // Switch case statement: used to select one of many blocks of code to be executed
    // Format:
    /*
    switch(expression)
    {
        case value1:
            // block of code to be executed if expression == value1
            break;
        case value2:
            // block of code to be executed if expression == value2
            break;
        ...
        default:
            // block of code to be executed if expression does not match any case
    }
    */
    // example:
    int day = 3;
    switch(day)
    {
        case 1:
            cout << "Monday" << endl;
            break; // break is used to exit the switch case, if not used, the next case will be executed (fall-through)
        case 2:
            cout << "Tuesday" << endl;
            break;
        case 3:
            cout << "Wednesday" << endl;
            break;
        case 4:
            cout << "Thursday" << endl;
            break;
        case 5:
            cout << "Friday" << endl;
            break;
        case 6:
            cout << "Saturday" << endl;
            break;
        case 7:
            cout << "Sunday" << endl;
            break;
        default:
            cout << "Invalid day" << endl; // this block of code will be executed if day is not between 1 and 7
    }

}

void loops(){
    // loops: for, while, do-while loops
    // used to repeat a block of code multiple times
    // for loop: used when the number of iterations is known
    /*
    for(initialization; condition; increment/decrement)
    {
        // block of code to be executed
    }
    */
    // example:
    for (int i = 0; i < 5; i++) // initialization: int i = 0; condition: i < 5; increment: i++
    {
        cout << "i is: " << i << endl; // this block of code will be executed 5 times (i = 0, 1, 2, 3, 4)
    }

    // while loop: used when the number of iterations is not known
    /*
    while(condition)
    {
        // block of code to be executed
    }
    */
    // example:
    int j = 0; // initialization
    while (j < 5) // condition
    {
        cout << "j is: " << j << endl; // this block of code will be executed 5 times (j = 0, 1, 2, 3, 4)
        j++; // increment
    }

    // do-while loop: similar to while loop, but the block of code is executed at least once before checking the condition
    /*
    do
    {
        // block of code to be executed
    } while(condition);
    */
    // example:
    int k = 0; // initialization
    do
    {
        cout << "k is: " << k << endl; // this block of code will be executed 5 times (k = 0, 1, 2, 3, 4)
        k++; // increment
    } while (k < 5); // condition

}

void makingEnums(){
    // Enums: used to make a variable that can only have a set of predefined values
    // used to make the code more readable and maintainable
    // almost like a custom data type
    // Format:
    /*
    enum EnumName {value1, value2, value3, ...};
    */

    // create an enum for colors
    enum Colors {red, green, blue}; // notice the Capital C in Colors
    Colors myColor = red; // create a variable of type Colors and assign it the value red
    cout << "My color is: " << myColor << endl; // output is 0 (red is the first value in the enum, so it is assigned the value 0)
    
    // need a way to convert enum values to strings for better output
    // can use switch case for this
    switch (myColor)
    {
    case red:
        cout << "My color is: red" << endl; // output is red
        break;
    case green:
        cout << "My color is: green" << endl; // output is green
        break;
    case blue:
        cout << "My color is: blue" << endl; // output is blue
        break;
    default:
        cout << "Invalid color" << endl; // this block of code will be executed if myColor is not red, green, or blue
        break;
    }
    
}

void fileHandling(){
    // File Handling: using ifstream and ofstream
    // ifstream is used to read from a file
    // ofstream is used to write to a file

    // create an ofstream object
    ofstream outFile; // the "o" in ofstream stands for output
    // open a file
    outFile.open("example.txt"); // if the file does not exist, it will be created
    // check if the file is open
    if (outFile.is_open())
    {
        // write to the file
        outFile << "Hello, World!" << endl; // write a line to the file (make sure to use endl or \n to end the line)
        outFile << "This is a file handling example." << endl;
        // close the file
        outFile.close(); // always close the file when done
    }
    else
    {
        cout << "Unable to open file for writing." << endl;
    }

    // create an ifstream object
    ifstream inFile; // the "i" in ifstream stands for input
    // open a file
    inFile.open("example.txt"); // open the file created above
    // check if the file is open
    if (inFile.is_open()) // said in lecture that if you put if(inFile) it also works, which checks if the file has been opened successfully
    {
        string line;
        // read from the file line by line
        while (getline(inFile, line)) // read a line from the file and store it in the variable line (gets the whole line including spaces)
        {
            cout << line << endl; // print the line to the console
        }
        // close the file
        inFile.close();
    }
    else
    {
        cout << "Unable to open file for reading." << endl;
    }
}

// Functions: used to group a set of statements together to perform a specific task
// Format:
/*
ReturnType FunctionName(ParameterType1 parameter1, ParameterType2 parameter2, ...)
{
    // block of code to be executed
    return returnValue; // if the return type is not void
}
*/

// parameters are optional, a function can have no parameters
// parameters are used to pass values to the function

// return type can be void if the function does not return a value
// return type can be any data type (int, float, char, string, bool, etc)
// return type can also be a custom data type (like enum, struct, class, etc)

// "int" is the return type, "add" is the function name, "int a" and "int b" are the parameters
int add(int a, int b) // function that takes two int parameters and returns their sum
{
    return a + b; // return the sum of a and b
}

void greet(string name) // function that takes a string parameter and returns nothing (void)
{
    cout << "Hello, " << name << "!" << endl; // print a greeting message
}
// to call a function, use the function name followed by parentheses and arguments (if any)
// example:
// int result = add(5, 3); // calls the add function with arguments 5 and 3, and stores the return value in the variable result
// greet("Reza"); // calls the greet function with argument "Reza"
// Note: functions must be declared before they are called (either by defining them before main or by using function prototypes)

// see examople in main function above

// function prototypes: used to declare a function before it is defined
// Format: ReturnType FunctionName(ParameterType1 parameter1, ParameterType2 parameter2, ...);
// example in main function above
