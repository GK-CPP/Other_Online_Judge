#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll isprime(ll n){
    ll i,j=0;
    for(i=1;i<=n;i++){
        if(n%i==0)j++;
    }
    if(j==2)return 1;
    else return 0;
}

int main(){
    ll i,j,k,l,n,m;
    cin>>m;
    while(m--){
        cin>>n;
        if(isprime(n)){
            cout<<"yes"<<endl;
        }
        else{
            cout<<"no"<<endl;
        }
    }
}
