#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,ar[3];
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>ar[0]>>ar[1]>>ar[2];
        sort(ar,ar+3,greater<int>());
        cout<<ar[1]<<endl;
    }
    return 0;
}
