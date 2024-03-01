#include<stdio.h>
int main (){
	int n;
	scanf("%d",&n);
	long long a[n];
	long long temp=0;
	for(int i=0;i<n;i++){
		scanf("%lld",&a[i]);
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(a[i]<a[j]){
				temp = a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	long long max =0;
	long long min =0;
	for(int i=0;i<n-1;i++){
		min = min + a[i];
	}
	for(int j=1;j<n;j++){
		max= max + a[j];
	}
	printf("%lld %lld",min,max);
}
