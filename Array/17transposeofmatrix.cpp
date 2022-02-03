#include <iostream>
using namespace std;

int main()
{
    int  r, c, i, j;

    cout << "Enter rows of matrix: "<<endl;
    cin >> r;
    cout << "Enter columns of matrix: "<<endl;
    cin >> c;
    int a[r][c], trans[r][c];

    cout<<"Enter Elements to Matrix Below :: "<<endl;

    for(i=0;i<r;i++)
    {
        for(j=0;j<c;++j)
        {
            cout<<"Enter a1["<<i<<"]["<<j<<"] Element :: "<<endl;
            cin>>a[i][j];
        }

    }
    // Displaying the matrix a[][]
    cout << " The Entered Matrix is :: " << endl;
    for (i = 0; i < r; ++i)
        {
            for (j = 0; j < c; ++j)
            {
                cout<<"\t"<<a[i][j];
            }
            cout<<endl;
        }

    // Finding transpose of matrix a[][] and storing it in array trans[][].
    for(i = 0; i < r; ++i)
        for(j = 0; j < c; ++j)
        {
            trans[j][i]=a[i][j];
        }

    // Displaying the transpose,i.e, Displaying array trans[][].
    cout << endl << "Transpose of Matrix :: " << endl;
    for (i = 0; i < r; ++i)
        {
            for (j = 0; j < c; ++j)
            {
                cout<<"\t"<<trans[i][j];
            }
            cout <<endl;
            }

    return 0;
}