#include<iostream>
#include<algorithm>
// #include <bits/stdc++.h>÷

using namespace std;
void swap(char& a, char& b){
    char temp = a;
    a=b;
    b=temp;
}
string reverse(string str, int l){
    for(int i=0;i<l/2;i++){
        swap(str[i],str[l-i-1]);
    }
    return str;
}

int main (){
     string str;
     getline(cin,str);
     int len = str.length();
     cout <<reverse(str,len);
}