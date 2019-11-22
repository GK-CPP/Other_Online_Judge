#include<bits/stdc++.h>
using namespace std;

#define ll long long


ll multiple(ll x,ll n,ll c){
    if(n==0)return 0;
    ll p=multiple(x,n/2,c);
    if(n%2==0){
        return (p%c+p%c)%c;
    }
    else{
        return (x%c+p%c+p%c)%c;
    }
}

ll mpow(ll x,ll n,ll c)
{
    if(n==0)return 1;
    ll p=mpow(x,n/2,c)%c;
    ll a=multiple(p,p,c);
    if(n%2==0){
        return a;
    }
    else{
        return multiple(x,a,c);
    }
}

int main() {
    long long i,j=0,k,l,n,m,a;
    cin>>k;
    while(k--){
            j++;
        cin>>n>>m>>a;
    cout<<"Case "<<j<<": "<<mpow(n,m,a) << endl;
    }
}
