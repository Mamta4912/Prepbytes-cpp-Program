#include <bits/stdc++.h>
using namespace std;
  
  int main()
  {
    int t;
    cin>>t;
    while(t--){
      int n;
      cin>>n;
      int arr[n];
      for(int i=0; i<n; i++){
        cin>>arr[i];
      }
      int MIN=INT_MAX;//maximum in integer
      int MAX=INT_MIN;//minimum in integer
      for(int i=0; i<n; i++){
        MIN=min(MIN,arr[i]);//to find minimum number
        MAX=max(MAX,arr[i]);//to find maximum number
      }
      cout<<MIN<<" "<<MAX<<endl;
    }
  return 0;
  }