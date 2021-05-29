#include<bits/stdc++.h>
using namespace std;
#define ll long long


const ll N=100009999;
//100000000;

int arr[20000000+5],l=1;

bool Check(int N,int pos)
{
    return (bool)(N & (1<<pos));
}
int Set(int N,int pos)
{
    return N=N | (1<<pos);
}

int status[(N/32)+2];
void sieve()
{
    int i, j, sqrtN;
    sqrtN = int( sqrt( N ) );
    for( i = 3; i <= sqrtN; i += 2 )
    {
        if( Check(status[i>>5],i&31)==0)
        {
            for( j = i*i; j <= N; j += (i<<1) )
            {
                status[j>>5]=Set(status[j>>5],j & 31)   ;
            }
        }
    }
    arr[l++]=2;
    for(i=3; i<=N; i+=2)
        if( Check(status[i>>5],i&31)==0)
            //cout<<i<<endl;
            arr[l++]=i;
}

int main()
{
    int i,j,k,nn,m,a=1,b;
    sieve();
    while(true)
    {
        if(arr[a]>=100000000)
            break;
        cout<<arr[a]<<endl;
        a+=100;
    }
}
