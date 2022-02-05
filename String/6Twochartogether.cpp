#include<iostream>
using namespace std;
int charTogether(string s, char a, char  b){
    int count =0;
    int l = s.length();
    for(int i=0;i<l;i++){
        if((s[i]==a && s[i+1]==b) || (s[i]==b && s[i+1]==a) )
        {
            count++;
            }
    }
    return count;
}
int main(){
    string s;
    getline(cin,s);
    char firstChar,secondChar;
    cin >>firstChar>>secondChar;
    cout<<charTogether(s,firstChar,secondChar);
}