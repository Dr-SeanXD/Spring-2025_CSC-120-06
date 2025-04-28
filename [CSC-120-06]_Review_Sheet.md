# Intro. to Computer Science/OOP [CSC-120] - Review

## [GitHub Repository](https://github.com/Dr-SeanXD/Spring-2025_CSC-120-06)

---

# Process of Writing Code

- Source Code: The code you're writing

- Pre-Processor: Including "codes" in your source code (i.e. ```#include <iostream>```)

- Process: Source Code -> Pre-Processor -> Compiler -> Binary Code -> Linker -> Executable File

# Elements in the Program

- Keywords/Reserved Words (i.e. int, double, float, char, string, bool) -> Comes with the language

- Programmer-Defined Identifiers (i.e. Variable Names)

- Operators (i.e. ```<<```)

- Punctuations (i.e. comma, semi-colon)

- Syntax

- Main Function (Entry Point/Driver Function)

# Errors

- Pre-Processor Error: Maybe file doesn't exist?

- Syntax Error: Compile Error

- Run-Time Error: Only happening when the code is running (i.e. dividing by 0)

- Logical Error: Code isn't running as expected

# Input/Output

## Cin & Cout

- Stands for **"Character Input/Output"**

```C++
#include <iostream>
using namespace std;

int main() {
	int num1, num2;
	cin >> num1 >> num2;
	cout << num1 + num2 << endl;
}
```

## Escape Character

**IS A CHARACTER**

EX:

- \n: New Line
- \t: Tab
- \b: Blank

```C++
#include <iostream>
using namespace std;

int main() {
	cout << "Hello World!\n";
	cout << "Hello World!" << endl;
}
```

Both will do the same thing, which is switching to a new line.

## Reading & Writing Files

**Use ```#include <fstream>``` or file access**

- Input: ifstream
- Output: ofstream

```C++
#include <iostream>
using namespace std;

int main() {

	//Declaring variables.
	ifstream inFile;
	ofstream outFile;
}
```

Opening Files:

```C++
#include <iostream>
using namespace std;

int main() {

	ifstream inFile;
	inFile.open("text.txt"); //File name can include the whole path.

	//See if the file exists.
	if (!inFile) {
		cout << "File doesn't exist!" << endl;
	}
}
```

# Data Types

## Integer (int)

- Between **about** -2B ~ 2B

- 4 Bytes (32 bits)

- By using **unsigned** -> all positive number -> double the "space"

## Float (float)

- 4 Bytes (32 bits)

- Holds decimal places (not usually used)

## Double (double)

- 8 Bytes (64 bits)

- Also holds decimal places like float, more commonly used

## Character (char)

- 1 Byte (8 bits)

- Total Character Number: 2^7 = 128

- ASCII Code: Each character has a matching number

## Boolean (bool)

- 1 Byte (8 bits)

- Can only be **true or false**

- Things other than 0 will be false; otherwise, true

## Operations

### Modulus (%)

- Find the remainder of the division

- Cannot do with decimals

### Division

```C++
#include <iostream>
using namespace std;

int main () {
	cout << 13/5 << endl; //Prints 2

	cout << 13/5.0 << endl; //Prints 2.6
}
```

# Assignments & Initialization

## Initialization

First time giving a value.

```C++
#include <iostream>
using namespace std;

int main() {
	int x = 10;
}
```

## Assignment

Second+ time giving a value again.

```C++
#include <iostream>
using namespace std;

int main() {
	int x = 10; //Initialization

	x = 20; //Assignment
}
```

# Scope

- Main is a scope, where variables declared inside cannot be accessed outside the scope

- Scope of a variable: the part of the program in which the variable can be accessed

```C++
#include <iostream>
using namespace std;

int main() {
	int x; // Can only be recognized in main().
}
```

# Condition

## If-Else Statement

Asking questions

EX: If a variable is equaled to a certain value

The result of a condition is always true or false

```C++
#include <iostream>
using namespace std;

int main() {
	int income = 1000;

	//Is x equaled to 100?

	if (income > 1000) {
		cout << "You are rich." << endl;
	}
	else {
		cout << "You are poor." << endl;
	}

	//Going to print "You are poor." because income isn't greater than 1000.
}
```

## Only If

