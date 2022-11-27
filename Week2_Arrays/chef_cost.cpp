#include<iostream>
using namespace std;

int main (){
    int t;
    cin>>t;
    while(t-->0){
        int n,k;
        cin>>n>>k;
        int arr[n];
        int diff=0;
        for(int i=0; i<n; i++){
            cin>>arr[i];
            if(arr[i]>k){
                diff+=arr[i]-k;
            }
        }
        cout<<diff<<endl;
    }
    return 0;
}