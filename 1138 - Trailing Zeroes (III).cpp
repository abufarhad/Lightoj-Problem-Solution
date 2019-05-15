#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;

#define ll long long

#define sci(x) scanf("%d",&x)
#define scl(x) scanf("%lld",&x)
#define scd(x) scanf("%lf",&x)
#define scc(x) scanf("%[^\n]s",x); // For charecter string input , It will  read all charecter untill Enter new line .

#define pfi(x) printf("%d",x)
#define pfl(x) printf("%lld\n",x)
#define pfd(x) printf("%lf",x)
#define pfc(x) printf("Case %d: ",x)
#define ps printf(" ")
#define pn printf("\n")
#define pb(x) push_back(x)
#define ppb(x) pop_back(x)
#define pf(x) push_front(x)
#define ppf(x) pop_front(x)

#define Pi               2*acos(0.0)
#define ms(a,b)       memset(a, b, sizeof(a))
#define MP             make_pair
#define db             double
#define ll                long long
#define EPS           10E-10
#define ff              first
#define ss              second
#define sqr(x)        (x)*(x)

/*  If we look closely, we will find that 30!, 31!, 32!, 33! and 34!,
all contain the same number of trailing zeroes.
So we need to take 30!. we can do it by simply deduct remainder of n when the divider is 5.
*/

ll calc_fac_5( ll n)
{
    ll cnt=0,r=1,x=5;
    while( n )
    {
        cnt+=n/x;
        n/=x;
    }
    return cnt;
}

ll binarySearch( ll n )
{
    ll low=0,high=n*5,ans=0,m;
    while (low <= high)
    {
        int m = (low + high)/2;
        if (calc_fac_5(m) > n)  high = m - 1;
        else if (calc_fac_5(m)< n)  low = m + 1;
        else
        {
            ans= m;
            high = m - 1;
        }
    }
    return ans;
}



int main()
{
    ll m,n,t,b,c,d,i,j,k,x,y,z,ans;
    scl(t);
    for(x=1; x<=t; x++)
    {
        ll cnt=0;
        scl(n);

        ans=binarySearch(n );

        if(ans==0) printf("Case %lld: impossible\n",x);
        else          printf("Case %lld: %lld\n",x,ans);
    }

    return 0;
}



