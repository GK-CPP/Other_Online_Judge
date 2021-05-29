#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    ll i,j,k,l,n,m,a,b;
    cin>>k;
    for(i=1;i<=k;i++){
        cin>>n;
        cout<<"Case "<<i<<": ";
        if(80<=n && 100>=n)cout<<"A+"<<endl;
        else if(75<=n && 79>=n)cout<<"A"<<endl;
        else if(70<=n && 74>=n)cout<<"A-"<<endl;
        else if(65<=n && 69>=n)cout<<"B+"<<endl;
        else if(60<=n && 64>=n)cout<<"B"<<endl;
        else if(55<=n && 59>=n)cout<<"B-"<<endl;
        else if(50<=n && 54>=n)cout<<"C"<<endl;
        else if(45<=n && 49>=n)cout<<"D"<<endl;
        else if(0<=n && 44>=n)cout<<"F"<<endl;
    }
}
