#include<iostream>
#include<limits.h>
using namespace std;
void second_largest(int A[], int n)
  {
   int i, first, second;
 
    /* There should be atleast two elements */
    if (n < 2)
    {
        cout<< " Invalid Input ";
        return;
    }
 
    first = second = INT_MIN;
    for (i = 0; i < n ; i ++)
    {
  
        if (A[i] > first)
        {
            second = first;
            first = A[i];
        }
 

        else if (A[i] > second && A[i] != first)
        {
            second = A[i];
        }
    }
    if (second == INT_MIN)
     {
        cout<< "No second largest element";
     }
    else
     { 
        cout<< "\nThe second largest element is: " <<second<<endl;
     }
}



int main()
{
    int A[] = {7, 12, 9, 15, 19, 32, 56, 70};
    int n = sizeof(A)/sizeof(A[0]);
    cout << "Original array: ";
    for (int i=0; i < n; i++) 
    cout << A[i] <<" ";
    second_largest(A, n);
    return 0;
}
