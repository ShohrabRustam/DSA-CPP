// C++ program to print initials of a name
#include <iostream>
#include <cctype>
using namespace std;
void printInitials(const string& name)
{
	if (name.length() == 0)
		return;

	cout << (char)toupper(name[0]);
	for (int i = 1; i < name.length() - 1; i++)
		if (name[i] == ' ')
			cout << " " << (char)toupper(name[i + 1]);
}

int main()
{
	string name ;
    cin >>name;
	printInitials(name);
	return 0;
}