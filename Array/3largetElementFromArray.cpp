#include<iostream>
#include<algorithm>
using namespace std;
int find_largest(int A[], int n) {
  return *max_element(A, A + n);
}

int main() {
  int A[] = { 5,4,9,12,8};
  int n = sizeof(A) / sizeof(A[0]);
    cout << "Original array:";
    for (int i=0; i < n; i++) 
    cout << A[i] <<" ";
    
  cout << "\nLargest element of the said array: "<< find_largest(A, n);
  return 0;
}
