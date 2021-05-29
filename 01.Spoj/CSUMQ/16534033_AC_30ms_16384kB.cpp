#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll arr[100000];

int main(){
    ll i,j,k,l,n,m;
    cin>>n;
    arr[0]=0;
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    for(i=0;i<n-1;i++){
        arr[i+1]=arr[i]+arr[i+1];
    }
    cin>>m;
    for(i=0;i<m;i++){
        cin>>k>>l;
    if(k==0)cout<<arr[l]<<endl;
    else

    {
                cout<<arr[l]-arr[k-1]<<endl;


    }
    }
}
