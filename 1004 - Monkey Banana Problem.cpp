
///Resource : https://mahadis.wordpress.com/2016/06/03/monkey-banana-problem-light-oj-1004/

#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;


#define ll                  long long
#define scl(n)              scanf("%lld", &n)
#define fr(i,n)             for (ll i=0;i<n;i++)
#define fr1(i,n)            for(ll i=1;i<=n;i++)
#define pfl(x)              printf("%lld\n",x)
#define endl 	            "\n"
#define pb                  push_back
#define l(s)                      s.size()
#define asort(a)            sort(a,a+n)
#define dsort(a)            sort(a,a+n,greater<int>())
#define vasort(v)         sort(v.begin(), v.end());
#define vdsort(v)         sort(v.begin(), v.end(),greater<int>());
#define pn                  printf("\n")
#define md                  10000007
#define debug               printf("I am here\n")
#define ps                  printf(" ")
#define inf                 1<<28
#define mem(a,i)          memset(a, i, sizeof(a))
#define tcas(i,t)             for(ll i=1;i<=t;i++)
#define pcas(i)                printf("Case %lld: ",i)
#define N 100006
ll a[200][200], n,k;
ll dp[200][200];

ll monkey_eat_banana(ll i, ll j)
{
    //if(i>=0 && i<2*n-1 and j>=0 && j<n){
        if(dp[i][j] !=-1)return dp[i][j];
        if(a[i][j]==0) return 0;
        if(i==k-1) return a[i][j];

        ll res=-inf;
        ll r1=0, r2=0;
        r1=  monkey_eat_banana(i+1, j )+a[i][j] ;
        r2=  monkey_eat_banana(i+1, j+1 )+a[i][j] ;

        return dp[i][j]=max(r1,r2);

    /*
        if(i<n-1) res=max(res,  monkey_eat_banana(i+1, j+1 )+a[i][j] );
        else res=max(res,  monkey_eat_banana(i+1, j-1 )+a[i][j] );

        return dp[i][j]=res;
    }
    else return 0;
    */
}


int main()
{

    ll m,t,b,c,d,i,j,k,x,y,z,q,r;
       scl(t);
       tcas(x,t)
       {
        mem(a, 0);
        scl(n);
        /*
        fr(i, 2*n-1)
        {
            if(i<n)  for(j=0;j<=i;j++) cin>>a[i][j];
            else     for(j=0; j<2*n-i-1;j++)cin>>a[i][j];
        }
        */

        k = 2*n - 1;
        for(i=0;i<n;i++)  for(j=0;j<=i;j++)cin>>a[i][j];    //taking increasing upper half

        ll l=1;
        for(i=n;i<k;i++) {for(j=l;j<n;j++){cin>>a[i][j];} l++;} // taking decreasing lower half

        mem(dp,-1);

        ll ans= monkey_eat_banana( 0,0);

        pcas(x);

        pfl(ans);
      }

return 0;
}

