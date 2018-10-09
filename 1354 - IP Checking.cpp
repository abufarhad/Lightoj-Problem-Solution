#include<bits/stdc++.h>
using namespace std;

int decimal_convert( long long binary_number)
{
    int sum=0, i=0, reminder;
    while(binary_number!=0){
        reminder= binary_number%10;
        binary_number/=10;
        sum+=reminder*pow(2,i++);
    }
    return sum;
}

int main()
{
   int a[1000],b[1000];
int t,i;
    cin>>t;
    for(i=1;i<=t;i++){
    scanf("%d.%d.%d.%d",&a[0],&a[1],&a[2],&a[3]);
    scanf("%d.%d.%d.%d",&b[0],&b[1],&b[2],&b[3]);

   b[0]=decimal_convert(b[0]);
      b[1]=decimal_convert(b[1]);
         b[2]=decimal_convert(b[2]);
            b[3]=decimal_convert(b[3]);

            if(b[0]==a[0]&&b[1]==a[1]&&b[2]==a[2]&&b[3]==a[3]){ printf("Case %d: Yes\n",i);}
            else  printf("Case %d: No\n",i);
    }
    return 0;
}

