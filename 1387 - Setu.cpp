//! Bismillahi-Rahamanirahim.
/** ========================================**
 ** @Author: Md. Abu Farhad ( RUET, CSE'15)
 ** @Category:
/** ========================================**/

#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;

#define ll                  long long
#define pb                 push_back
#define fr(i,n)           for (ll i=0;i<n;i++)
#define fr1(i,n)         for(ll i=1;i<=n;i++)
#define scl(x)            scanf("%lld",&x)
#define pfl(x)            printf("%lld\n",x)
#define pn                 printf("\n")
#define debug           printf("I am here\n")
#define mp                make_pair
#define ppb                pop_back

#define ps                 printf(" ")

#define dsort(a)        sort(a,a+n,greater<int>())
#define asort(a)        sort(a,a+n)
#define mod             10000007
#define mx               (1<<28)
#define Pi                  2*acos(0.0)


int main()
{
    ll i,t,x;
    scl(t);
    fr1(i,t)
    {
        string s,s1,s2,s3;
        ll m,n,ans=0;
        scl(m);
        printf("Case %lld:\n",i);
        while(m--)
        {
            cin>>s;
            if(s[0]=='d')
            {
                cin>>n;ans+=n;
            }
            else if(s[0]=='r')
            cout<<ans<<endl;
        }
    }
}
