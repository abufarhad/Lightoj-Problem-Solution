#include<bits/stdc++.h>
using namespace std;
int main(){

int t,a1,d1,k1,a2,d2,k2,m=0,n=0,d;
//    long long int ans;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        cin>>a1,d1,k1,a2,d2,k2;

    for(i=a1;i<k1;i+d1){
        m=m+i;
    }
    for(i=a2;i<k2;i+d2){
        n=n+i;
    }
    d=m+n;
    cout<<d;}
//        ans=Sum(&a1,&d1,&k1)+Sum(&a2,&d2,&k2);
//    }


    return 0;
}

