<h1 align="center">
	<p>
		C++
	</p>
</h1>
<h2 align="center">
	<p>
			Going from C to C++
	</p>
</h2>
<p align="center">
Coded in
	<a href="https://skillicons.dev">
		<img src="https://skillicons.dev/icons?i=cpp" />
	</a>
</p>

---
## The project:
- Ten subprojects to get to know C++.
---
<!-- ## CPP00: -->
<details>
<summary><b><span style="font-size: larger;">CPP00:</span></b></summary>

#### Megaphone:
- Converts all arguments to uppercase and prints them on the terminal.
#### Phonebook:
- A Phonebook containing eight Contacts.
- Each contact has a name, surname, nickname, number and a secret.
- If you try to Contacts to a full book, the oldest Contact gets replaced.
- ADD: To add a new contact.
- SEARCH: To see a shortlist of contacts and to get all information of a specific contact.
- EXIT: To exit the program, all saved contacts will be lost.
#### Dreamjob:
- Reconstruct a .cpp file from a header file and a tests.cpp file.
- Make sure all tests work as expected.
- Only timestamps and deconstructors can be different.
</details>

<!-- ## CPP01: -->
<details>
<summary><b><span style="font-size: larger;">CPP01:</span></b></summary>

#### BraiiiiiiinnnzzzZ:
- Implements two Zombie classes.
- One creates a Zombie object on the stack.
- The other creates a Zombie object dynamically.
- The Zombies announce themselves.
#### Moar brainz!:
- Creates multiple Zombie objects in one allocation.
- Names them and shows they work the same way, one allocated object would work.
#### HI THIS IS BRAIN:
- Shows the working of addresses, references and pointers in C++ using the memory of a string.
#### Unnecessary Violence:
- Implements a weapon class, that has a type string, as well as a function to get and set the type.
- Creates two human classes. HumanA takes the weapon in its constructor while HumanB takes a pointer.
- The main shows the working of the classes, as well as the ability of HumanB to take a different weapon object.
#### Sed is for losers:
- The program takes three arguments: An input file, and two strings.
- Every occurence of the first string in the file will be replaced with the second string before being put in a new file.
- Type 'make test' to have the program run on the four input files.
#### Harl 2.0:
- Creates a class that prints different complaints, depending on the input.
- Uses pointers to member functions, to achieve that.
#### Harl filter:
- Similar to the previous exercise, but this one takes the complaint Harl will make as an argument.
- The program takes either: DEBUG, INFO, WARNING or ERROR.
- It will then print all the levels above the given one, p. e: if INFO is input, Harl will print INFO, WARNING and ERROR.
- As per the instructions, this is achieved with a switch statement.
</details>

<!-- ## CPP02: -->
<details>
<summary><b><span style="font-size: larger;">CPP02:</span></b></summary>

#### My First Class in Orthodox Canonical Form:
- Basic information about floating-point numbers to create a fixed-point number.
- The first class with a default constructor, a destructor, a copy constructor and a copy assignment operator overload.
#### Towards a more useful fixed-point number class:
- Constructors taking an integer or a floating-point number.
- Conversion from fixed point number to float or int.
- Overloading the '<<' operator to correctly print a Fixed object.
#### Now we're talking:
- Implementing the standart operations (>, <, >=, <=, == and !=) for our fixed-point number.
- The operations +,-,*,/ with our fixed-point number.
- Pre and post in- and decrements.
- Functions min and max to return the smallest/biggest number of two fixed-point numbers given.
#### BSP:
- Using the fixed-point numbers to indicate wether a point is inside a triangle or not.
- A Class Point which implements a point object.
- The function bsp which calculates if the point is inside the triangle.
</details>

<!-- ## CPP03: -->
<details>
<summary><b><span style="font-size: larger;">CPP03:</span></b></summary>

#### ClapTrap:
- Creating a base class for the next exercises to build upon.
- It has health and energy points it uses for specific actions. If it runs out of either, the object will display special messages.
- The class has a function to attack, which displays a message and the amount of damage it would do (0 for ClapTrap).
- There is a function beRepaired which repaires n healt points on the cost of one energy point per use.
- There is a function takeDamage which reduces the amount of health points by n.
#### ScavTrap:
- A class inhereting from ClapTrap. It creates a ClapTrap with different hit, energy and attack points.
- It has its own attack function that gets called instead of the ClapTrap attack function as well as a guardGate function that prints a message.
- The con- and destruction chaining is done correctly with the ClapTrap being built first and destroyed last.
#### FragTrap:
- Same as the ScavTrap the FragTrap inherits from ClapTrap. It has different values on built and a highFivesGuys function that is special.
#### DiamondTrap:
- A class that inherits from both FragTrap and ScavTrap. It visualises the Diamond inheritance problem.
- Only one ClapTrap will be constructed which is used for both the FragTrap and the ScavTrap.
- The DiamondTrap can call the functions of both the FragTrap and the ScavTrap.
</details>


<!-- ## CPP04: -->
<details>
<summary><b><span style="font-size: larger;">CPP04:</span></b></summary>

#### Polymorphism:
- A base class Animal, of which both Cat and Dog inherit from.
- It implements a virtual makeSound() function, that Dog and Cat implement.
- There is a WrongAnimal and WrongCat class, that show what would happen if makeSound() wouldn't be virtual.

