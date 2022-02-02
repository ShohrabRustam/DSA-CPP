#include <iostream>
using namespace std;
int main() 
{
    int N,i=0;
    cin>>N;
    int *A = new int[N];
    while(N>i){
        cin>>A[i++];
        
    }
    while(N){
        cout<<A[--N]<<' ';
    }
    delete[] A;
    
    return 0;
}