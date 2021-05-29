#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll prime(ll n){
    ll i;
    if(n<2)return false;
    for(i=2; i*i<=n; i++){
        if(n%i==0)return false;
    }
    return true;
}

int main(){
    ll i,j,k,n,m;
    char ch;
    cin>>k;
    while(k--)
    {
        cin>>n;
        if(k!=0)cin>>ch;
        ll x=powl(2,n)-1;
        if(prime(n) && prime(x)){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
    }
}
