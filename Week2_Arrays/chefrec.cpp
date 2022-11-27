#include<bits/stdc++.h>
using namespace std;

int main (){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        int freq[1001]={0};
        for(int i=0; i<n; i++){
            cin>>arr[i];
            freq[arr[i]]++;
        }
        int unq[1001]={0};
        int flag=0;
        for(int i=0; i<1001; i++){
            if(freq[i]>0)
                unq[freq[i]]++;
        }
        for(int i : unq){
            if(i>1){
                flag=1;
                break;
            }
        }
        if (flag==1)
            cout<<"No"<<endl;
        else{
            int visited[1001]={0};
            visited[arr[0]]=1;
            int i=0;
            for(int i=1; i<n; i++){
                if(arr[i]==arr[i-1])
                    continue;
                if(visited[arr[i]]==1)
                    break;
                visited[arr[i]]=1;
            }
            if(i==n)
                cout<<"Yes"<<endl;
            else
                cout<<"No"<<endl;
        }
    }
    return 0;
}