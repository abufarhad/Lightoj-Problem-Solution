#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t,n,i,j;
    string b;
    cin>>t;
    for(i=1; i<=t; i++)
    {
        cin>>b>>n;
        long long a=0;
        int j=0;
        int len=b.size();

        while(len--)
        {
            if(b[j]!='-')
            {
                a=(a*10+(b[j]-'0'))%n;
            }
            j++;
        }
        if(a==0) printf("Case %d: divisible\n",i);
        else  printf("Case %d: not divisible\n",i);
    }
}
