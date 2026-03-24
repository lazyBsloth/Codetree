#include <iostream>
using namespace std;

int main() {
    int start, end, cnt=0, total=0;
    cin>>start>>end;
    for(int i=start; i<=end; i++){
        for(int j=2; j<i; j++){
            if(i%j==0) cnt++;
        }
        if(cnt==1){
            total++;
        }
        cnt=0;
    }
    cout<<total;

    // Please write your code here.
    return 0;
}