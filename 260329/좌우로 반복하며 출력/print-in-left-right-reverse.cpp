#include <iostream>
using namespace std;

int main() {
    int n, row[4];
    cin>>n;

    for(int i=0; i<4; i++){
        int cnt=0;
        for(int j=0; j<4; j++){
            cnt++;
            row[j]=cnt;
        }
        if(i%2!=0){
            for(int i=3; i>=0; i--){
                cout<<row[i];
            }
        }
        else{
            for(int i=0; i<4; i++){
                cout<<row[i];
            }
        }
        cout<<endl;

    }
    // Please write your code here.
    return 0;
}