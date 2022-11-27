#include <bits/stdc++.h>
  using namespace std;
  
  int main()
  {
    int t;
    cin>>t;
    while(t--){
      int n, mul=1;
      cin>>n;
       int a[n];
       
       for(int i=0; i<n; i++){
         cin>>a[i];
         mul=mul*a[i];
       }
       cout<<mul<<endl;
    }
    
    return 0;
  }