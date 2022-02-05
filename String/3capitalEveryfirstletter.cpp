#include<iostream>
using namespace std;
string capitalFirstChar(string str){
    int l = str.length();
    int val = 'a' - 'A' ;
    for(int i=0;i<l;i++){
        if(str[i]>=97 && str[i]<=122)
        {
            if(str[i-1]==' ' || i==0){
            str[i]=str[i]-val;
            }
        }
    }
return str;
}
int main(){
    string str;
    getline(cin,str);
    cout <<capitalFirstChar(str);
}