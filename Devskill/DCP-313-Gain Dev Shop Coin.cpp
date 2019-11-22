#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,k;
    cin>>k;
    char st[10000];
    for(i=0; i<k; i++)
    {
        getchar();
        scanf("%[^\n]s",st);
        if(st[0]=='E')
            cout<<"20"<<endl;
        else if(st[0]=='M')
            cout<<"40"<<endl;
        else if(st[0]=='H')
            cout<<"68"<<endl;
    }
    return 0;
}
