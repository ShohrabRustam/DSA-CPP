#include <iostream>
using namespace std;

// Returns true if s is a number else false
bool isNumber(string s)
{
	for (int i = 0; i < s.length(); i++)
		if (isdigit(s[i]) == false)
			return false;

	return true;
}

int main()
{
	string str ;
    cin >>str;

	if (isNumber(str))
		cout << "Integer";

	// Function returns 0 if the input is
	// not an integer
	else
		cout << "String";
}
