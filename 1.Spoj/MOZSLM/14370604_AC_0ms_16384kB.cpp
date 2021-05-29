#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,k,l,m,n,a,b,c=0;
    cin>>n;
    string st;
    for(i=0; i<n; i++){
        long long ans=0;
        map<int,int>mm;
        cin>>st;
        m=st.size();
        for(j=0; j<m; j++){
            c=0;
            if(st[j]=='m'){
                for(k=j+1; k<m; k++){
                    if(st[k]=='s')c++;
                }
                mm[j]=c;
            }
        }
        for(j=0; j<m; j++){
            if(st[j]=='s'){
                for(k=j+1; k<m; k++){
                    if(st[k]=='m')ans+=mm[k];
                }
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
