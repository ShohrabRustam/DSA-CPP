#include <iostream>
#include <string>
#include <cctype>
using namespace std;

string change_Case(string str) {

	for (int i = 0; i < str.length(); i++)
	{
		if (isupper(str[i]))
		{
			str[i] = tolower(str[i]);
		}
		else
		{
			str[i] = toupper(str[i]);
		}
	}

	return str;
}

int main() {
    string str;
    getline(cin,str);
    cout <<" Original String : "<<str<<endl;
	cout<<" After change the cases : "<<change_Case(str) << endl;
	return 0;
}