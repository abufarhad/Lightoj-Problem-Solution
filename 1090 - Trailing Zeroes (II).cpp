
///https://shikhorroy.wordpress.com/2014/02/22/wp-mep2mliv-6g/?fbclid=IwAR1oWHS__kVppDajcjfsfq-Z9084xLKZfk6ercDvnZHV3_laz8SaWsydLh4

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


#define MOD          10000007
#define loop(i,n)        for(int i=0;i<n;i++)
#define loop1(i,n)       for(int i=1;i<=n;i++)
#define REP(i,a,b)       for(int i=a;i<b;i++)
#define RREP(i,a,b)      for(int i=a;i>=b;i--)
#define TEST_CASE(t)     for(int z=1;z<=t;z++)
#define PRINT_CASE       printf("Case %d: ",z)
#define LINE_PRINT_CASE  printf("Case %d:\n",z)
#define CASE_PRINT       cout<<"Case "<<z<<": "
#define all(a)           a.begin(),a.end()
#define intlim           2147483648
#define infinity         (1<<28)
#define ull              unsigned long long


/* int dx[] = {1,-1,0,0} , dy[] = {0,0,1,-1}; */ // 4 Direction
/* int dx[] = {1,-1,0,0,1,1,-1,-1} , dy[] = {0,0,1,-1,1,-1,1,-1}; */ // 8 Direction
/* int dx[] = {1,-1,1,-1,2,2,-2,-2} , dy[] = {2,2,-2,-2,1,-1,1,-1}; */ // Knight Direction
/* int dx[] = {2,-2,1,1,-1,-1} , dy[] = {0,0,1,-1,1,-1}; */ // Hexagonal Direction


//i64 bigmod(i64 num,i64 n){if(n==0)return 1;i64 x=bigmod(num,n/2);x=x*x%mod;if(n%2==1)x=x*num%mod;return x;}

//i64 modinverse(i64 num){return bigmod(num,mod-2)%mod;}

//i64 po(i64 a,i64 b){i64 ans=1;while(b--)ans *= a;return ans;}

//i64 ncr(i64 n,i64 r){if(n==r)return 1;if(r==1)return n;if(dp[n][r]!=-1)return dp[n][r];return dp[n][r]=ncr(n-1,r)+ncr(n-1,r-1);}



#define max3(a, b, c) max(a, b) > max(b, c) ? max(a, b) : max(b, c)
#define min3(a, b, c) min(a, b) < min(b, c) ? min(a, b) : min(b, c)


#define mod 1000000007
#define sv(a) sort(a.begin(),a.end())
#define sortD(a)  sort(a,a+n,greater<int>())
#define sortA(a)  sort(a,a+n)

ll calc_2_5( ll n, ll x)
{
    ll cnt=0;
    while(n%x==0)
    {
        cnt++;
        n/=x;
    }
    return cnt;
}

ll calc_fac_2_5( ll n, ll x)
{
    ll cnt=0,r=1;
    while(pow(x,r)<=n )
    {
        cnt+=n/pow(x,r); r++;
    }
    return cnt;
}

int main()
{

    ll m,n,t,b,c,d,x,r,p,q,y,z,ans;
    scl(t);

    for(x=1; x<=t; x++)
    {
        ll cnt=0;
        scl(n);
        cin>>r>>p>>q;

        ll i=calc_fac_2_5(n,2);
        ll k=calc_fac_2_5(n-r,2);
        ll m=calc_fac_2_5(r,2);

        ll j=calc_fac_2_5(n,5);
        ll l=calc_fac_2_5((n-r),5);
        ll n=calc_fac_2_5(r,5);

        ll px= q*calc_2_5(p,2);
        ll py= q*calc_2_5(p,5);

        //cout<<(i-k-m+px)<<" "<<(j-l-n+py)<<endl;

        ans=min( (i-k-m+px) , (j-l-n+py));

        printf("Case %lld: %lld\n",x,ans);

    }

    return 0;
}



