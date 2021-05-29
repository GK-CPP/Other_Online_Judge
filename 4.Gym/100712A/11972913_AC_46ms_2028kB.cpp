#include<bits/stdc++.h>
using namespace std;
#define ff for(int j=0;j<x;j++)
#define ff1 for(int j=1;j<x;j++)

struct ab
{
    int s;
    int f;
    string st;
};
int main()
{
    int i,t,x,k,l,mi,d,ma;
    struct ab a[1000];
    cin>>t;
    for(i=0; i<t; i++)
    {
        cin>>x;
        ff
        {
            cin>>a[j].st>>a[j].s>>a[j].f;
        }
        ma=a[0].s;
        d=0;
        ff1
        {
            if(ma<a[j].s)
            {
                ma=a[j].s;
                d=j;
            }
        }
        mi=100000;
        ff
        {
            if(ma==a[j].s)
            {
                if(mi>a[j].f)
                {
                    mi=a[j].f;
                    d=j;
                }
            }
        }
        cout<<a[d].st<<endl;
    }
    return 0;
}

