#include <iostream>
#include <math.h>
#include <limits.h>

using namespace std;
int countSetBits( int n);
int main()
{   int n;

    cin >> n;
    int x=pow(2,n);

    int a[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin >> a[i][j];
        }
    }

    int dp[x];
    dp[0]=0;
    for(int i=1;i<x;i++){
        dp[i]=INT_MAX;
    }



    for(int i=0;i<x;i++){
        int y= countSetBits(i);
        cout << y << endl;
        //cout << y << endl;
        for(int j=0;j<n;j++){
            if((i&(1<<j))==0){
                dp[(i | (1<<j))] = min(dp[(i | (1<<j))], dp[i]+a[y][j]);
            }
        }
    }
    for(int i=0;i<x;i++){
        cout << dp[i] << " ";
    }cout << endl;
    cout << dp[x-1] << endl;
    return 0;
}
int countSetBits( int n)
{
int count1 = 0;
while (n)
{
    count1 += 1;
    n=n&(n-1);
}
return count1;
}
