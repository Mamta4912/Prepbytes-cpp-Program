// Input & Output Array
#include <bits/stdc++.h>
  using namespace std;
  
  int main()
  {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int sum[n];

        for(int i=0; i<n; i++){
            cin>>sum[i]; 
            cout<<sum[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
  }