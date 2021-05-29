#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll fib(ll  n)
{
  ll f[100000];
  ll i;
  f[0] = 1;
  f[1] = 1;
  for (i = 2; i <= n; i++)
      f[i] = f[i-1] + f[i-2];

  return f[n];
}
int main(){
    ll i,j,k,l,n,m;
    cin>>m;
    cout<<fib(m)<<endl;
    return 0;
}
