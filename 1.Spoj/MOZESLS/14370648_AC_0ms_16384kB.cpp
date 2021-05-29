#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,k,l,m,n,a,b,c=0;
    string st;
    cin>>st>>n;
    m=st.size();
    for(i=0; i<n; i++)
    {
        long long ans=0;
        map<int,int>mm;
        cin>>a>>b;
        for(j=a-1; j<b; j++){
            c=0;
            if(st[j]=='m'){
                for(k=j+1; k<b; k++){
                    if(st[k]=='s')c++;
                }
                mm[j]=c;
            }
        }
        for(j=a-1; j<b; j++){
            if(st[j]=='s'){
                for(k=j+1; k<b; k++){
                    if(st[k]=='m')ans+=mm[k];
                }
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}


