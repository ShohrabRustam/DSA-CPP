#include<iostream>
using namespace std;
int countWords(string str){
    int count=0; 
    for(int i=0;str[i]!='\0';i++){
        if(str[i]==' ' && str[i+1]!=' ' && str[i+1]!='\0'){
            count++;
        }
    }
    return count + 1;
}
int main(){
    string str;
    getline (cin,str);
    cout <<countWords(str);
}