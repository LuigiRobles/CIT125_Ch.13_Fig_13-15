// CIT125 Intro To C++ Luigi Robles
// 08-02-2020 Summer Term
// Ch.13 pg.479 Fig.13-15 rearrange name program
// displays the last name,followed by a comma, 
// a space, and then first name

#include <iostream>
#include <string>
using namespace std;

int main()
{
	//declare and initialize variables
	string firstLast = "";
	string first = "";
	string last = "";
	int spaceLocation = 0;

	//get first and last name
	cout << "Name (first and last only): ";
	getline(cin, firstLast); //input part of IPO

	//locate space, then pull out first and last names
	//processing part of IPO
	spaceLocation = firstLast.find(" ", 0); 
	first = firstLast.substr(0, spaceLocation);
	last = firstLast.substr(spaceLocation + 1);

	//display rearranged name
	cout << last << ", " << first << endl; //output part of IPO
	return 0;
} //end of main function