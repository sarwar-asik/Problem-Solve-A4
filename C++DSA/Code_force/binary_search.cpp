#include<bits/stdc++.h>
using namespace std;

int main() {
  
  int n;
  cin>>n;
  int arr[n];
  for(int i=0; i<n; i++){
    cin >> arr[i];
  }
//   sort(arr,arr+n);  //!  must sort for binary search though it will same like leniear search (for un sorted)
  int val;
  cin>>val;
//   cout <<"Found";
int flag=0;

int l=0;
int r= n-1;
  while(l<=r){
    int mid = (l+r)/2;
    if(arr[mid]==val){
        flag=1;
        break;
    }
    else if(arr[mid]>val){
        r=mid-1;
    }else{
        l=mid+1;
    }
  }
if(flag==1){
    cout<<"Found"<<endl;
}
else{
    cout<<"Not Found"<<endl;
}
    return 0;
}