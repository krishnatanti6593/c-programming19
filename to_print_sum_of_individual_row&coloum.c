
#include<stdio.h>
int main(){
    int a[3][3],sr,sc;

    printf("enter the array:\n");

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            scanf("%d",&a[i][j]);
        }
    }

    printf("matrix is:\n");

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }

    for(int i=0;i<3;i++){
        sr=sc=0;

        for(int j=0;j<3;j++){
            sr=sr+a[i][j];
            sc=sc+a[j][i];
        }

        printf("Row sum = %d, Column sum = %d\n",sr,sc);
    }

    return 0;
}
