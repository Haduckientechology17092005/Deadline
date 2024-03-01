#include<stdio.h>
#include<math.h>
int main (){
    long long n;
    scanf("%lld",&n);
    long long a[n];
    long long temp = 0;
    int count =0;
    for(int i=0;i<n;i++){
    	scanf("%lld",&a[i]);
    	if(temp<a[i]){
    		temp = a[i];
		    count =1;
    } else if (a[i]==temp){
    	count++;
    }
    }
    printf("%d",count);
}

