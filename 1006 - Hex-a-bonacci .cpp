#include<bits/stdc++.h>
using namespace std;
//int a,n,b,c,d,e,f,m=0;
//int fn( int n ) {
//    if( n == 0 ) return a;
//    if( n == 1 ) return b;
//    if( n == 2 ) return c;
//    if( n == 3 ) return d;
//    if( n == 4 ) return e;
//    if( n == 5 ) return f;
//     return ( fn(n-1) + fn(n-2) + fn(n-3) + fn(n-4) + fn(n-5) + fn(n-6) )% 10000007;
//
//    //m=fn(n) ;
//    //cout<<m<<endl;
//}
int main() {
//    int n, caseno = 0, cases;
//    scanf("%d", &cases);
//    while( cases-- ) {
//        scanf("%d %d %d %d %d %d %d", &a, &b, &c, &d, &e, &f, &n);
//        printf("Case %d: %d\n", ++caseno, fn(n));
//    }
//    return 0;
//}
 long long int a, b, c, d, e, f;
    long long int ara[10000], m;
    int n, caseno = 0, cases;
    scanf("%lld", &cases);
    while( cases-- )  {
        scanf("%lld %lld %lld %lld %lld %lld %d", &ara[0], &ara[1], &ara[2], &ara[3], &ara[4], &ara[5], &n);
        for(m=6; m<=n; m++) {
        ara[m]=(ara[m-1]+ara[m-2]+ara[m-3]+ara[m-4]+ara[m-5]+ara[m-6])%10000007;
      // cout<<ara[n]<<endl;}
    }
        printf("Case %d: %lld\n", ++caseno, ara[n] % 10000007);
    }
    return 0;
}
