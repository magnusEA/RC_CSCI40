//CSCI 40
//Edgar Abunduiz
// Header file- Cat.h

#include <string>
using namespace std;

#ifndef CAT_H
#define CAT_H

//begin class for cat
class Cat
{
private:
	string cat_name;
	string cat_breed;
	int cat_age;

public:
	Cat();

	void setcat_name(string);
	void setcat_breed(string);
	void setcat_age(int);
	string getcat_name() const;
	string getcat_breed() const;
	int getcat_age() const;
	void meow();
	void walk();
	void run();
	void jump();
};

#endif 