#include <iostream>
#include <string>
using namespace std;

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

string fullName = myName + " " + mylastname;
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

int main()
{
    cout << "This is" << " " << betterFullName << "\n\n";
    cout << "He is" << " " << myAge << " " << "years old" << "\n\n";
    cout << "He has the height of" << " " << myHeight << "\n\n";
    cout << "Is he alive" << " " << isAlive << " " << "and has the blood type of" << " " << bloodIdentifier << bloodBar << "\n\n";

    cout << "Never Ever Give Up has the txt length of: " << justTest.length();
    return 0;
}