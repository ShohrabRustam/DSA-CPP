#include<iostream>
using namespace std;
int main(){
    int n;
    cin >>n;
    int a[n],OnePlus=0;
    for(int i=0;i<n;i++){
        cin >>a[i];
    }
    for(int i=0;i<n;i++){
        OnePlus=OnePlus*10;
        OnePlus+=a[i];
    }
    OnePlus+=1;
    cout<<OnePlus;
return 0;
}