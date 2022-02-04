// CPP program to merge two unsorted lists
// in sorted order
#include<iostream>
using namespace std;

void sortedMerge(int a[], int b[], int result[],int n, int m)
{
	// Concatenate two arrays
	int i = 0, j = 0, k = 0;
	while (i < n) {
		result[k++] = a[i++];
	}
	while (j < m) {
		result[k++] = b[j++];
	}

	// sorting the res array
	sort(result, result + n + m);
}

// Driver code
int main()
{
	int a[] = { 10, 5, 15 };
	int b[] = { 20, 3, 2, 12 };
	int n = sizeof(a) / sizeof(a[0]);
	int m = sizeof(b) / sizeof(b[0]);

	// Final merge list
	int result[n + m];
	sortedMerge(a, b, result, n, m);

	cout << "Sorted merged list :";
	for (int i = 0; i < n + m; i++)
		cout << " " << result[i];
	cout <<endl;

	return 0;
}
