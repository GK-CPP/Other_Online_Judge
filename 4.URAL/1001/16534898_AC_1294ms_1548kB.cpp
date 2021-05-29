#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pfd(x,k) cout<<fixed<<setprecision(k)<<x<<endl;
double arr[10000000];

int main(){
    double k,n,m;
    int i=0,j;
    while(cin>>n){
        arr[i]=sqrt(n);
        i++;
    }
    for(j=i-1;j>=0;j--){
        pfd(arr[j],4);
    }
}
