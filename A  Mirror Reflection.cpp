#include<bits/stdc++.h>
using namespace std;
#define PI 3.14159265
#define ll long long

int main(){
ll n,i,num; //int d1,d2,d3,d4,d5;
//int d1=1, int d2=2,int d3=5,int d4=6,int d5=9;
string s;
while(n--){
    cin>>s;
    ll len= s.length();
   // long long a[num];
    for(i=0;i<len;i++){
        if(s[i]==1){ strcpy(s[i],'1') ;}
         if(a[i]==2){ strcpy(a[i],'2') }
          if(a[i]==5){ a[i]=2; }
           if(a[i]==6){ a[i]=9; }
            if(a[i]==9){a[i]=6;}
    }
}}
