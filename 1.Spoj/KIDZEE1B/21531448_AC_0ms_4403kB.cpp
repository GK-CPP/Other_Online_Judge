#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    ll i,j,k,l,n,m,a,b;
    cin>>k;
    for(i=1;i<=k;i++){
        cin>>n>>m>>a;
        cout<<"Case "<<i<<": ";
        b=n+m+a;
        cout<<"Sum of "<<n<<", "<<m<<" and "<<a<<" is "<<b<<endl;
    }
}
