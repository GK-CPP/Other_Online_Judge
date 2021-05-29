#include<bits/stdc++.h>
using namespace std;
#define e else if
int main()
{
    int i,n,j,x,sum=0;
    string st;
    cin>>n;
    for(i=1; i<=n; i++)
    {
        cin>>st;
        x=st.size();
        sum=0;
        for(j=0; j<x; j++)
        {
                if(st[j]=='I' && st[j+1]=='X')
                {
                    sum+=9;
                    j++;
                }
                e(st[j]=='I' && st[j+1]=='V')
                {
                    sum+=4;
                    j++;
                }

                e(st[j]=='X' && st[j+1]=='L')
                {
                    sum+=40;
                    j++;
                }

                e(st[j]=='X' && st[j+1]=='C')
                {
                    sum+=90;
                    j++;
                }

                e(st[j]=='C' && st[j+1]=='D')
                {
                    sum+=400;
                    j++;
                }

                e(st[j]=='C' && st[j+1]=='M')
                {
                    sum+=900;
                    j++;
                }
            e(st[j]=='I')
                sum+=1;
            e(st[j]=='V')
                sum+=5;
            e(st[j]=='X')
                sum+=10;
            e(st[j]=='L')
                sum+=50;
            e(st[j]=='C')
                sum+=100;
            e(st[j]=='D')
                sum+=500;
            e(st[j]=='M')
                sum+=1000;
        }
       cout<<"Case "<<i<<": "<<sum<<endl;
    }
    return 0;
}
