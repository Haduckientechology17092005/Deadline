#include<cmath>
#include<vector>
#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cout<<"Enter n= ";
	cin>>n;
	int a[n];
	cout<<"Enter array: "<<"\n";
	for (int i=0;i<n;i++){
		cout<<"a["<<i<<"]= ";
		cin>>a[i];	
	}
	int j=0;
	for(int i=0;i<n;i++){
		if(a[i]!=0){
			swap(a[j],a[i]);
			j++;
		}
	}
	cout<<"\nPrint Array\n";
	for(int i=0;i<n;i++){
		cout<<"a["<<i<<"]= "<<a[i]<<"\n";
	}
	return 0;
}
