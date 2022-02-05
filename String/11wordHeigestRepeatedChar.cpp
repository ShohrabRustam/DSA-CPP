#include <iostream>
using namespace std;

string higestRepeatingChar(string str) {

	int str_size = str.length();
	int ctr1 = 0, ctr2 = 0, high1 = 0, high2 = 0;
	int start = -1, end = 0;
	int temp1, temp2;
	char letter;

	for (int x = 0; x < str_size; x++, end++)
	{
		if (start == -1) 
		{
			start = x;
		}

		if (str[x] == ' ' || x == str_size-1)
		{
			if (end == str_size - 1)
			{
				end += 1;
			}

			for (int y = start; y < end; y++)
			{
				letter = str[y];

				for (int z = start; z < end; z++)
				{
					if (y == z)
					{
						continue;
					}
					else if (letter == str[z])
					{
						ctr1++;
					}
				}

				if (ctr1)
				{
					ctr2++;
				}
				

				if (ctr1 > high1 && ctr2 > high2)
				{
					high1 = ctr1;
					high2 = ctr2;
					temp1 = start;
					temp2 = end;
				}

				ctr1 = 0;
			}

			if (ctr2 > high2)
			{
				high2 = ctr2;
				temp1 = start;
				temp2 = end;
			}
			ctr2 = 0;

			start = end+1;
		}
	}

	if (high1 > 0)
	{
		string repeated;

		for (temp1; temp1 < temp2; temp1++)
		{
			repeated.push_back(str[temp1]);
		}

		return repeated;
	}
	else
	{
		return "-1";
	}
}

int main() {

	string str;
    cin>>str;
	cout << higestRepeatingChar(str) << endl;  
	
	return 0;
}