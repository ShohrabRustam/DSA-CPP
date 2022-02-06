#include <iostream>

#include<algorithm>
 
using namespace std;
 
string longest_Common_Prefix(string arr_strings[], int arr_size)
{
 
    // If array size is 0, return empty string
    int size = arr_size;
     string str = arr_strings[0];
     if(size == 1)
        return str;
    string result = "";
    int j = 1;
    for(int i=0; i<size; i++){
        while(j < size){
            if(str[i] == arr_strings[j][i]){
                j++;
            }
            else{
                return result;
            }
        }
        result += str[i];
        j = 1;
    }
    return result;
}

 
int main()
{
    int n;
    cin >>n;
    string str[n];
    for(int  i=0;i<n;i++){
        cin >>str[i];
    }
      cout<< longest_Common_Prefix(str, n);         
    return 0;
}  