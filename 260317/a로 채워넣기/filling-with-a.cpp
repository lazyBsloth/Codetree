#include <iostream>
using namespace std;

int main() {
    string a;
    int n;
    cin>>a;
    n = a.length();

    a[1] = 'a';
    a[n-2] = 'a';
    cout<<a;
    // Please write your code here.
    return 0;
}