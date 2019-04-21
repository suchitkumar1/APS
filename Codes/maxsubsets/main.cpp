#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int setsize;
    cin >> setsize;
    int value;
    cin >> value;
    int a[setsize];
    int sum;
    int count1=0;
    for(int i=0;i<setsize;i++){
        cin >> a[i];
    }

    for(int i=0;i<pow(2,setsize);i++){
            sum=0;
        for(int j=0;j<setsize;j++){
            if(i & (1<<j!=0)){
                sum = sum + a[j];
            }
        }
        if(sum >= value){
            count1 ++;

        }
    }
    cout << count1 << endl;
    return 0;
}
