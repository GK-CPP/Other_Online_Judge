#include<bits/stdc++.h>
using namespace std;


#define ll long long


int main()
{
    ll i,j,a=0,k,l,n,m;
    cin>>n;
    while(n--)
    {

        cin>>k>>l;
        a=l;
        bitset<500000+5>st;
        st.set();
        for(i=0; i<k; i++)
        {
            cin>>m;
            st[m]=0;
        }
        ll mm=0;
        for(i=0; i<=k+a; i++)
        {
            if(st[i] && l>0)
            {
                l--;
                mm++;
            }
            else if(st[i]==0)mm++;
            else break;
            //cout<<i<<" "<<mm<< " "<<st[i]<<endl;
        }
        cout<<mm<<endl;

    }
}
