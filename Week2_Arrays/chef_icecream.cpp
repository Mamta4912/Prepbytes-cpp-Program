#include<bits/stdc++.h>
using namespace std;

int main (){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int coin[n];

        for(int i=0; i<n; i++){
            cin>>coin[i];
        }

        int c=0, c1=0;
        int flag=0;

        for(int i=0; i<n; i++){
            int x=coin[i];
            if(x==5)
                c++;
            else if(x==10){
               if(c){
                   c--,c++;
               }
               else{
                   flag=1;
                   break;
               }
            }

            else{
                if(c1){
                    c1--;
                }
                else if (c>=2){
                    c-=2;
                }
                else{
                    flag=1;
                    break;
                }
            }
        }
        if(flag==1){
            cout<<"No"<<endl;
        }
        else{
            cout<<"Yes"<<endl;
        }
    }
    return 0;
}