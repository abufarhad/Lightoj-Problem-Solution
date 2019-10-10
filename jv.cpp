#include<iostream>
#include<bits/stdc++.h>
using namespace std;
//long long int Sum(int *startRange, int * diff,int *endRange)
//    {
//        if (*endRange > *startRange)
//        {
//              return  *endRange + Sum( *startRange,*endRange - *diff);
//
//        }
//
//        if (*endRange < *startRange)
//        {
//            return *startRange + Sum(*endRange, *startRange - *diff);
//
//        }
//
//        return *endRange;
//
//    }
//int main()
//{
    int t,a1,d1,k1,a2,d2,k2,m=0,n=0,d;
//    long long int ans;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        cin>>a1,d1,k1,a2,d2,k2;
    }
    for(i=a1;i<k1;i+d1){
        m=m+i;
    }
    for(i=a2;i<k2;i+d2){
        n=n+i;
    }
    d=m+n;
//        ans=Sum(&a1,&d1,&k1)+Sum(&a2,&d2,&k2);
//    }


    return 0;
}
