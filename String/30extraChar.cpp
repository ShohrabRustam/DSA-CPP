// CPP program to find extra character in one
// string
#include <iostream>
#include<map>
#include<unordered_map>
using namespace std;

char extraCharcter(string strA, string strB)
{
	// store string values in map
	unordered_map<char, int> m1;

	// store second string in map with frequency
	for (int i = 0; i < strB.length(); i++)
		m1[strB[i]]++;

	// store first string in map with frequency
	for (int i = 0; i < strA.length(); i++)
		m1[strA[i]]--;

	for (auto h1 = m1.begin(); h1 != m1.end(); h1++) {

		// if the frequency is 1 then this
		// character is which is added extra
		if (h1->second == 1)
			return h1->first;
	}
}

int main()
{

    string s1;
    cin >>s1;
    string s2;
    cin >>s2;
	// find Extra Character
	cout << extraCharcter(s1, s2);
}
