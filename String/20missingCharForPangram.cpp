
#include<iostream>
#include<vector>
using namespace std;
const int MAX_CHAR = 26;

string missingChars(string str)
{
	// A boolean array to store characters
	// present in string.
	bool present[MAX_CHAR] = {false};

	for (int i=0; i<str.length(); i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			present[str[i]-'a'] = true;
		else if (str[i] >= 'A' && str[i] <= 'Z')
			present[str[i]-'A'] = true;
	}

	string res = "";
	for (int i=0; i<MAX_CHAR; i++)
		if (present[i] == false)
			res.push_back((char)(i+'a'));

	return res;
}

// Driver program
int main()
{
	string str = "The quick brown fox jumps "
				"over the lazy dog";
	cout << missingChars(str);
	return 0;
}	
