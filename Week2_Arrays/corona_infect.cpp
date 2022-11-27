/*Error*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }

        int diff[n];
        diff[0]=0;
        for(int i=1; i<n; i++){
            diff[i]=arr[i]-arr[i-1];
        int min=100, max=-1, count=1;
        if(diff[i]<=2){
            count++;
        }
        else{
            if(min>count)
                min=count;
            if(max<count)
                max=count;
            count=1;
            }
        }

        if(min>count)
            min=count;
        if(max<count)
            max=count;
        cout<<min<<" "<<max<<endl;
    }
    return 0;
}