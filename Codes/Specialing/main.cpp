#include <iostream>
#include <bits/stdc++.h>
#define Max 350000
#include <stdio.h>
#include <string.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    //cout << n <<endl;
    for(int i=0;i<n;i++){
        int N;
        cin >> N;
        //cout << N << endl;
        int alp[26];
        int visit[26];
        int temp2[26];


        memset(temp2,0,sizeof(temp2));

        for(int j =0;j<N;j++){
            char arr[Max];
            char temp[1] = {'0'};
            memset(visit,0,sizeof(visit));
            memset(alp,0,sizeof(alp));
            cin >> arr;
            strcat(arr,temp);
            //cout << arr << endl;

            for(int k=0;arr[k] != '0';k++){
                    int l =0;
                    l = int(arr[k]) - 97;
                    //cout <<arr[k];
                    //cout << int(arr[k]);
                    if(visit[l] != 1){
                        alp[l]=alp[l] + 1;
                        visit[l] = visit[l] + 1;
                    }
            }
            for (int c = 0 ; c < 26 ; c++ )
              temp2[c] = temp2[c] + alp[c];
        }
        int count1 = 0;
        for(int j =0 ; j<26;j++){
            //cout << temp2[j];
            if(temp2[j] == N){
                count1 = count1 + 1;
            }

        }//cout << endl;
        cout << count1 << endl;

    }
    return 0;
}
