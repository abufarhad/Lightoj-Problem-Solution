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
    double v1,v2,v3,a1,a2,t1,t2,t3,s1,s2,s3,d,d_b;
    scl(t);
    for(x=1; x<=t; x++)
    {
        cin>>v1>>v2>>v3>>a1>>a2;
        t1=(v1/a1),t2=(v2/a2);

        s1=(v1*t1)-(.5*a1*t1*t1), s2=(v2*t2)-(.5*a2*t2*t2);
        d=s1+s2;
        t1=max(t1,t2);
        d_b=v3*(t1);

        printf("Case %lld: %.10lf %.10lf\n",x,d ,d_b);
    }
}
