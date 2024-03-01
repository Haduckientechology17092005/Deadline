#include<iostream>
#include<cmath>
using namespace std;
void input(int a[], int n){
	for(int i=0;i<n;i++){
		cout<<"a["<<i<<"]= ";
		cin>>a[i];
	}
}
void output(int a[], int n){
	for(int i=0;i<n;i++){
		cout<<"a["<<i<<"]= "<<a[i]<<"\n";
	}
}
int main(){
	int n;
	cout<<"Enter n= ";
	cin>>n;
	int a[n];
	input(a,n);
	int max=a[0];
	//find max of array
	for(int i=1;i<n;i++){
		if(a[i]>max){
			max=a[i];
		}
	}
	//find f
	int b[max+1];
	for(int i=0;i<=max;i++){
		b[i]=0;
	}
	for(int i=0;i<n;i++){
		b[a[i]]=b[a[i]]+1;
	}
	for(int i=0;i<=max;i++){
		if(b[i]>0){
			cout<<i<<"-"<<b[i]<<"\n";
		}
	}
	int max1=1;
	for(int i=0;i<=max;i++){
		if(b[i]>max1){
			max1=b[i];
		}
	}
	cout<<"F-MAX: "<<max1<<"\n";
	for(int i=0;i<=max;i++){
		if(b[i]==max1){
			cout<<i<<"-"<<max1<<"\n";
		}
	}
	return 0;
}

