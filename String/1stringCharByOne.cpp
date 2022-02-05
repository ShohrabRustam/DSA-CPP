#include<iostream>
using namespace std;
string stringCharInc(string str){
int l = str.length();
for(int i=0;i<l;i++){
    if((str[i]>='a' && str[i]<'z')||(str[i]>='A' && str[i]<'Z')){
        str[i]=str[i]+1;
    }
    if(str[i]=='z'){
        str[i]='a';
    }

    if(str[i]=='Z'){
        str[i]='A';
    }
}
return str;
}
int main(){
    string str;
    getline(cin ,str);
    cout<<stringCharInc(str);
}