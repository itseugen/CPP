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