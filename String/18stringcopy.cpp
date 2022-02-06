// Iterative CPP Program to copy one String
// to another.
#include <iostream>
using namespace std;
void copystr(char s1[], char s2[])
{
	int i = 0;
	for (i=0; s1[i] != '\0'; i++)
	s2[i] = s1[i];
	s2[i] = '\0';
}

// Driver function
int main()
{
	char s1[100] = "Hello";
	char s2[100] = "";
	copystr(s1, s2);
	cout << s2;
	return 0;
}
