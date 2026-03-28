#include <iostream>
using namespace std;

int main() {
    int arr[4][4], total[4];
    

    for(int i=0; i<4; i++){
        int cnt=0;
        for(int j=0; j<4; j++){
            cin>>arr[i][j];
            cnt+=arr[i][j];
        }
        total[i]=cnt;
    }
    for(int i=0; i<4; i++){
        cout<<total[i]<<endl;
    }
    return 0;
}