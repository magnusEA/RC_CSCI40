// Lab 15 - C Strings
// CSCI 40
// Edgar Abundiz

#include<iostream>
#include<cstdlib>
#include<cctype>
#include<string>
#include<cstring>
using namespace std;

//function prototype
bool again();
void Description();

int main()
{
	//description of program outside loop so it doesn't repeat constantly
	Description();

	do
	{
		// define variables
		const int SIZE = 100;
		char sentence[SIZE];
		int vowel = 0, character = 0, consonant = 0, space = 0, count = 0;

		
		//to allow a sentence to be entered on a loop
		cin.ignore(100, '\n');

		//prompt user
		cout << "Enter a sentence: ";
		cin.getline(sentence, 100);
		cout << endl;

		//start loop 
		count = 0;
		while (sentence[count] != '\0')
		{
			if (sentence[count] == 'A' || sentence[count] == 'a')
				vowel++;

			else if (sentence[count] == 'E' || sentence[count] == 'e')
				vowel++;

			else if (sentence[count] == 'I' || sentence[count] == 'i')
				vowel++;

			else if (sentence[count] == 'O' || sentence[count] == 'o')
				vowel++;

			else if (sentence[count] == 'U' || sentence[count] == 'u')
				vowel++;

			else if (sentence[count] == ' ')
				space++;

			else
				consonant++;

			count++;
		}

		//make sentence uppercase
		count = 0;
		cout << "\n\n*** Uppercase: ";
		while (sentence[count] != '\0')
		{
			sentence[count]= (char)toupper(sentence[count]);
			cout << sentence[count];
			count++;
		}
		
		
	    // to breakdown parts of sentence
		cout << endl;
		cout << "*** There are " << consonant << " consonants. " << endl;
		cout << "*** There are " << vowel << " vowels. " << endl;

		//to count characters not including the spaces
		int length = strlen(sentence) - space;
		cout << "*** There are " << length << " characters, not including spaces." << endl << endl;

	} while (again());

	cout << endl;
	system("pause");
	return 0;
}




//Function Definitions
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

void Description()
{
	cout << "This program will breakdown parts of a sentence " << endl;
	cout << "------------------------------------------------" << endl;
}

/*
This program will breakdown parts of a sentence
------------------------------------------------

Enter a sentence: This is a sentence



*** Uppercase: THIS IS A SENTENCE
*** There are 9 consonants.
*** There are 6 vowels.
*** There are 15 characters, not including spaces.

Repeat? (y/n): y
Enter a sentence: This is a bigger sentence



*** Uppercase: THIS IS A BIGGER SENTENCE
*** There are 13 consonants.
*** There are 8 vowels.
*** There are 21 characters, not including spaces.

Repeat? (y/n): n


Press any key to continue . . .

This program will breakdown parts of a sentence
------------------------------------------------

Enter a sentence: how are you



*** Uppercase: HOW ARE YOU
*** There are 4 consonants.
*** There are 5 vowels.
*** There are 9 characters, not including spaces.

Repeat? (y/n): y
Enter a sentence: i am good



*** Uppercase: I AM GOOD
*** There are 3 consonants.
*** There are 4 vowels.
*** There are 7 characters, not including spaces.

Repeat? (y/n): n

Press any key to continue . . .
*/