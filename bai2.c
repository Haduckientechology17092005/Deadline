#include<stdio.h>
#include<math.h>
int main (){
    int n;
    int a[1000];
    scanf("%d", &n);
    for(int i=0;i<n;i++){
        scanf("%d", &a[i]);
    }
    int sum=0;
    for(int i=0;i<n;i++){
        sum = sum + a[i];
    }
    printf("%d",sum);
    return 0;
}