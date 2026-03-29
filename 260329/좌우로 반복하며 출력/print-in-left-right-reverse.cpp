#include <iostream>
using namespace std;

int main() {
    int n, row[4];
    cin>>n;

    for(int i=0; i<n; i++){
        int cnt=0;
        for(int j=0; j<n; j++){
            cnt++;
            row[j]=cnt;
        }
        if(i%2!=0){
            for(int i=n-1; i>=0; i--){
                cout<<row[i];
            }
        }
        else{
            for(int i=0; i<n; i++){
                cout<<row[i];
            }
        }
        cout<<endl;

    }
    // Please write your code here.
    return 0;
}