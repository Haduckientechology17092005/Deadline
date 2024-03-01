#include<iostream>
#include<algorithm>
using namespace std;
int binarysearch(int a[], int l, int r, int n, int x){
	int m;
	if(a[0]>x || a[n-1]<x){
		return -1;
	}
	while(l<=r){
		m=(l+r)/2;
		if(a[m]==x){
			return m;
		}
		if(a[m]<x){
			l=m+1;
		}
		if(a[m]>x){
			r=m-1;
		}
	}
	return -1;
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
	sort(a,a+n);
	for(int i=0;i<n;i++){
		cout<<"\n"<<a[i]<<"\n";
	}
	int k= binarysearch(a,0,(n-1),n,x);
	if(k!=-1){
		cout<<"\nOK\n";
	}
	else {
		cout<<"\nI don't find it\n";
	}
	return 0;
}
