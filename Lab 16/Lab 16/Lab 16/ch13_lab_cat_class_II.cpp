//CSCI40
//Edgar Abundiz
// Application file

#include <iostream>
#include <string>
#include <cstdlib>
#include "Cat.h"
using namespace std;

//function protoype
bool again();


int main()
{

	//define variables
	Cat box;
	string CatName;
	string CatBreed;
	int CatAge;

	//Description
	cout << "This function lets you know what a cat does " << endl;

	do
	{
		//prompt user
		cout << "Hey! What's your name, cat?: ";
		cin >> CatName;
		cout << endl;

		cout << "Hey! What's your breed?: ";
		cin >> CatBreed;
		cout << endl;

		cout << "Hey! What's your age?: ";
		cin >> CatAge;
		cout << endl;

		//store name, breed, and age in box object
		box.setcat_name(CatName);
		box.setcat_breed(CatBreed);
		box.setcat_age(CatAge);

		//Display the cat data
		box.meow();
		cout << "I am " << box.getcat_name() << endl;
		box.meow();
		cout << "I am a " << box.getcat_breed() << endl;
		box.meow();
		cout << "I am " << box.getcat_age() << " years old" << endl;
		box.walk();
		box.run();
		box.jump();
		cout << endl;
	} while (again());

	system("pause");
	return 0;
}

//function definitions
bool again()
{
	char y;
	cout << "Repeat? (y/n): ";
	cin >> y;
	if (y == 'y' || y == 'Y')
		return true;
	else
		return false;
}



/*
This function lets you know what a cat does
Hey! What's your name, cat?: Charlie

Hey! What's your breed?: Minx

Hey! What's your age?: 2

Meow! I am Charlie
Meow! I am a Minx
Meow! I am 2 years old
I'm walking! I'm running! I'm jumping!
Repeat? (y/n): n
Press any key to continue . . .

This function lets you know what a cat does
Hey! What's your name, cat?: Catdog

Hey! What's your breed?: Siamese

Hey! What's your age?: 20

Meow! I am Catdog
Meow! I am a Siamese
Meow! I am 20 years old
I'm walking! I'm running! I'm jumping!
Repeat? (y/n): n

This function lets you know what a cat does
Hey! What's your name, cat?: Ragnarok

Hey! What's your breed?: Tabby

Hey! What's your age?: 1

Meow! I am Ragnarok
Meow! I am a Tabby
Meow! I am 1 years old
I'm walking! I'm running! I'm jumping!
Repeat? (y/n): n
Press any key to continue . . .
*/