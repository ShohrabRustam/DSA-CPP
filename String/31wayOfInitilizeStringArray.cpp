
#include <iostream>
using namespace std;
int main()
{
	// Initialize array of pointer
	const char *colour[4] = { "Hello", "Rustam","Shohrab", "Armaan" };

	for (int i = 0; i < 4; i++)
		cout << colour[i] << endl;
	return 0;
}
#include <iostream>
using namespace std;
int main()
{
	char colour[4][10] = { "Hello", "Rustam", "Shohrab","Armaan" };

	for (int i = 0; i < 4; i++)
		cout << colour[i] << endl;

	return 0;
}
#include <iostream>
#include <string>
using namespace std;
int main()
{
	string colour[4] = { "Hello", "Rustam","Shohrab", "Armaan" };

	// Print Strings
	for (int i = 0; i < 4; i++)
		cout << colour[i] << endl;
}
// C++ program to demonstrate vector of strings using
#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main()
{
	vector<string> colour {"Hello", "Rustam", "Shohrab"};

	// Strings can be added at any time with push_back
	colour.push_back("Armaan");

	for (int i = 0; i < colour.size(); i++)
		cout << colour[i] << endl;
}
#include <iostream>
#include <array>
#include <string>
int main()
{
	// Initialize array
	array<string, 4> colour { "Hello", "Rustam", "Shohrab","Armaan" };

	for (int i = 0; i < 4; i++)
		cout << colour[i] << endl;

	return 0;
}
