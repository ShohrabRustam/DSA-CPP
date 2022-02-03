
#include<iostream>

using namespace std;

int main()
{
    int size;
    cout<<"Enter array size( Max:50 ) :: "<<endl;
    cin>>size;
        cout<<"\nEnter array elements :: "<<endl;
int a[size];
        for(int i=0; i<size; i++)
        {
            cout<<"\nEnter arr["<<i<<"] Element :: "<<endl;
                cin>>a[i];
        }

  cout<<"Stored Data Before Sorting In Array :: "<<endl;

  for(int i=0;i<size;i++)
  {
  cout<<" "<<a[i]<<" ";
  }
int temp;
 for(int i=0;i<size;i++)
 {
     for(int j=0;j<size-i-1;j++)
     {
         if(a[j]>a[j+1])
         {
             temp=a[j];
             a[j]=a[j+1];
             a[j+1]=temp;
         }
     }
 }

 cout<<"\nStored Data After Sorting In Array :: "<<endl;

 for(int i=0;i<size;i++)
  {
  cout<<" "<<a[i]<<" ";
  }

  cout<<endl;

  return 0;

 }