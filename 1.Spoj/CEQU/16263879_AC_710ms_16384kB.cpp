    #include<iostream>
    #include<bits/stdc++.h>
    using namespace std;
     
    int gcd(int a,int b)
    {
        if(b==0)return a;
        else return gcd(b,a%b);
    }
     
    int main()
    {
        int i,j,k,l,n,a,b,c,d=0,f=0;
        cin>>n;
        while(n--)
        {
            d++;
            cin>>a>>b>>c;
            k=gcd(a,b);
            if(c%k==0)
            {
                cout<<"Case "<<d<<": Yes"<<endl;
            }
            else
            {
                cout<<"Case "<<d<<": No"<<endl;
            }
        }
    }
     