#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll i,j,k,l,n,m,a,b=0;;
    cin>>n>>m;
    for(i=0;i<m;i++){
        cin>>a;
        a+=b;
        //cout<<a<<endl;
        if(n<=a){
            b=a-n;
        }
        else{
            b=0;
        }
    }
    cout<<b<<endl;
}
