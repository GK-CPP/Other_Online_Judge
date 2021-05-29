#include <bits/stdc++.h>
using namespace std;

int main()
{
    long double i,j,k,l,n,m;
    cin>>k;
    while(k--)
    {
        long double a,b,c,d;
        cin>>n>>m;
        if(n*n-4*m<0)
            cout<<-1<<endl;
        else{
            c=sqrt(n*n+4*m);
            d=sqrt(n*n-4*m);
            b=(c+d)/2;
            a=(c-d)/2;
            cout<<fixed<<setprecision(6)<<a<<" "<<b<<" "<<n<<endl;
        }
    }
    return 0;
}

