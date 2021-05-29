#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, a, b;
    cin>>n;
    while(n--)
    {
        cin>>b;
        a=b/2;
        b=(a*(a-1))/2;
        cout<<b<<endl;
    }
    return 0;
}