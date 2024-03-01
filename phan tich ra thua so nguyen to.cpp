#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){
    long long n;
    printf("\nNhap n = ");
    scanf("%lld", &n);
    long long dem;
    
    for(long long i = 2; i <= n; i++){
        dem = 0;
        while(n % i == 0){
            ++dem;
            n /= i;
        }
        if(dem){
            if(dem > 1) printf("%lld^%lld", i, dem);
            else printf("%lld", i);
            if(n > i){
                printf(" * ");
            }
        }
    }
    
}
