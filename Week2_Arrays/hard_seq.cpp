#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t-->0){
        int arr[129]={0};
        int val;
        cout<<"Enter the value"<<endl;
        cin>>val;

        int visited[256]={0};
        for(int i=0; i<129; i++){
            arr[1]=0;
            visited[i]=0;

            for(i=2; i<259; i++){
                if(visited[arr[i-1]]!=0){
                    arr[i]=(i-1) - visited[arr[i-1]];
                }
                else{
                    arr[i]=0;
                    visited[arr[i-1]]=i-1;
                }
            }

            int count=0;
            for(int i=0; i<=val; i++){
                if(arr[val]==arr[i])
                count++;
            }
            cout<<count<<endl;
        }

    }
    return 0;
}