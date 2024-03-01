#include<stdio.h>
#include<conio.h>
#include<iostream>
#include<stdlib.h>
#include<algorithm>
using namespace std;
int interpolationSearch(int a[], int x, int low, int high, int n){
	int pos;
	if(low<=high && a[low] <= x && x <= a[high]){
		pos = low
              + (((double)(high - low) / (a[high] - a[low]))
                 * (x - a[low]));
 
		if(a[pos]==x){
			return pos;
		}
		if(a[pos]>x){
			return interpolationSearch(a,x,low,pos-1,n);
		}
		if(a[pos]<x){
			return interpolationSearch(a,x,pos+1,high,n);
		}
	}
	return -1;
}
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
	int x;
	cout<<"\nEnter x= ";
	cin>>x;
	cout<<"\nEnter Array:\n";
	input(a,n);
	sort(a,a+n);
	cout<<"Array: "<<"\n";
	output(a,n);
	int index = interpolationSearch(a,x,0,n-1,n);
	if(index !=-1){
		cout<<"\n"<<"Index= "<<index<<"\n";
	} else {
		cout<<"\nNo finding, please enter again !";
	}
	return 0;
}
