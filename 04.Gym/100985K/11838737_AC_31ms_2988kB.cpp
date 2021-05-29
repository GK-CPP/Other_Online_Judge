#include<bits/stdc++.h>
int main()
{
    char ch[1000000];
    scanf("%s",ch);
    int n,i,j,c=1;
    n = strlen(ch);
    for(i=0; i<n; i++)
    {
        if(ch[i]==ch[i+1])
            ++c;
        else
        {
            printf("%c%d",ch[i],c);
            c = 1;
        }

    }
printf("\n");
}