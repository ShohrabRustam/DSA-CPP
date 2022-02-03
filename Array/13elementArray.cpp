#include<iostream>
using namespace std;

int main()
{
   int size;
    cout<<"Enter array size :: "<<endl;
    cin>>size;
    int i,a[size],pos;
        cout<<"\nEnter array elements :: "<<endl;

        for(i=0; i<size; i++)
        {
            cout<<"Enter arr["<<i<<"] Element :: "<<endl;
                cin>>a[i];
        }

  cout<<"Stored Data in Array :: "<<endl;

  for(i=0;i<size;i++)
  {
  cout<<" "<<a[i]<<" ";
  }

  cout<<"Enter position to Delete number :: "<<endl;
  cin>>pos;

  if(pos>size)
  {
    cout<<"This is out of range."<<endl;
  }
  else
   {
   --pos;
   for(i=pos;i<=size-1;i++)
   {
    a[i]=a[i+1];
   }
   cout<<"New Array is :: "<<endl;

  for(i=0;i<size-1;i++)
  {
    cout<<" "<<a[i]<<" ";
  }

  }
  cout<<"\n";

  return 0;

  }