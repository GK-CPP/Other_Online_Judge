#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll i,j,k,n,m;
    cin>>n;
    m=n;
    n=abs(n);
    k=n*(n+1)/2;
    if(m<0){
        k--;
        k*=-1;
    }
    if(n==0)k=1;
    cout<<k<<endl;
}
