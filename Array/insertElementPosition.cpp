#include<iostream>

using namespace std;

int main()
{
    int size;
    cout<<"Enter array size :: "<<endl;
    cin>>size;
    int  i,a[size],no,pos;
        cout<<"Enter array elements :: "<<endl;

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

  cout<<"Enter position to insert number :: "<<endl;
  cin>>pos;

  if(pos>size)
  {
    cout<<"\nThis is out of range.\n";
  }
  else
  {
    cout<<"\nEnter number to be inserted :: ";
    cin>>no;
    --pos;

  for(i=size;i>=pos;i--)
  {
    a[i+1]=a[i];
  }
  a[pos]=no;

  cout<<"New Array is :: "<<endl;

  for(i=0;i<size+1;i++)
  {
    cout<<" "<<a[i]<<" ";
  }

  }
  cout<<endl;

  return 0;

  }