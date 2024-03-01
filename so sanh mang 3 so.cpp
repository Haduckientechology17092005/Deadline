#include<stdio.h>
#include<math.h>
main (){
    int a[3];
    int b[3];
    int c[2];
    for(int i=0;i<3;i++){
        scanf("%d",&a[i]);
    }
    printf("\n");
    for(int i=0;i<3;i++){
        scanf("%d",&b[i]);
    }
    c[0]=c[1]=0;
    for(int i=0;i<3;i++){
        if(a[i]>b[i]){
            c[0]++;
        }
       if(a[i]==b[i]){
       	continue;
	  }
        if(a[i]<b[i]){
            c[1]++;
        }
    }
            printf("%d %d",c[0],c[1]);
}
