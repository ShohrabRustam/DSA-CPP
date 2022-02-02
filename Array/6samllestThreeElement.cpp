#include <bits/stdc++.h>
#include<limits.h>
using namespace std;

void three_largest(int arr[], int n)
  {
   int i, first, second, third;
    third = first = second = INT_MAX;
  
    if (n < 3)
    {
        cout << "Invalid Input";
    }
  
    for (i = 0; i <n ; i ++)
    {
        if (arr[i] < first)
        {
            third = second;
            second = first;
            first = arr[i];
        }
         else if (arr[i] < second)
        {
            third = second;
            second = arr[i];
        }
  
        else if (arr[i] <third)
            third = arr[i];
    }
  
      cout << "/nThree smallest elements are: " <<first <<", "<< second <<", "<< third;
}
int main()
{
    int A[] = {7, 12, 9, 15, 19, 32, 56, 70};
    int n = sizeof(A)/sizeof(A[0]);
    cout << "Original array: ";
    for (int i=0; i < n; i++) 
    cout << A[i] <<" ";
   three_largest(A, n);
    return 0;
}
