#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;

    for(int i=n; i<101; i++){
        if(n>=90){
            cout<<"A"<<" "; 
        }
        else if (n>=80)
        {
            cout<<"B"<<" "; 
        }
        else if (n>=70)
        {
            cout<<"E"<<" "; 
        }
        else if (n>=60)
        {
            cout<<"D"<<" "; 
        }
        else{
            cout<<"F"<<" "; 
        }
    }
    // Please write your code here.
    return 0;
}