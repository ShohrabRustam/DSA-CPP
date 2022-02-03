#include<iostream>
using namespace std;

int main()
{

    int m;
    cout<<"Enter size of matrix () :: "<<endl;
    cin>>m;
    int arr1[m][m], arr2[m][m], arr3[m][m], i, j,n;
    cout<<"Enter Elements to Matrix A Below :: "<<endl;

    for(i=0;i<m;i++)
    {
        for(j=0;j<m;++j)
        {
            cout<<"Enter arr1["<<i<<"]["<<j<<"] Element :: "<<endl;
            cin>>arr1[i][j];
        }

    }

    cout<<"Enter Elements to Matrix B Below :: "<<endl;
    for(i=0;i<m;i++)
    {
        for(j=0;j<m;++j)
        {
            cout<<"Enter arr2["<<i<<"]["<<j<<"] Element :: "<<endl;
            cin>>arr2[i][j];
        }

    }


        cout<<"\nAdding Matrix ( A + B ) ..... \n";
        for(i=0; i<m; i++)
        {
                for(j=0; j<m; j++)
                {
                        arr3[i][j]=arr1[i][j]+arr2[i][j];
                }
        }

        cout<<"\nAfter Addition, Matrix C is :: \n";

        for (i = 0; i < m; ++i)
        {
            for (j = 0; j < m; ++j)
            {
                cout<<"\t"<<arr3[i][j];
            }
           cout <<endl;
        }

        return 0;
}