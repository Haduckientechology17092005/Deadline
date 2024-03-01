#include<iostream>
#include<stdio.h>
#include<math.h>
#include<bits/stdc++.h>
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
void arrange(int a[], int n){
	int temp;
	for(int i=0;i<n-1;i++){
		for(int j=n-1;j>i;j--){
			if(a[j]<a[j-1]){
				temp = a[j];
				a[j]=a[j-1];
				a[j-1]=temp;
			}
		}
	}
}
void dupLastindex(int a[], int n){
	if(a==NULL||n<=0){
		cout<<"Error !";
		return;
	}
	for(int i=n-1;i>0;i--){
		if(a[i]==a[i-1]){
			cout<<"Last index= "<<i<<"\n"<<"Duplicate= "<<a[i];
			return ;
		}
	}
	cout<<"No found";
}
int main (){
	int n;
	cout<<"Enter n= ";
	cin>>n;
	int a[n];
	cout<<"Enter array: "<<"\n";
	input(a,n);
	arrange(a,n);
	cout<<"Array arranged: "<<"\n";
	output(a,n);
	cout<<"Required"<<"\n";
	dupLastindex(a,n);
	return 0;
}
