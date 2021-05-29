#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long i,n,c,cn,ans;
    string s;
    cin>>n;
    while(n--){
        cin>>s;
        ans=0;cn=0;c=0;
        for(i=0; i<s.size(); i++){
            if(s[i]=='s'){ans+=c;cn++;}
            else if(s[i]=='m') c+=cn;
        }
        cout<<ans<<endl;
    }
    return 0;
}
