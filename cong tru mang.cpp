#include<stdio.h>
#include<math.h>
main (){
    int n;
    scanf("%d",&n);
    int a[n];
    int b[3];
     b[0]=b[1]=b[2]=0;
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++){
        if(a[i]>0){
            b[0]++;
        }
        if(a[i]<0){
            b[1]++;
        }
        if(a[i]==0){
            b[2]++;
        }
    }
    float d=(float)b[0]/n;
    float e=(float)b[1]/n;
    float f=(float)b[2]/n;
    printf("%.6f %.6f %.6f",d,e,f);
}
