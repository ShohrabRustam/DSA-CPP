#include <iostream>
using namespace std;

// or equals to k together
int minSwap(int *arr, int n, int k) 
{
    //smaller and equal element from k
	int count = 0;
	for (int i = 0; i < n; ++i)
		if (arr[i] <= k){
			++count;
        }

    // larger element to k
	int bad = 0;
	for (int i = 0; i < count; ++i)
		if (arr[i] > k)
			++bad;
	
	int ans = bad;
	for (int i = 0, j = count; j < n; ++i, ++j) {
		
		// Decrement count of previous window
		if (arr[i] > k)
			--bad;
		
		// Increment count of current window
		if (arr[j] > k)
			++bad;
		
		// Update ans if count of 'bad'
		// is less in current window
		ans = min(ans, bad);
	}
	return ans;
}

// Driver code
int main() {
	
	int arr[] = {2, 1, 5, 6, 3};
	int n = sizeof(arr) / sizeof(arr[0]);
	int k = 3;
	cout << minSwap(arr, n, k) <<endl;
	
	int arr1[] = {2, 7, 9, 5, 8, 7, 4};
	n = sizeof(arr1) / sizeof(arr1[0]);
	k = 5;
	cout << minSwap(arr1, n, k);
	return 0;
}
