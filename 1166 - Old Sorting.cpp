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



int main()
{

    ll m,n,t,b,c,d,i,j,k,x,y,z,ans;
    scl(t);

    for(x=1; x<=t; x++)
    {
        ll cnt=0;
        scl(n);
        ll  a[n];

        for(i=1; i<=n; i++)
        {
            cin>>a[i];
        }

        for(i=1; i<=n; i++)
        {
            if(a[i]!=i)
            {
                for(j=i+1; j<=n; j++)
                {
                    if(a[j]==i)
                    {
                        swap(a[j], a[i]);
                        cnt++;
                        break;
                    }
                }
            }
        }
        printf("Case %lld: %lld\n",x,cnt);

    }

    return 0;
}




