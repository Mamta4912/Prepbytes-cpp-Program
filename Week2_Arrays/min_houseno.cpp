#include <bits/stdc++.h>
using namespace std;
  
  int main()
  {
    int t;
    cin>>t;
    while(t--){
      int n,index=0;
      cin>>n;
      int arr[n];
      for(int i=0; i<n; i++){
        cin>>arr[i];
        }
        int min=INT_MAX;
        for(int i=0; i<n;i++){
          if(arr[i]<min){
            min=arr[i];
            index=i;
          }
        }
        cout<<index<<endl;
    }
    return 0;
  }
    