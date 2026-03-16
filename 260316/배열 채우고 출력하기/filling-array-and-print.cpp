#include <iostream>
using namespace std;

int main() {
    char array[10];
    char a;
    for(int i=0; i<10;i++)
    {
        cin>>a;        

        array[i] = a;
    }
    for(int i=10; i>0; i--)
    {
        cout<<array[i-1];
    }

    // Please write your code here.
    return 0;
}