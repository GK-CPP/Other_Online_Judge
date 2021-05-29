#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define lcm(a,b) (a / __gcd(a,b) ) * b
#define pfd(x,k) cout<<fixed<<setprecision(k)<<x<<endl;
ll arr[10000000];

int main(){
    ll i,j,k,l,n,m=1;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    for(i=0;i<n;i++){
        m=lcm(m,arr[i]);
    }
    cout<<m<<endl;
}
