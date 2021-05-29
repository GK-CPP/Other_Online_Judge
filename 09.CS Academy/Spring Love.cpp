#include <iostream>

using namespace std;

int main() {
    int a, b,c=0;
    cin>>a;
    for(int i=0;i<a;i++)
    {
        cin>>b;
        c+=b;
    }
    if(c%2==1)
    {
        cout<<1<<endl;
    }
    else
    {
        cout<<0<<endl;
    }
}
