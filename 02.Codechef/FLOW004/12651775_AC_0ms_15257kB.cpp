#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,j;
    cin>>t;
    while(t--)
    {
    string st;
    cin>>st;
    int x=st.size();
    int sum=st[0]-48+st[x-1]-48;
    cout<<sum<<endl;
    }
}
