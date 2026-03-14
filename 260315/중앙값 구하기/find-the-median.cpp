#include <iostream>
using namespace std;

int main() {
    int a, b, c, mid;
    cin>>a>>b>>c;

    if(a>b){
        if(a>c){
            if(c>b) cout<<c;
            else cout<<b;
        }
        // c>a>b
        else cout<<a;
    }
    // b>a
    else{
        if(b>c){
            if(c>a) cout<<c;
            else cout<<a;
        }
        //c>b
        else cout<<b;
    }
    
    // Please write your code here.
    return 0;
}