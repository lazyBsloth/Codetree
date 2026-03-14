#include <iostream>
using namespace std;

int main() {
    int a, n, d;
    cin>>a>>n;
    d=a+n;
    for(int i=0; i<n; i++)
    {
        cout<<d<<endl;
        d=d+n;
    }

    return 0;
}