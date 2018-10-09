#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t,n,i,j;
    char b[200];
    cin>>t;
    for(i=1; i<=t; i++)
    {
        cin>>b>>n;
        long long a=0;
        int j=0;
        //   memset(b,'\0',sizeof(b));
        while(b[j])
        {
            if(b[j]!='-')
            {
                int dcml =b[j]-48;
                a=a*10+dcml;
                cout<<a<<" ";
                a=a%n;
                // cout<<a<<" ";
            }
            j++;
        }
        if(a==0)
        {
            printf("Case %d: divisible\n",i);
        }
        else printf("Case %d: not divisible\n",i);
    }
}
