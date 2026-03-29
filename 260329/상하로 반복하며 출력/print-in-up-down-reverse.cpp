#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    int arr[n][n];
    for(int i=0; i<n; i++){
        int start=i;
        for(int j=0; j<n; j++){
            if(j%2==0) arr[i][j]=start+1;
            else arr[i][j] = n-i;
            cout<<arr[i][j];
        }
        cout<<endl;
    }
    // for(int i=0; i<n; i++){
    //     for(int j=0; j<n; j++){
    //         cout<<arr[i][j];
    //     }
    //     cout<<endl;
    // }


    // Please write your code here.
    return 0;
}