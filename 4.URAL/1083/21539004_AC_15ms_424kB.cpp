#include<bits/stdc++.h>
using namespace std;

#define ll long long
vector<ll>v;


int main()
{
    ll i,j,k,l,n,m,a,ans=1,tk;
    string st;
    cin>>n>>st;
    k=st.size();
    for (i=0; n - i*k > 0; i++) {
           // cout<<n-i*k<<endl;
        ans *= n - i*k;
    }
    cout<<ans<<endl;
}

