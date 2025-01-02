// Codeium: Disable Autocomplete
#include<bits/stdc++.h>
using namespace std;

int main() {
    // main code here
    long long N,M;
    cin >> N;
    //  vector <long long>CombArr(N);
    vector<long long>A(N);
   
    for(int i=0; i<N; i++){
        cin >> A[i];
        // CombArr[i]  =A[i];
    }
    cin >> M;
    vector<long long>B(M);
     
    for(int i=0; i<M; i++){
       
        cin >> B[i];
         
    }
    long long X;
    cin>> X;
//  CombArr.resize(N+M);
    // CombArr.insert(CombArr.begin()+X,B.begin(),B.end());
    A.insert(A.begin()+X,B.begin(),B.end());   //! O(N+K)

    for(int i=0; i<N+M; i++){
        cout<<A[i]<<" ";
        // ! O(N)
    }
  

    // 1 2 3 4 5 6 7 8    //10 20 30   // 3
    //! 1 2 3 10 20 30 4 5 6 7 8 (4-7)
    
    //3 => //! (3-5)  0-->2 && 6-->7
    //4 => //! (4-6   0-->3 && 
    // 5 => //! (5-7)
    // 0 => //! (0-2)  3-->7
    
    return 0;
}