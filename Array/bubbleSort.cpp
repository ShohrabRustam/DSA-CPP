#include<iostream>
using namespace std;
int main(){
      int arr[] = {5, 6, 2 ,6, 9, 0, -1}, n = 7, i, j;
   
   for(i = 0; i < n - 1; ++i)
   { 
      int swapped = 0;

      for(j = 0; j < (n - i - 1); ++j)
         if(arr[j] > arr[j+1])
         {
            int temp = arr[j];
            arr[j] = arr[j+1];
            arr[j+1] = temp;

            swapped = 1;
         }
      if(!swapped)
         break;
   }
         
   cout<<"Array after sorting: "<<endl;
   for(i = 0; i < n; ++i)
      cout<<arr[i]<<" ";
 
   return 0;
}