#include<stdio.h>
int main(){
    int a[2][3],i,j,sum=0;
    printf("enter the array\n");
    for(i=0;i<2;i++){
        for(j=0;j<3;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<2;i++){
        for(j=0;j<3;j++){
            sum=sum+a[i][j];
        }
    }
    printf("sum = %d",sum);
    return 0;
}