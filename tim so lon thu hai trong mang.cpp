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
int secondmax(int a[], int n){
	for(int i=n-1;i>=0;i--){
		if(a[i-1]<a[i]){
			cout<<"Second Max in array: "<<a[i-1];
			return 0;
		
		}
	}
	cout<<"No second max in array";
}
int bubbleSort(int a[], int n){
	int temp=0;
	for(int i=0;i<n-1;i++){
		for(int j=n-1;j>i;j--){
			if(a[j]<a[j-1]){
				swap(a[j],a[j-1]);
			}
		}
	}
}
int main(){
	int n;
	cout<<"Enter n= ";
	cin>>n;
	int a[n];
	cout<<"Enter array: \n";
	input(a,n);
	bubbleSort(a,n);
	cout<<"Array arranged: \n";
	output(a,n);
	secondmax(a,n);
	return 0;
}
