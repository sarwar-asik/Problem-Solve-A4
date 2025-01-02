#include<bits/stdc++.h>
using namespace std;

int main() {
    // main code here
    long long T;
    cin >> T;
    while(T--){
        // cout << T << endl;
        long long N;
        cin >> N;
        vector<long long int>A(N);
        for(int i=0; i<N; i++){
            cin >> A[i];
        }
        int flag=0;
        for(int i=1; i<N; i++){
         if(A[i]<A[i-1]){
             flag=1;
             break;
         }
        }

        if(flag==1){
            cout << "NO" << endl;
        }else{
            cout << "YES" << endl;
        }
    }
    return 0;
}