#include <vector>
#include <iostream>
using namespace std;
int main()
{
     // Here we use 'size_t' because n can not be negative
    size_t n;          
    cin >> n;
    // make vector of size (n)
    vector<int> a(n);   
    for (size_t i; i < n; ++i){
    	cin >> a[i];
    }

    // we can use reverse iterators
    for (auto rit = a.rbegin(); rit != a.rend(); ++rit){
        cout << *rit << ' ';
    }

    return 0;
}