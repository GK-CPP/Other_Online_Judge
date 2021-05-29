#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> // Common file
#include <ext/pb_ds/tree_policy.hpp>
#include <functional> // for less
#include <iostream>
using namespace __gnu_pbds;
using namespace std;
#define ll long long
typedef tree<ll, null_type, less<ll>, rb_tree_tag,
        tree_order_statistics_node_update>
        new_data_set;

int main()
{
    new_data_set tr;
    ll i,j,k,n,m,a,b;
    cin>>n;
    char ch;
    while(n--)
    {
        cin>>ch>>m;
        if(ch=='I')
        {
            tr.insert(m);
        }
        else if(ch=='C')
        {
                cout<<tr.order_of_key(m) << endl;
        }
        else if(ch=='K')
        {
            if(tr.find_by_order(m-1)==tr.end())
            {
                cout<<"invalid"<<endl;
            }
            else
                cout<<*tr.find_by_order(m-1) << endl;
        }
        else if(ch=='D')
        {
            tr.erase(m);
        }
    }
}
