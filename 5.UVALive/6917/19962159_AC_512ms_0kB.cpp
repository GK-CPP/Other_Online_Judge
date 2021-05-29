#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll i,j,k,l,n,m,t;
    char a,b;
    cin>>t;
    ll arr[100000];
    while(t--){
        string st;
        cin>>st;
        n=st.size();
        for(i=65;i<=90;i++){
            arr[i]=i;
        }
        cin>>m;
        for(i=0;i<m;i++){
            cin>>a>>b;
            for(j=65;j<91;j++){
                if(arr[j]==int(b)){
                    arr[j]=int(a);
                }
            }
        }
        for(i=0;i<n;i++){
            if(isalpha(st[i]))cout<<char(arr[st[i]]);
            else cout<<st[i];
        }
        cout<<endl;
    }
}

