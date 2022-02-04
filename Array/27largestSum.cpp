// C++ program to print largest contiguous array sum
#include<iostream>
#include<climits>
using namespace std;

int maxSubArraySum(int a[], int n)
{
	int max_sum = INT_MIN;
    int max_end = 0;

	for (int i = 0; i < n; i++)
	{
		max_end = max_end + a[i];
		if (max_sum < max_end)
			max_sum = max_end;

		if (max_end < 0)
			max_end = 0;
	}
	return max_sum;
}

/*Driver program to test maxSubArraySum*/
int main()
{
    int n;
    cin >>n;
	int a[n];
    for(int i=0;i<n;i++){
        cin >>a[i];
    }
	int max_sum = maxSubArraySum(a, n);
	cout << "Maximum contiguous sum is : " << max_sum;
	return 0;
}
