#include<iostream>
using namespace std;

int main()
{

int r,c,b;
cin >>r;
cin >>c;
cin>>b;
int arr[r][c][b];
for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
        for(int k=0;k<b;k++){
            cin>>arr[i][j][k];
        }
    }
}
        cout<<"\narr[0][0][0] = "<<arr[0][0][0]<<"\n";
        cout<<"\narr[0][2][1] = "<<arr[0][2][1]<<"\n";
        cout<<"\narr[2][3][1] = "<<arr[2][3][1]<<"\n";

        return 0;
}