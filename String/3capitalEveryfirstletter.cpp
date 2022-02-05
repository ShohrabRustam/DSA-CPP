#include<iostream>
using namespace std;
string capitalFirstChar(string str){
    int l = str.length();
    int val = 'a'-'A' ;
    for(int i=0;i<l;i++){
        if(str[i]>=65 && str[i]<=97){
            if(i=0){
                str[i]=str[i]-val;
            }
            else if(str[i-1]==' '){
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