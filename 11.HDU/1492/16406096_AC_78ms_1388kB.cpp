#include<bits/stdc++.h>
using namespace std;

#define ll long long


int main(){
   ll i,j,k,l,n,m;
   int arr[4]={2,3,5,7};
   while(scanf("%lld",&n),n){
        int ans=1;
        for(i=0;i<4;i++){
            int c=1;
            while(n%arr[i]==0)n/=arr[i],c++;
            ans*=c;
        }
        cout<<ans<<endl;
   }
}
