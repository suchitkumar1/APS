#include <iostream>

using namespace std;

int main()
{   int n;
    int max1=0;
    int max2=0;
    int count1,count2;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    for(int i=0;i<n;i++){
        max2 = max2 + arr[i];
        if(max2 < 0){
            max2 = 0;
            count1 = i+1;

        }
        if(max1 < max2){
            max1 = max2;
            count2 = i;
        }
    }
    cout << count1 << endl;
    cout << count2 << endl;
    cout << max1 << endl;
    return 0;
}
