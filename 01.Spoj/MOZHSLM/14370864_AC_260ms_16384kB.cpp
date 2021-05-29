#include<bits/stdc++.h>
using namespace std;
long long a[100005]={0};
int main(){

    unsigned long long int i,c=0,cn=0,ans=0;
    long long n;
    string s;
    cin>>n;
    while(n--){
    cin>>s;
    for(i=0;i<s.size();i++){
        if(s[i]=='s'){
            a[i]=c;
            ans+=a[i];
            cn++;
        }
        else if(s[i]=='m'){
            a[i]=cn;
            c+=a[i];

        }
    }
    cout<<ans<<endl;
    a[i]=0;
    ans=0;
    cn=0;
    c=0;
    }
}
