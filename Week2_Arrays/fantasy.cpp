#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,s;
        cin>>n>>s;
        int arr[n];
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        int type[n];
        for(int i=0; i<n; i++){
            cin>>type[i];
        }
        int min=100000, min1=100000;
        for(int i=0; i<n; i++){
            if(type[i]==0){
                if(min>arr[i]){
                    min=arr[i];
                }
            }
            else{
                if(min1>arr[i]){
                    min1=arr[i];
                }
            }
        }
        if(s+min+min1>100){
                cout<<"NO"<<endl;
            }
            else{
                cout<<"YES"<<endl;
            }
    }
    return 0;
}