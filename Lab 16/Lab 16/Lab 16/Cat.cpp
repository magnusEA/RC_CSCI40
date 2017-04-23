//CSCI 40
// Edgar Abundiz
// Implementation file for Cat class

#include "Cat.h"
#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;


// class implementations

Cat::Cat()
{
	string name = "Pepsi";
	string breed = "Persian";
	int age = 1;
}

void Cat::setcat_name(string name)
{
	cat_name = name;
}

void Cat::setcat_breed(string breed)
{
	cat_breed =breed;
}

void Cat::setcat_age(int age)
{
	cat_age = age;
}

string Cat::getcat_name() const
{
	return cat_name;
}

string Cat::getcat_breed() const
{
	return cat_breed;
}

int Cat::getcat_age() const
{
	return cat_age;
}

void Cat::meow()
{
	cout << "Meow! ";
}

void Cat::walk()
{
	cout << "I'm walking! ";
}

void Cat::run()
{
	cout << "I'm running! ";
}

void Cat:: jump()
{
	cout << "I'm jumping! ";
}