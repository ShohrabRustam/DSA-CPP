#include <iostream>
using namespace std;

string higestRepeatingChar(string str) 
{

	int l = str.length();
	int ctr1 = 0, ctr2 = 0, high1 = 0, high2 = 0;
	int start = -1, end = 0;
	int temp1, temp2;
	char character;

	for (int i = 0; i < l; i++, end++)
	{
		if (start == -1) 
		{
			start = i;
		}

		if (str[i] == ' ' || i == l-1)
		{
			if (end == l - 1)
			{
				end += 1;
			}

			for (int j = start; j < end; j++)
			{
				character = str[j];

				for (int k = start; k < end; k++)
				{
					if (j == k)
					{
						continue;
					}
					else if (character == str[k])
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