```C++
#include <iostream>
using namespace std;

int main() {
	int income = 1000;

	if (income > 1000) {
		cout << "You are rich." << endl;
	}

	//Nothing will be printed because the if is passed.
}
```

## Nested-If

If inside of an if statement (or more)

```C++
#include <iostream>
using namespace std;

int main() {

	int score = 100;

	if (score >= 94) {
		cout << "You get an A!\n";

		if (score == 100) {
			cout << "You also get a full!\n";
		}
	}
}
```

## Relational Operators

| Operators | Meaning                 |
| :-------- | ----------------------- |
| >         | Greater Than            |
| <         | Less Than               |
| >=        | Greater Than & Equal To |
| <=        | Less Than & Equal To    |
| ==        | Equal To                |
| !=        | Not Equal To            |

## Logical Operators

| Operator | English | Meaning                                                                                                         |
| :------- | ------- | --------------------------------------------------------------------------------------------------------------- |
| &&       | AND     | New [[Relational Expressions]] will be true if both conditions are true. Otherwise, it's false.                 |
| \|\|     | OR      | New [[Relational Expressions]] will be true if either of the conditions is true. If both are false, it's false. |
| !        | NOT     | Opposite of the expression.                                                                                     |

## Relational Expressions

**Result of condition can be assigned as variable (boolean)**

```C++
#include <iostream>
using namespace std;

int main() {
	bool result;

	int x = 10, y = 20;

	result = x == y;

	/*
	x == y is a conditional statement, which will return either true
	or false.
	*/

	//In this case, result will be false since x != y.
}
```

## Conditional Operators

**Shortens the if-else statements**

Format: expression ? expression : expression;

```C++
#include <iostream>
using namespace std;

int main() {

	int x = 10, y, z;

	//If x > 0, y = 10. Else, z = 10.
	x > 0 ? y = 10 : z = 10;

	//Same code.

	if (x > 0) {
		y = 10;
	}
	else z = 10;

	return 0;
}
```

## Flags

Usually implemented as "bool"

- 0 = false
- non-0 = true

# Loops

## While Loop

- Executes "same code" for many times

- Not sure how many times the loop will run

- Statement will return true or false

## For Loop

Knows **exactly** how many times to execute code

### 3 Expressions in For Loop

- Initialization --> Start with a number (counter)
- How many times? (Condition)
- Plus 1 (or other statements)

```C++
#include <iostream>
using namespace std;

int main() {
	//Prints "My name is Sean!" 10 times.
	for (int i = 0; i<10; i++) {
		cout << "My name is Sean!" << endl;
	}

	//Initialization: int i = 0;
	//How many times? (Condition): i<10;
	//Plus 1 (or other statements): i++
}
```

## Do-While

Basically the same as while but **guarantee** at least 1 execution

## Nested Loops

A nested loop is a loop inside the body of another loop

Inner (inside), outer (outside) loops:

```C++
#include <iostream>
using namespace std;

int main() {

	//This loop will be executed 9 times.
	for (int i = 0; i<3; i++) {
		for (int j = 0; j<3; j++) {
			cout << "HI\n";
		}
	}
}
```

## Range Loop

```C++
#include <iostream>
using namespace std;

int main() {
	string text = "text";

	cout << "Characters in the string are: \n";
	for (char ch : text) {
		cout << ch << '\n';
	}
}
```

# Functions

EX:

```C++
void add() {
	int a = 1, b = 2;
	cout << a + b << endl;
}
```

- Functions that don't return a value are declared as "void"

- Functions that return values are declared whatever value they return

- Function parameters are considered local

## Parts of Functions

1. Prototype (declaration of the function)

2. Definition: What does the function do?

3. Call of function

# Array/Vector

**List/Collection of data**

Reserving the numbers of bytes needed for the array in RAM

```C++
#include <iostream>
using namespace std;

int main() {

	//5 grades --> 20 bytes reserved in memory
	int grades[5];

	//Index starts from 0 --> 0 Index
	grades[0] = 100;
	grades[1] = 90;
	grades[2] = 80;
	grades[3] = 70;
	grades[4] = 60;

	return 0;
}
```

- Global Array -> All elements initialized to 0

- Local Array -> Uninitialized

- Static Array -> Doesn't change size (in C++).