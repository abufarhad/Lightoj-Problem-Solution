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

#define frrev(i,a,b)    for(int i=a;i>=b;i--)
#define scl2(x,y)       scanf("%lld %lld",&x,&y)
#define pf(x)            push_front(x)
#define ppf(x)          pop_front(x)

#define ms(a,b)      memset(a, b, sizeof(a))
#define scc(x) scanf("%[^\n]s",x); // For charecter string input , It will  read all charecter untill Enter new line .
#define TEST_CASE(t)     for(int z=1;z<=t;z++)
#define PRINT_CASE       printf("Case %d: ",z)


double x,y,h;
double calc( double mid)
{
    double h1=sqrt((y*y)-(mid*mid));
    double h2=sqrt((x*x)-(mid*mid));

    return ((h1*h2)/(h1+h2));
}

int main()
{
    ll m,n,t,b,c;
    scl(t);

    for(int i=1; i<=t; i++)
    {
        cin>>x>>y>>h;
        double low=0, high=min(x,y),mid;
        ll cnt=100;
        while(cnt--)
        {
            mid=(low+high)/2.0;
            if(calc(mid)<=h )
                high=mid;
            else
                low=mid;
        }
        printf("Case %d: %.10lf\n",i,low);
    }
    return 0;
}





