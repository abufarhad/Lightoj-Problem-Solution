#include<bits/stdc++.h>
using namespace std;
//#define eps  1e-9
int main(){
double a,b,c,s,S,A,B,C,r1,r2,r3,area,result;
int t,i;
cin>>t;
for(i=1;i<=t;i++){
cin>>r1>>r2>>r3;
a=r1+r2;
b=r2+r3;
c=r3+r1;

s=(a+b+c)*.5;
area= sqrt(s*(s-a)*(s-b)*(s-c));

A = acos((a*a+c*c-b*b)/(2.0*a*c));
B = acos((a*a+b*b-c*c)/(2.0*a*b));
C = acos((b*b+c*c-a*a)/(2.0*b*c));

result =area -(.5*r1*r1*A)-(.5*r2*r2*B)-(.5*r3*r3*C);
printf("Case %d: %.6lf\n",i,result);}
return 0 ;}


