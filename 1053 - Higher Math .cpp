#include<bits/stdc++.h>
using namespace std;
#define PI 3.14159265
int main()
{
int a,b,c,i,n, k,m,k1,k2,m1,m2;
cin>>n;
for(i=1;i<=n;i++){
   cin>>a>>b>>c;
   k=(a*a+b*b); k1=(c*c+b*b); k2=(a*a+c*c);
   m=c*c; m2=b*b; m1=a*a;
   if(k==m||k1==m1||k2==m2){printf("Case %d: yes\n",i);}
   else printf("Case %d: no\n",i);
}
}
