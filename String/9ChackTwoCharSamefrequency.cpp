#include <iostream>
#include <string>

using namespace std;

string count_chars(string str, string chr1, string chr2) {

	int ctr1 = 0, ctr2 = 0;

	for (int x = 0; x < str.length(); x++)
	{
		if (str[x] == chr1[0])
			ctr1++;

		if (str[x] == chr2[0])
			ctr2++;
	}

	if (ctr1 == ctr2)
	{
		return "True";
	}
	else
	{
		return "False";
	}
}

int main() {

	cout << count_chars("aabcdeef","a","e") << endl; // true
    cout << "\n" << count_chars("aabcdef","a","e") << endl; //false
    cout << "\n" << count_chars("aab11cde22f","1","2") << endl; //true
	return 0;
}