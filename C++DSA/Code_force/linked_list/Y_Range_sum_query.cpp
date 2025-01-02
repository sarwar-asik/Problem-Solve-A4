#include<bits/stdc++.h>
using namespace std;

int main() {
   
    int n,q;
    cin>> n >> q;
 
    vector<long long int> v(n+1);
    for(int i=1;i<=n;i++){
        cin >> v[i];
    }


vector<long long int> prefix(n+1);
prefix[1]=v[1];
//    cout<<n<<"n=>"<<prefix[1]<<" 1="<<q<<endl;

//    cout<<"n="<<n<<endl;
// cout<<prefix[1]<<" 1="<<endl;
for(int i=2;i<=n;i++){
    // cout<<prefix[i-1]<<" ="<<endl;
    // cout<<prefix[i]<<" ="<<endl;
    prefix[i]=prefix[i-1]+v[i];
    prefix[i]=prefix[i-1]+v[i];
    // prefix[i]=prefix[i-1]+v[i];
    // cout<<prefix[i]<<":" << i<<endl;
}

// for(int i=1;i<=n;i++){
//     cout << prefix[i] << " ";
// }
// return 0;

while(q--){
    int L,R;
    cin >> L >> R;
    long long sum=0;
    if(L=1){
        sum=prefix[R];
    }
    else{
        sum= prefix[R]-prefix[L-1];
    }
    cout << sum << endl;
}
// ! time extend 
    // while(q--){
    //     // cout << v[q] << endl;
    //     int L,R;
    //     cin >> L >> R;
    //     int sum = 0;
    //     for(int i=L;i<=R;i++){
    //         sum += v[i];
    //     }
    //     cout << sum << endl;
    // }
     
    return 0;
}