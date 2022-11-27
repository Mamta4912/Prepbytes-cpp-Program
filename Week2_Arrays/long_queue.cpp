#include<bits/stdc++.h>
using namespace std;

int main (){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int queue [n];
        int ele;
        int j=0;
        for(int i=0; i<n; i++){
            cin>>ele;
            if(ele==1){
                queue[j++]=i;
            }
        }
        int flag=0;
        for(int i=j-1; i>=1; i--){
            if(queue[i]-queue[i-1]<6){
                flag=1;
                break;
                }
            }
            if(flag==1){
                cout<<"no"<<endl;
            }
            else{
                cout<<"yes"<<endl;
            }        
    }
    return 0;
}