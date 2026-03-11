#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin>>a>>b;
    double c = a+b;
    double d= c / 2;


    cout<<c<<" ";
    cout<<fixed;
    cout.precision(1);
    cout<<d;
    return 0;
}