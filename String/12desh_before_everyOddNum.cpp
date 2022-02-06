#include <iostream>
#include <string>

using namespace std;

string Insert_dash(string num_str) 
{

	string result = num_str;

	for (int i = 0; i < num_str.length() - 1; i++)
	{
		if ((num_str[i] == '1' || num_str[i] == '3' || num_str[i] == '5' || num_str[i] == '7' || num_str[i] == '9') && (num_str[i + 1] == '1' || num_str[i + 1] == '3' || num_str[i + 1] == '5' || num_str[i + 1] == '7' || num_str[i + 1] == '9'))
		{
			result.insert(i+1,"-");
			num_str = result;
		}
	}

	return result;
}

int main() {

string str;
getline(cin,str);
cout <<Insert_dash(str);
	return 0;
}
