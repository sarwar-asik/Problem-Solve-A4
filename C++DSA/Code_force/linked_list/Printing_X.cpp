#include<bits/stdc++.h>
using namespace std;


int main() {
    // main code here
    int N;
    cin >> N;
    for(int i=N; i>=1; i--){
        for(int j=1; j<=N; j++){
            // cout<<" ";
             if(j==i){
                if(i==N/2+1){
                     cout<<"X";
                }
                else{
                // cout<<"X";
                 cout<<"/";
                }
                
            }
            else if (j==N-i+1){
                cout<<"\\";
            }else{
                cout<<" ";
            }
        }
     
        cout<<endl;
    }


    return 0;
}