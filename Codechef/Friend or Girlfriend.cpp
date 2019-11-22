/*==============================================*\
ID:          Gulam_Kibria

Name:     Gulam Kibria Chowdhury
Study:      CSE, NEUB
Address:  Sylhet, Bangladesh

 mail: gkpalash101@gmail.com
\*===============================================*/

#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll i,j,k,l,t,n,m,a,b,ma=0,ans=0;
    cin>>t;
    while(t--){
        ans=0;
        string st;
        char ch;
        cin>>n>>st>>ch;
        ma=0;
        for(i=0;i<n;i++){
            if(st[i]==ch)ma=i+1;
            ans+=ma;
        }
        cout<<ans<<endl;
    }
}
