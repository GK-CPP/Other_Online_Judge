#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,k,l,n,m;
    string st;
    getline(cin,st);
    st=" "+st;
    n=st.size();
    for(i=0;i<n-1;i++){
        if(st[i]==' '){
            if(st[i+1]>='A' && st[i+1]<='Z');
            else if(st[i+1]>='a' && st[i+1]<='z'){
                st[i+1]=st[i+1]-32;
            }
        }
    }
    for(i=1;i<n;i++){
        cout<<st[i];
    }
}

