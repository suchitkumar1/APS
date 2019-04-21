#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
   char st1[1000];
   char st2[2000];

   scanf("%s",st1);
   scanf("%s",st2);

    int a = strlen(st1) + 1;
    int b = strlen(st2) + 1;
    int arr[a][b];
    for(int i =0; i < a;i++){
        for(int j = 0;j<b;j++){
            arr[i][j]=0;
        }
    }

    for(int i =1;i<a;i++){
        for(int j=1;j<b;j++){
            if(st1[i-1]==st2[j-1]){
                arr[i][j]= arr[i-1][j-1]+1;
            }else{
                if(arr[i-1][j] >= arr[i][j-1]){
                    arr[i][j]=arr[i-1][j];
                }else{
                    arr[i][j]=arr[i][j-1];
                }
            }
        }
    }
    for (int k=0;k<a;k++){
        for(int l=0;l<b;l++){
            printf("%d ",arr[k][l]);
        }printf("\n");
    }
}
