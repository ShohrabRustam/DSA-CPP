#include <iostream>
#include <string>

using namespace std;

string Insert_dash(string num_str) 
{

	string result = num_str;

	for (int x = 0; x < num_str.length() - 1; x++)
	{
		if ((num_str[x] == '1' || num_str[x] == '3' || num_str[x] == '5' || num_str[x] == '7' || num_str[x] == '9') && (num_str[x + 1] == '1' || num_str[x + 1] == '3' || num_str[x + 1] == '5' || num_str[x + 1] == '7' || num_str[x + 1] == '9'))
		{
			result.insert(x+1,"-");
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
