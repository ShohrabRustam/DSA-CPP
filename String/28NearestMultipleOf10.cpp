#include <iostream>
using namespace std;

int round(int n)
{
	int a = (n / 10) * 10;
	
	int b = a + 10;

	return (n - a > b - n)? b : a;
}

int main()
{
	int n;
    cin >>n;
	cout << round(n) << endl;
	return 0;
}
