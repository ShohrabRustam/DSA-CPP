#include<iostream>

using namespace std;

int main()
{
    int size;
    cout<<"Enter array size :: "<<endl;
    cin>>size;
    int i,a[size],sum=0;
        cout<<"Enter array elements :: "<<endl;

        for(i=0; i<size; i++)
        {
            cout<<"\nEnter arr["<<i<<"] Element :: ";
                cin>>a[i];
        }

  cout<<"\nStored Data in Array :: \n\n";

  for(i=0;i<size;i++)
  {
  cout<<" "<<a[i]<<" ";
  }

   cout<<"\n\nSum of all Elements of array is :: ";

   for(i=0;i<size;i++)
   {
    sum=sum+a[i];
   }

  cout<<sum<<"\n";

  return 0;

}