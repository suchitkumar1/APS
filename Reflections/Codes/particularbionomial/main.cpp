#include <iostream>
#include <string.h>


using namespace std;

int main()
{
    int n,k;
    cin >> n;
    cin >> k;
    int c[k+1];
    memset(c,0,sizeof c);
    int i,j;
    c[0]=1;
    for(i=0;i<=n;i++){
        for(j=min(i,k);j>0;j--){
            c[j]= c[j] + c[j-1];
        }
    }
    for(int l=0;l<k;l++){
        cout << c[l] << " ";
    }cout << endl;
    return 0;
}
