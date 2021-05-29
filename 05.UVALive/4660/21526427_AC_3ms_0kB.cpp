#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    ll i,j,k,l,n,m,a=0,b=0;
    string st,st2;
    cin>>k;
    while(k--){
        a=0,b=0;
        cin>>st>>st2;
        n=st.size();
        m=st2.size();
        for(i=0;i<n;i++){
            ll g=(st[i]-48);
            a=max(a,g);
        }
        for(i=0;i<m;i++){
            ll g=(st2[i]-48);
            b=max(b,g);
        }
        a++;b++;
        ll aa=0,bb=0;
        reverse(st.begin(),st.end());
        reverse(st2.begin(),st2.end());
        for(i=0;i<n;i++){
            ll g=(st[i]-48);
           // cout<<g<<" "<<a<<endl;
            aa+=(g*powl(a,i));
           // cout<<aa<<endl;
        }
        for(i=0;i<m;i++){
            ll g=(st2[i]-48);
            bb+=(g*powl(b,i));
        }
        cout<<aa+bb<<endl;

    }

}