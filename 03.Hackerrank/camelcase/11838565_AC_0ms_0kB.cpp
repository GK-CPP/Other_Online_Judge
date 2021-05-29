#include<bits/stdc++.h>
int main()
{
    char ch[1000000];
    int n,i,c=1;
    scanf("%s",ch);
    n = strlen(ch);
    for(i=0; i<n; i++)
    {
        if(ch[i]>='A' && ch[i]<='Z')
            ++c;
    }
    printf("%d\n",c);
}