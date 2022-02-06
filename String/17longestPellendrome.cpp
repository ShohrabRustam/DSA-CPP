#include <iostream>

#include<algorithm>
#include <unordered_map>

using namespace std;
 
int longest_Palindrome_length(string str1) {
        unordered_map< char,int >map_data;
        int length = 0, flag = 1;
        for(char x: str1)map_data[x]++;
        for(auto i : map_data){
            if(i.second % 2 == 0){
                length += i.second;
            }
            else{
                length += i.second-1;
                flag = 0;
            }
        }
        if(flag == 0){
            length = length + 1;
        }
        return length;
    }

int main()
{
  string str;
  getline (cin,str);
  cout <<longest_Palindrome_length(str);   
}