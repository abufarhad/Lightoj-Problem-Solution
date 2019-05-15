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

    ll t,i,x;
    //double r1,r2,H,h,R,p,r,ans,e,theta,y;
    double  test,r1,r2,h,p;
    double R,V,ans,r;
    scl(t);
    for(x=1; x<=t; x++)
    {
        cin>>r1>>r2>>h>>p;
        R=r2+(r1-r2)*(p/h);
        ans=1/3.0 *Pi*p*(R*R+R*r2+r2*r2);
        printf("Case %lld: %.10lf\n",x,ans);
    }

    return 0;
}
