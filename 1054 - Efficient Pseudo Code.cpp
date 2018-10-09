//#include<bits/stdc++.h>
//using namespace std;
//int main(){
//long long a,m,n,i,j;
//
//}
#include <bits/stdc++.h>
#define LL long long int
using namespace std;

LL strmod(string s)
{
    LL i, sum = 0,n=100000;
    for(i=0; i<s.size(); i++)
    {
        sum = sum * 10 + (s[i]-'0');
        sum %= n;
    }
    return sum;
}

int main()
{
    int t;
    cin>>t;
    while(t--){
    string s;
    LL n;
   // cin >> s >> n;
   cin >> s;
    cout << strmod(s) << endl;}
    return 0;
}
