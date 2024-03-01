#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<math.h>
using namespace std;
int binarysearch(int a[], int l, int r, int x){
	while(l<=r){
		int m=(l+r)/2;
		if(a[m]==x)
		return m;
		if(a[m]<x){
			l=m+1;
		}
		if(a[m]>x){
			r=m-1;
		}
	}
	return -1;
}
void arrange(int a[], int n){
	int temp;
	for(int i=0;i<n-1;i++){
		for(int j=n-1;j>i;j--){// khong dùng j>i+1
			if(a[j]<a[j-1]){
				temp =a[j];
				a[j]=a[j-1];
				a[j-1]=temp;
			}
		}
	}
}
void output(int a[], int n){
	for(int i=0;i<n;i++){
		cout<<"a["<<i<<"]= "<<a[i]<<"\n";
	}
}
int main(){
	int n;
	cin>>n;
	int a[n];
	int x;
	cin>>x;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	arrange(a,n);
	output(a,n);
	int k=binarysearch(a,0,n-1,x);
	if(k==-1){
		cout<<"No";
	} else {
		cout<<"Index: "<<k;
	}
	return 0;
}
