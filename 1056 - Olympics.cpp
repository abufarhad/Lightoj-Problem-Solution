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

int main()
{
    ll t,i;
    double r,theta,x,a,b;
    scl(t);
    for(i=1; i<=t; i++)
    {
        scanf("%lf : %lf",&a,&b);
        r=sqrt(a*a+b*b )/2.0;
        theta=acos((2*r*r-b*b)/(2.0*r*r));
        x=400.0/((2.0*r*theta)+(2.0*a));
        printf("Case %lld: %.10lf %.10lf\n",i,a*x,b*x);
    }

    return 0;
}





