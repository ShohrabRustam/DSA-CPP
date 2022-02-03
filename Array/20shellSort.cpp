#include<iostream>

using namespace std;

void sort(int a[],int n)
{
    int gap,i,j,temp;

    for(gap=n/2;gap>0;gap/=2)
    {
        for(i=gap;i<n;i++)
        {
            temp=a[i];
            for(j=i;j>=gap && a[j-gap]>temp; j=j-gap)
                a[j]=a[j-gap];

            a[j]=temp;
        }
    }
}

int main()
{
    int i,n;

    cout<<"Enter size of Array :: "<<endl;
    cin>>n;
    int a[n];
    cout<<"Enter elements to the array :: "<<endl;

    for(i=0;i<n;++i)
    {
        cout<<"Enter "<<i+1<<" element :: "<<endl;
        cin>>a[i];
    }


    sort(a,n);

    cout<<"After shell sort, Sorted List is :: "<<endl;
    for(i=0;i<n;++i)
    {
        cout<<a[i]<<"  ";
    }

    cout<<"\n";

    return 0;
}