#### Deepcopy:
- A Class brain is created, which holds an array of strings. A brain is added to the Dog and Cat class.
- The goal is to make sure, brain is being deepcopied in the OCF.
#### Abstract class:
- Makes the Animal class abstract to make sure it can't be instantiated.
#### Interface & recap:
- Creating multiple abstract classes/interfaces.
- A character can hold four different items in its inventory.
- There are two possible items (Materias), Cure and Ice, which display different messages on use.
- Every inventory, and Materia is a deepcopy and will therefore be deleted safely.
- A MateriaSource can be used to learn Materias (up to four will be held per MateriaSource object, more won't be created). It can also be used to create Materias. If the wanted Materia is learned, a new one of that type will be created and returned.

</details>

<!-- ## CPP05: -->
<details>
<summary><b><span style="font-size: larger;">CPP05:</span></b></summary>

#### Bureaucrat:
- Creates a Bureaucrat which has a grade which will later work as a level for signing and executing.
- Uses Exceptions to catch errors if a Bureaucrat is created with wrong values.
#### Form:
- Creates a Form class. A Form has a required minimum grade for executing and signing.
- Uses Exceptions if initiated with wrong values.
- Uses Exceptions to print the response of the signForm function in the Bureaucrat.
#### More Forms:
- Makes form an Abstract class.
- Creates three derived classes that build upon a Form. Each derived class does something different.
- Adds a execute function that allows the Bureaucrat to execute any of the Forms.
#### Intern
- A new class, that takes a Form type and creates a new Form and returns it.

</details>

<!-- ## CPP06: -->
<details>
<summary><b><span style="font-size: larger;">CPP06:</span></b></summary>

#### Scalar Conversion:
- Takes a String and converts it into a char, integer, float and double.
- Also takes a string containing a character ('a'), to use as a value.
- Error proof for wrong input.
- Uses static casts.
#### Serializer:
- Takes a pointer to the data struct and converts it to a uintptr_t.
- Also reconverts the uintptr_t into the data struct.
- Uses reinterpret casts.
#### Identifier:
- Generates a random type of a Bass class (either A, B or C).
- Identifies which type of Base it is from either a pointer or a reference.
- Uses dynamic cast.

</details>

<!-- ## CPP07: -->
<details>
<summary><b><span style="font-size: larger;">CPP07:</span></b></summary>

#### Function templates:
- Creating templates for different functions.
- A swap function template that takes two values and swaps them.
- A min function template that compares two values and returns the smaller one.
- And a max function template that returns the bigger value.
#### A more complicated function template:
- Takes the address of an array, the lenght of the array and a function to apply to all elements of the array.
- The function templete works with any type of array and the function the template takes can be another function template.
#### Class templates:
- A class Array template that creates an Array.
- The Array gets constructed with n Elements given to the constructor or as an empty Array.
- Has a working copy constructor and copy assignment operator that ensure deep copies.
- Elements can be accessed through the [] operator.
- If the accessed index is out of bounds, an exception gets thrown.
- A size function that returns the size of the array.

</details>

<!-- ## CPP08: -->
<details>
<summary><b><span style="font-size: larger;">CPP08:</span></b></summary>

#### Easy find:
- A function that accepts a template type T and an integer.
- T is a container of integers.
- The function finds the first occurence of the integer inside T and returns it.
#### Span:
- A class that stores a maximum of N integers.
- A function addNumber() to add a number and a function addXNumbers() to add X random numbers to the container.
- Throws an exception if you try to add more than N elements.
- Two functions shortestSpan() and longestSpan() that will return the difference between the two smallest/biggest elements.
#### Mutant Stack:
- A stack container that is iterable.
- Class inherits from std::stack.
- Functions begin() and end() that return an iterator to the beginning/end of the stack.

</details>

<!-- ## CPP09: -->
<details>
<summary><b><span style="font-size: larger;">CPP09:</span></b></summary>

#### Bitcoin Exchange:
- A program to calculate ones Bitcoins value at a certain date.
- The dataset called data.csv has to be present at root, the program accesses it to get the bitcoin rate at certain dates.
- The program takes a file as argument, the file hast to be in the format "date | value".
- The date format is yyyy-mm-dd. A valid value has to be a positive int, float or double, not bigger than INT_MAX.
- If the given date is not in the dataset, it will take the next lower value, if the value is lower than any value in the dataset, an error will be shown.
- Used Container: std::map to use the date-string to access elements.
#### Reverse Polish Notation:
- A program that calculates a reversed Polish mathematical expression.
- Neither the end result nor any result inbetween can be bigger than INT_MAX, it will overflow.
- Should a wrong equation be passed, an error will be thrown.
- The tokens '+', '-', '*' and '/' are supported.
- Used container: std::stack since only the top element needs to be accessed.
#### PmergeMe:
- A program that sorts a positive integer sequence.
- It uses a variation of the Ford-Johnson algorithm to sort the numbers.
- If a non-positive integer number gets parsed, an error is thrown.
- To store and sort the sequence std::vector and std::deque are used.
- The program will print the time in microseconds each container used with the same sorting algorithm.
- For smaller sequences std::deque will be faster because of its memory segmentation.
- For bigger sequences std::vector will get faster since the continous memory string allows for faster access.

</details>

---
## Installation and Usage
1. Clone the repository:
```shell
git clone https://github.com/itseugen/CPP
```
2. Enter the directory of the exercise you want to test and build the program:
```shell
cd CPP00/ex00
make
```
3. Execute the progam. Example:
```shell
./megaphone "hello world ! ! !"
```
---
<sub><sup>This project is part of my studies at 42 Heilbronn</sup></sub>