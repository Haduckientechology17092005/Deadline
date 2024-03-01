#include<stdio.h>
#include<conio.h>
#include<iostream>
#include<stdlib.h>
#include<algorithm>
using namespace std;
int binarysearch(int a[], int low, int high, int x){
	int mid;
	mid=(high+low)/2;
	if(a[mid]==x)
	return mid;
	if(a[mid]>x){
		return binarysearch(a,low,mid-1,x);
	}
	if(a[mid]<x){
		return binarysearch(a,mid+1,high,x);
	}
	return -1;
}
int exponentialSearch(int a[], int n, int x)
{
    if (a[0] == x)
        return 0;
    int i = 1;
    while (i < n && a[i] <= x)
        i = i * 2;
    return binarysearch(a, i / 2, min(i, n - 1), x);
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
int main()
{
	int n;
	cout<<"Enter n= ";
	cin>>n;
	int a[n];
	int x;
	cout<<"\nEnter x= ";
	cin>>x;
	cout<<"\nEnter array: \n";
	input(a,n);
	sort(a,a+n);
	cout<<"\nArray: \n";
	output(a,n);
	int result = exponentialSearch(a,n,x);
	if(result!=-1){
		cout<<"\nIndex: "<<result;
	} else {
		cout<<"No finding.";
	}
	return 0;
}
