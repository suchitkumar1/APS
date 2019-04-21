#include <stdio.h>
#include <stdlib.h>
#include <math.h>
long long LCM(long long A,long long B);
long long gcd(long long A, long long B);
int main()
{  long long n;

   scanf("%lli",&n);
   for(int j=0;j<n;j++){
        long long N,A,B,K,LC,a,b,c,d;
        scanf("%lli %lli %lli %lli",&N,&A,&B,&K);
        LC = LCM(A,B);
        a = N/A;
        b = N/B;
        c = N/LC;
        d = a+b-c*2;
        if(d>=K){
            printf("Win\n");
        }else{
            printf("Lose\n");
        }
   }


    return 0;

}
long long LCM(long long A,long long B){
long long  i, hcf, lcm;
    hcf = gcd(A, B);

    lcm = (A*B)/hcf;
    return lcm;
}
long long gcd(long long A, long long B)
{
   if (B == 0)   //recursion termination condition
   {
      return A;
   }
   else
   {
      return gcd(B, A % B);   //calls itself
   }
}
