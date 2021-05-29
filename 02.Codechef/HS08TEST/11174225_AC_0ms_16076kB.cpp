#include<bits/stdc++.h>
using namespace std;
int main()
{
    float i,x,valu,valu2;
    int n;
    cin>>n>>x;
    if(n%5==0)
    {
        if(n<=x-.50)
        {
            valu=x-n;
            valu2=valu-.50;
            printf("%.2f\n",valu2);
        }
        else
        {
            printf("%.2f\n",x);
        }
    }
    else
    {
        printf("%.2f\n",x);
    }
    return 0;
}