#include <iostream>
using namespace std;

int main()
{
   int n,i;
   cout<<"Enter size of Array :: "<<endl;
    cin>>n;
    int a[n];
    cout<<"Enter elements to the array :: "<<endl;

    for(i=0;i<n;++i)
    {
        cout<<"Enter "<<i+1<<" element :: "<<endl;
        cin>>a[i];
    }

   cout << "Accessing Elements through Pointers are :: "<<endl;
   for(int i = 0; i < n; ++i)
   {
       cout << *(a + i)<<endl;
   }

    cout<<endl;

   return 0;
}