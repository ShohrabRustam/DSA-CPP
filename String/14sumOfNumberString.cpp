#include <iostream>
#include <string>

using namespace std;

int find_nums_and_sum(string str) {

	int sum_num = 0;
	string temp_str;

	for (int i = 0; i < str.length(); i++)
	{
		if (isdigit(str[i]))
		{
			temp_str.push_back(str[i]);

			for (int j = i + 1; j < str.length(); j++)
			{
				if (j >= str.length())
				{
					break;
				}
				else if (isdigit(str[j]))
				{
					temp_str.push_back(str[j]);
					i = j;
				}
				else
				{
					break;
				}
			}

			sum_num += stoi(temp_str);
			temp_str.clear();
		}
	}

	return sum_num;
}

int main() {
    string str;
    cin >>str;

	cout  << find_nums_and_sum(str) << endl;
 	return 0;
}
