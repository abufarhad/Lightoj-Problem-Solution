
#include <bits/stdc++.h>

using namespace std;
#define ll long long
int phi[10005], mark[10005];

void seivePhi(ll n)
{
    memset(phi,0,sizeof(phi));
    phi[1] = 0;
    for(int i = 2; i <= n; i++)
    {
        if(phi[i] == 0)
        {
            for(int j = i; j <= n; j+=i)
            {
                if(phi[j] == 0)
                    phi[j] = j;
                phi[j] = phi[j]/i * (i-1);
                cout<<i<<" " <<phi[j]<<endl;
            }
        }
    }
}
int main()
{
    int n;
    scanf("%d", &n);
    seivePhi(n);
    for(int i=1; i<=n; i++)
        printf("Number of Coprime for %4d is %4d\n", i, phi[i]);
    return 0;
}
