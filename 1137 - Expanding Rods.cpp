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



double l,n,c,l1,x,p,ans;

double calc_mid(double i )
{
     x=l/2.0;
     return (((x*x)/(2.0*i) )+(i/2.0)) * ( 2.0* asin( x / (((x*x)/(2.0*i) )+(i/2.0)) ));

/*
    double r,a;
    double b=i;
    double c=l*0.5;

    r = b/2.0 + (c*c/(2.0*b));
    a = 2.0*asin(c/r);
    return r*a;
*/

}

int main()
{
    int  m,t,b,d,i,j,k,y,z;
    cin>>t;

    for(z=1; z<=t; z++)
    {
        cin>>l>>n>>c;
        l1=(1.0+(n*c))*l;

        double low=0.0, high=l,mid;
        fr(i,60)
        {
            mid=(low+high)/2.0;
            if( calc_mid(mid)>=l1)
                high=mid;
            else
                low=mid;
        }

        printf("Case %d: %.10lf\n",z,mid);
    }

    return 0;
}



