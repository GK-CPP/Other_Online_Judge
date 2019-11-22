/*==============================================*\
ID:          Gulam_Kibria

Name:     Gulam Kibria Chowdhury
Study:      CSE, NEUB
Address:  Sylhet, Bangladesh

 mail: gkpalash101@gmail.com
\*===============================================*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll insertionSort(ll arr[],ll n,ll f)
{
    ll i,j,k,kk=0;
    for(i=1; i<n; i++)
    {
        k=arr[i];
        for(j=i-1; j>=0; j--)
        {
            if(k<arr[j])
            {
                arr[j+1]=arr[j];
                f++;
            }
            else break;
        }
        arr[j+1]=k;
    }
    return f;
}

int main()
{
    ll i,j,k,l,n,m,a,b;
        cin>>n;
       ll f=0;
       ll arr[n+5];
        for(i=0; i<n; i++)cin>>arr[i];
        ll dd=insertionSort(arr,n,f);
        cout<<dd<<endl;
}
