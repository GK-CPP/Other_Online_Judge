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
    ll i,j,k,l,n,m,a;
    cin>>k;
    while(k--){
        cin>>n>>m;
        ll arr[n+3];
        for(i=0;i<n;i++){
            cin>>arr[i];
        }
        ll sum=0,f=1;
        for(i=0;i<n;i++){
            sum+=arr[i];
            if(sum>=m){
                sum-=m;
            }
            else {
                cout<<"NO "<<i+1<<endl;
                f=0;
                break;
            }
        }
        if(f)
        cout<<"YES"<<endl;
    }
}
