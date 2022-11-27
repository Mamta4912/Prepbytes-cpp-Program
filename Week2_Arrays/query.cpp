#include<iostream>
using namespace std;

int main(){
    int n,q,l,k,j,query;
    cin>>n>>q;
    cin>>l;
    int a[l];
    for(int i=0; i<=n; i++){
        for(int i=0; i<l; i++){
            cin>>a[i];
        }
    }
    for(int i=0; i<2; i++){
        cin>>k>>j;
        query=a[j];
        cout<<query<<endl;
    }

    return 0;
}