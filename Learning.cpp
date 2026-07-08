#include <iostream>

/*

To use strings, you must include an additional header file in the source code, the <string> library:

*/

#include <string>
using namespace std;

/*
C-style strings are created with the char type instead of string.yu

As C++ was developed as an extension of C, it continued to support this way of creating strings in C++:

Key Differences
Feature	            C-Style Strings (char[])	        std::string
Memory Management	Manual (prone to leaks/overflows)	Automatic ( RAII)
Size Tracking	    Must use strlen() (O(n))	        Built-in .size() (O(1))
Concatenation	    strcat() (unsafe if buffer small)	+ or += operators
Comparison	        strcmp() returns integer	        == operator returns bool
Safety	            Low (no bounds checking)	        High (bounds checking optional)

While std::string is recommended for general C++ programming,
C-style strings remain necessary for interfacing with legacy C libraries or
systems requiring strict low-level memory control.

*/

string greeting1 = "Hello"; // Regular String
char greeting2[] = "Hello"; // C-Style String (an array of characters)

/* C++ Variables

int - stores integers (whole numbers), without decimals, such as 123 or -123

double - stores floating point numbers, with decimals, such as 19.99 or -19.99

char - stores single characters, such as 'a' or 'B'. Char values are surrounded by single quotes

string - stores text, such as "Hello World". String values are surrounded by double quotes

bool - stores values with two states: true or false

*/

/* Basic Data Types

bool	1 byte	Stores true or false values
char	1 byte	Stores a single character/letter/number, or ASCII values
int	2 or 4 bytes	Stores whole numbers, without decimals
float	4 bytes	Stores fractional numbers, containing one or more decimals. Sufficient for storing 6-7 decimal digits
double	8 bytes	Stores fractional numbers, containing one or more decimals. Sufficient for storing 15 decimal digits

*/

int myAge = 16;

double myHeight = 6.2;

string myName = "Omid ";
string mylastname = "Teimory";

/* +

The + operator can be used between strings to add them together to make a new string.
This is called concatenation:

However, you could also add a space with quotes (" " or ' '):

*/

/*

Escape character	Result	                Description
\'	                '	                    Single quote
\"	                " 	                    Double quote
\\	                \	                    Backslash

*/

string fullName = myName + " " + mylastname;

/* Append()

A string in C++ is actually an object,
which contain functions that can perform certain operations on strings.
For example, you can also concatenate strings with the append() function:

*/

string betterFullName = myName.append(mylastname);

char bloodIdentifier = 'B';
char bloodBar = '+';

bool isAlive = true;

/*

When you do not want others (or yourself) to change existing variable values,
use the const keyword (this will declare the variable as "constant",
which means unchangeable and read-only):

*/

const int myNum = 15; // myNum will always be 15

/* Good To Know

cout is pronounced "see-out". Used for output, and uses the insertion operator (<<)

cin is pronounced "see-in". Used for input, and uses the extraction operator (>>)

*/

string justTest = "Never Ever Give Up";

string justAnotherText = "Hello";
string oneMoreExtraText = "Hello";

string inputFullname;

int main()
{

    /*
    cin considers a space (whitespace, tabs, etc) as a terminating character,
    which means that it can only store a single word (even if you type many words):

    That's why, when working with strings,
    we often use the getline() function to read a line of text.
    It takes cin as the first parameter, and the string variable as second:
    */

    cout << "Type your fullname, firstname + lastname here: " << "\n\n";
    getline(cin, inputFullname);
    cout << "your fullname is: " << inputFullname << endl;

    // ...........................................
    // ...........................................
    // ...........................................

    cout << "This is" << " " << betterFullName << "\n\n";
    cout << "He is" << " " << myAge << " " << "years old" << "\n\n";
    cout << "He has the height of" << " " << myHeight << "\n\n";
    cout << "Is he alive" << " " << isAlive << " " << "and has the blood type of" << " " << bloodIdentifier << bloodBar << "\n\n";

    /*

    To get the length of a string, use the length() function:

    */

    cout << justTest << " " << "has the txt length of: " << justTest.length() << "\n\n";

    /*

    You might see some C++ programs that use the size() function to get the length of a string.
    This is just an alias of length().
    It is completely up to you if you want to use length() or size():

    */

    cout << justTest << " " << "has the txt size of: " << justTest.size() << "\n\n";

    /*

    You can access the characters in a string by referring to its index number inside square brackets [].

    Note: String indexes start with 0: [0] is the first character. [1] is the second character, etc.

    */

    cout << justTest << " " << "Select first index: " << justTest[0] << "\n\n";

    /*

    To print the last character of a string, you can use the following code:

    */

    cout << "Select last index: " << justTest[justTest.length() - 1] << "\n\n";

    /* Change String Characters

    To change the value of a specific character in a string,
    refer to the index number, and use single quotes:

    */

    justAnotherText[0] = 'J';
    cout << "Select and change first index: " << justAnotherText << "\n\n";

    /*

    text[0] uses the array subscript operator,
    which is faster but does not perform bounds checking.
    Accessing an out-of-range index results in undefined behavior,
    potentially causing crashes or memory corruption.

    text.at(0) is a member function that performs bounds checking.
    If the index is invalid, it throws a std::out_of_range exception rather than causing undefined behavior,
    making it safer for debugging and robustness.

    Key Differences

    Feature	                text[0]	                         text.at(0)
    Bounds Checking	        None	                         Yes
    Error Handling	        Undefined Behavior	             Throws std::out_of_range
    Performance	            Faster	                         Slightly slower due to checks
    Use Case	            Performance-critical code	     Safety-critical or debugging

    In summary,
    use text[0] for performance when indices are guaranteed to be valid,
    and text.at(0) when safety and explicit error handling are priorities.

    */

    oneMoreExtraText.at(0) = 'J';

    cout << "Select and change first index with - at() :\n"
         << oneMoreExtraText << "\n\n";

    return 0;
}