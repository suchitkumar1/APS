#include <iostream>
#include <stdio.h>
#include <string.h>
#include <algorithm>
#include <array>
using namespace std;
int prime(int num);
int main()
{
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        char arr[999999];
        int len=0;
        int visit[26];
        int temp1;
        memset(visit,0,sizeof(visit));
        cin >> arr;
        char temp[1] = {'0'};
        strcat(arr,temp);
        cout << arr << endl;
        for(int j =0;arr[j] != '0';j++){
            int l =0;
            l = int(arr[j] - 65);
            visit[l] = visit[l] + 1;
            len = len +1;
        }
        for(int k =0;k<26;k++){
            cout << visit[k];
        }cout << endl;
        cout << len <<endl;
        int replacement = 0;
        int max1 = 0;

            for(int j=0;j<26;j++){
                if(max1 < visit[j]){
                    max1 = visit[j];
                }
            }
            cout << max1 << endl;

        int prim = prime(len);
        if (prim == 0 && len != 2){

            replacement = len - max1;
            cout << replacement << endl;
        }
        else{   int max2;
                int max3;
                int smax2=0;
                int smax3=0;
                if(len%max1 != 0){
                     for(int j=max1;j>0;j--){
                            if(len%j == 0){
                                max2=j;
                                cout << max2 << endl;
                                break;
                            }
                     }
                     for(int j=max1;j<len+1;j++){
                            if(len%j == 0){
                                max3=j;
                                cout << max3 << endl;
                                break;
                            }
                     }
                    for(int j=0;j<26;j++){
                        if(visit[j] !=0){
                        smax2 = smax2 + abs(max2 - visit[j]);
                    }}
                    for(int j=0;j<26;j++){
                            if(visit[j] != 0){
                        smax3 = smax3 + abs(max3 - visit[j]);
                    }}
                    cout << smax2 << endl;
                    cout << smax3 << endl;
                    if(smax2 < smax3){
                        max1 = max2;
                    }
                    else if(smax3 < smax2){
                        max1 = max3;
                    }

                }

                int comp[26];
                memset(comp,0,sizeof(comp));
                for(int k =0;k<26;k++){
                    if(visit[k]!=0){
                        comp[k]= max1 - visit[k];
                    }
                }
                for(int m=0;m<26;m++)
                {
                    for(int o=m+1;o<26;o++)
                        {
                        if(comp[m]<comp[o])
                            {
                            temp1  =comp[m];
                            comp[m]=comp[o];
                            comp[o]=temp1;
                            }
                        }
                }
                for(int k=0;k<26;k++){
                    cout << comp[k];
                }cout << endl;
                int x=0;
                for(int j=0;j<26;j++){
                    if(comp[j] !=0){
                    int d=0;
                        for(int k=j+1;k<26;k++){
                                if(comp[k] != 0){
                                if(comp[k]<0){
                                    if(comp[j]+comp[k]==0){
                                        x = x + 1;
                                        comp[k]= comp[j] + comp[k];
                                        comp[j]=0;
                                        break;
                                    }
                                    else{
                                        comp[j] = comp[j] +comp[k];
                                        comp[k] =0;
                                        x = x+1;
                                    }
                                }else{
                                d = max1 - comp[j];
                                if(comp[k] >= d ){
                                    if (comp[j] >= comp[k]){
                                    comp[k] = comp[k] - d;

                                    comp[j] = 0;
                                    x = x + d;
                                    break;
                                    }
                                    else{
                                        comp[j] = 0;
                                        x = x + max1 -comp[k];
                                        comp[k] = comp[k] - d;
                                        break;
                                    }
                                }
                                else{
                                    //x = x + comp[k];
                                    comp[j] = comp[j] + comp[k];
                                    comp[k]= 0;

                                }

                            }
                        }
                    }
                    }
                }
                for(int j=0;j<26;j++){
                    cout << comp[j];
                }cout << endl;

            cout << x << endl;
        }


    }
    return 0;
}
int prime(int num){
  int count=0;
	for(int i=2;i<num;i++)
	{
		if(num%i==0)
		{
			count++;
			break;
		}
	}
	if(count==0)
	{
		return count;
	}
	else
	{
		return count;
	}

  }
