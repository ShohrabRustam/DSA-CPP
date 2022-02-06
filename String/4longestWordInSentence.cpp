#include<iostream>
using namespace std;
string longestWord(string);
string longestWord(string str)
{
    str=str+" ";
    int l = str.length();
    string result;
    result.clear();
    string temp;
    for(int i=0;i<l;i++)
    {
        temp+=str[i];
        if(str[i]==' ')
        {
            
        //   cout<<temp<<endl;
            if(result.length()<temp.length()){
                result=temp;
                temp.clear();
            }
            else{
                temp.clear();
            }
        }
    }
    return result;
}
int main(){
    string str;
    getline(cin,str);
    cout <<longestWord(str);
}
