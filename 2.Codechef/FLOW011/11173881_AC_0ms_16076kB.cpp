#include<bits/stdc++.h>
using namespace std;
int main()
{
    long double i,n,j,sum,h,d;
    cin>>i;
    for(j=0; j<i; j++)
    {
        cin>>n;
        if(n<1500)
        {
            h=(n*90)/100;
            d=(n*10)/100;
        }
        else if(n>=1500)
        {
            h=500;
            d=(n*98)/100;
        }
        sum=n+h+d;
        cout<<sum<<endl;
    }
    return 0;
}
