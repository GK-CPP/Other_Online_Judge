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

const ll n=1000005;
ll arr[n+5],l=0;
vector<ll>v;
ll pai[n+3];
void sieve()
{
    ll i,j;
    for(i=2;i<=n;i++){
        if(pai[i]==0){
            pai[i]=i-1;
            for(j=i*2;j<=n;j+=i){
                if(pai[j]==0)pai[j]=j;
                pai[j]=(pai[j]/i)*pai[i];
            }
        }
    }
}

int main()
{
    sieve();
    ll i,j,k,n,m,a,b;
    cin>>a;
    cout<<pai[a]<<endl;
}
