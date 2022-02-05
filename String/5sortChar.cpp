#include<iostream>
using namespace std;
string sortChar(string str){
    int l = str.length();
    for(int i=0;i<l;i++){
        for(int j=i+1;j<l;j++){
            if(str[i]<str[j]){
                swap(str[i],str[j]);
            }
        }
    }
    return str;
}
int main(){
    string str;
    getline(cin,str);
    cout <<sortChar(str);
}