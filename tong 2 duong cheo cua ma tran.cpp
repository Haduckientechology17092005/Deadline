#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main (){
    int a[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            scanf("%d",&a[i][j]);
        }
    }
    int sum=0;
    int sum1=0;
    for(int i=0;i<3;i++){
        sum=sum+a[i][i];
        sum1=sum1+a[i][3-i-1];
    }
    int sub=0, sub1=0;
    sub= sum + sum1;
    sub1=abs(sub);
    printf("%d",sub1);
    return 0;
}
