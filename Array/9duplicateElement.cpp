#include<iostream>

using namespace std;

int main()
{
    int i,j,n;
    cout<<"Enter array size:: "<<endl;
    cin>>n;
    int a[n];
        cout<<"\nEnter array elements :: "<<endl;

        for(i=0; i<n; i++)
        {
            cout<<"\nEnter arr["<<i<<"] Element :: ";
                cin>>a[i];
        }

  cout<<"\nStored Data in Array :: \n\n";

  for(i=0;i<n;i++)
  {
  cout<<" "<<a[i]<<" ";
  }

  cout<<"\n\nDuplicate Values in Given Array are :: \n\n";
  for(i=0; i<n; i++)
   {
    for(j=i+1;j<n;j++)
    {
    if(a[i]==a[j])
    {
    cout<<" "<<a[i]<<" ";
    }
   }
   }

  cout<<endl;

  return 0;
 }