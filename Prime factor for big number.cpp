
///prime factorization up to 10^18 number

#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;

#define ll long long

#define sci(x) scanf("%d",&x)
#define scl(x) scanf("%lld",&x)
#define scd(x) scanf("%lf",&x)

#define pfi(x) printf("%d",x)
#define pfl(x) printf("%lld",x)
#define pfd(x) printf("%lf",x)
#define pfc(x) printf("Case %d: ",x++)
#define ps printf(" ")
#define pn printf("\n")

#define pb(x) push_back(x)
#define ppb(x) pop_back(x)
#define pf(x) push_front(x)
#define ppf(x) pop_front(x)
#define in(x,y) insert({x,y})

#define sv(a) sort(a.begin(),a.end())
#define sortD(a)  sort(a,a+n,greater<int>())
#define sortA(a)  sort(a,a+n)

ll prime_factor(ll n)
{
    int cnt=0,i;
    while(!(n%2))
    {
        n>>=1;  // n/=2;
        cnt++;
    }
    if(cnt)
    {
        cout<<"2"<<" "<<cnt<<endl;
    }
  for(i=3 ;i<sqrt(n);i+=2)
  {
     cnt=0;
      while(n%i==0)
      {
          n/=i;
          cnt++;
      }
    if(cnt)  cout<<i<<" "<<cnt<<endl;

  }
//cout<<n<<endl;
  if(n>2) cout<<n<<" "<<"1"<<endl;
}

int main()
{
   ll m,n,i,j,a,b;
   scl(n);
   prime_factor(n);
return 0;
}
