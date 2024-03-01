#include<iostream>
#include<math.h>
using namespace std;
void input(int a[], int n){
	for(int i=0; i<n; i++){
		cout<<"a["<<i<<"]= ";
		cin>>a[i];
	}
}
void compare(int a[], int n){
	int max=a[0];
	int min=a[0];
	for(int i=1;i<n;i++){
		if(max<a[i]){
			max=a[i];
		}
		if(min>a[i]){
			min=a[i];
		}
	}
	cout<<"Max= "<<max<<"\n";
	cout<<"Min= "<<min;
}
int main (){
	int n;
	cout<<"Enter n= ";
	cin>>n;
	int a[n];
	input(a,n);
	compare(a,n);
	return 0;
}
