#include<stdio.h>
#include<math.h>
int main (){
	int n;
	scanf("%d",&n);
	for(int j=0;j<n;j++){
		for(int i=0;i<n;i++){
			if(i<n-j-1){
				printf(" ");
			} else {
				printf("#");
			}
		}
		printf("\n");
	}
	return 0;
}

