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
#define size 5000006

unsigned ll int phi[size];



void euler_phi()
 { //Seive to build the array that stores phiient values
    phi[1] = 1;
    for(int i=2; i<size; i++)
    {
        if( !phi[i] )
        {
            phi[i] = i-1;
            for(int j=(i<<1); j<=size; j+=i)
            {
                //cout<<"i =" <<i<<" "<<"J= "<<j<<endl;
                if(!phi[j]) phi[j] = j;
                phi[j] = phi[j]/i*(i-1);
            }
        }
    }
 }

int main()
{

    euler_phi( );

    ll t,i,j,a,b;
    scl(t);

    for(int i = 2; i <=5000000; i++)
    {
        phi[i] = phi[i-1] + phi[i] * phi[i];
    }
    for(i=1; i<=t; i++)
    {
        scl(a), scl(b);
       // cout<<phi[36]<<" "<<phi[65]<<endl;
        printf("Case %lld: %llu\n",i,phi[b]-phi[a-1]);
    }

    return 0;
}

