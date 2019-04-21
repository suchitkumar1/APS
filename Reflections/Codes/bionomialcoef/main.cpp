#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    int n;
    int sum = 0;
    cin >> n;
    int arr[n][n];
    memset(arr, 0, sizeof(arr[0][0]) * n * n);
    arr[0][0]=1;
    for(int i=1;i<n;i++){
        for(int j=0;j<i+1 && j<n;j++){
            sum = 0;
            if(j == 0){
            arr[i][j] = 1;
            }else if(i == j){
                arr[i][j]=1;
            }
            else if(j !=0 && i!=j){
            for(int k=j-1;k<j+1;k++){
                sum = sum + arr[i-1][k];
            }arr[i][j] = sum;
         }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout << arr[i][j] << "    ";
        }cout << endl;
    }
    return 0;
}
