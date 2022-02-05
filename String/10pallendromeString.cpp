#include<iostream>
using namespace std;
string pellendrome(string str){
int l;
string rev;
for(int i=l-1;i>=0;i--){
rev+=str[i];
}
if(rev==str){
    return "true";
}
return "false";
}
int main(){
    string str;
    getline(cin,str);
    cout <<pellendrome(str);
}