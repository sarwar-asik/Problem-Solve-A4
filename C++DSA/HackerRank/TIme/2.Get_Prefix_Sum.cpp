#include<bits/stdc++.h>
using namespace std;

int main() {
    // main code here
    long long N;
    cin >>N;
    vector<long long int>A(N);
    for(int i=0; i<N; i++){
        cin >> A[i];
    }
    // for(int i=0; i<N; i++){
    //     cout<<A[i]<<" ";
    // }
    // cout<<endl;
    vector<long long int>prefix(N);
    prefix[0]=A[0];
    for(int i=1;i<N;i++){
       prefix[i]=prefix[i-1]+A[i];
    //    cout << prefix[i] << " ";
    }

   for(int i=N-1;i>=0;i--){
       cout << prefix[i] << " ";
   }
    

    return 0;
}