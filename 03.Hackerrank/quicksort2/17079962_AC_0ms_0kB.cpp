#include<bits/stdc++.h>
using namespace std;
#define ll long long
vector<int>v;
int part(int l,int h)
{
    vector<int>v1(v.size());
    int i,j=0,k=l;
    int pivot=v[l];
    for(i=l; i<h; i++)
    {
        if(v[i]<pivot)
        {
            v[k++]=v[i];
        }
        else
        {
            v1[j++]=v[i];
        }
    }
    for(i=0; i<j; i++)
    {
        v[k+i]=v1[i];
    }
    return k;
}

void quickSort(int l,int h)
{
    if(h<=1) return;
    int i,j=part(l,l+h);
    quickSort(l,j-l);
    quickSort(j+1,h-(j-l)-1);
    cout<<v[l];
    for(i=l+1; i<l+h; i++)
    {
        cout<<" "<<v[i];
    }
    cout<<endl;
}

int main()
{
    int i,j,k,l,n,m,a,b;
    cin>>n;
    for(i=0; i<n; i++){
        cin>>b;
        v.push_back(b);
    }
    quickSort(0,n);
    return 0;
}
