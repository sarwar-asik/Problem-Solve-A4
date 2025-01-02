#include<bits/stdc++.h>
using namespace std;

int main() {
    // main code here
    long long int N;
    cin >>N;

    long long int A[N];

int flag = 0;
    for(int i=1; i<=N; i++){
        cin >> A[i];
       if(i>1){
         for(int j=i-1;j>=1;j--){
            // cout<<"A[i]="<<A[i]<<" A[j]="<<A[j]<<endl;
            if(A[j]==A[i]){
             flag =1;
             break;
            }
        }
       }
    }

    if(flag==1){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }

    return 0;
}