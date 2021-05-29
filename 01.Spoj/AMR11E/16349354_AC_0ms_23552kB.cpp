#include<bits/stdc++.h>
using namespace std;
#define ll long long
const ll n=1000000;
bitset<n+6>dp;
ll arr[n+5],l=0;

void sieve(){
    ll i,j;
    dp.set();
    for(i=4;i<n;i+=2)dp[i]=0;
    for(i=3;i*i<n;i+=2){
        if(dp[i]==1){
            for(j=i*i;j<n;j+=(i*2)){
                dp[j]=0;
            }
        }
    }
}

void divisors(){
    ll ar2[10000];
    for(ll i=10;i<10000;i++){
        int c2=0;
        for(ll j=2;j*j<=i;j++){
            if(i%j==0){
                if(i/j==j){
                    ar2[c2++]=j;
                }
                else {
                    ar2[c2++]=j;
                    ar2[c2++]=i/j;
                }
            }
        }
        ll d=0;
        for(ll j=0;j<c2;j++){
            if(dp[ar2[j]]==1){
                d++;
            }
        }
        if(d>=3){
            arr[l++]=i;
        }
    }
}

int main()
{
    ll i,j,k,l,nn,m;
    sieve();
    divisors();
    cin>>nn;
    while(nn--){
        cin>>m;
        cout<<arr[m-1]<<endl;
    }
    return 0;
}
