/*
* stringApp.cpp
*
*  Created on: 19/03/2016
*      Author: dlynazmi
*/

//Code taken from elp to be used for Git demo

#include <iostream>
#include <string>

using namespace std;

string convertCase(string);
string eraseVowels(string);
string replaceDoubleBlanks(string);
string substring(string, int, int);


int main()
{
	string sentence = "";
	int offset = 0, len = 0;
	//char firstCh;
	//string secondCh;

	sentence = "ThiS iS a CoOl program BrO";
	cout << convertCase(sentence) << endl;

	sentence = "Programming Life 2018";
	cout << eraseVowels(sentence) << endl;

	sentence = "Grim  returns  to the  planet of  apes!!";
	cout << replaceDoubleBlanks(sentence) << endl;

	cout << "Enter a word/sentence to display its substring: ";
	getline(cin, sentence);

	cout << "Enter the offset value and the length of the substring (separated by a space): ";
	cin >> offset >> len;
	cout << substring(sentence, offset, len) << endl;


	system("pause");
	return 0;
}

string convertCase(string str)
{
	string s = "";

	for (int i = 0; i < str.length(); i++)
	{
		if (str[i] == tolower(str[i]))
			s += toupper(str[i]);
		else
			s += tolower(str[i]);
	}

	return s;
}

string eraseVowels(string str)
{
	int i = 0;
	while (i < str.length())
	{
		char tempStr = tolower(str[i]);
		switch (tempStr)
		{
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
			str.erase(i, 1);
			i--;
			break;

		default:
			i++;
			break;
		}

	}
	return str;
}



string replaceDoubleBlanks(string str)
{
	string s = "  ";

	int index = str.find(s);
	while (index != -1)
	{
		str = str.erase(index, 1);
		index = str.find(s, index--);
	}

	return str;
}

string substring(string str, int offset, int len)
{
	str = str.substr(offset - 1, len);
	return str;
}

