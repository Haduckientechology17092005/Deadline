#include<iostream>
#include<cmath>
#include<vector>
#include<stdio.h>
#include<conio.h>
using namespace std;
int bsearch(vector<int> A, int key, int n){
	int lg;
	lg= log2(n-1)+1;
	int pos=0;
	for(int i=lg;i>=0;i--){
		if(A[pos]==key)
		return pos;
		int new_pos = pos | (1<<i);
		if((new_pos < n)&&(A[new_pos]<=key))
		pos=new_pos;
	}
	return ((A[pos]==key)?pos:-1);
}
void bubbleSort(vector<int>& vec, int n){
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-i-1;j++){
			if(vec[j]>vec[j+1]){
				swap(vec[j], vec[j+1]);
			}
		}
	}
}
int main (){
	vector <int> vec;
	int n;
	cout<<"Enter n= ";
	cin>>n;
	for(int i=0;i<n;i++){
		int x;
		cout<<"A["<<i+1<<"]= ";
		cin>>x;
		vec.push_back(x);
	}
	bubbleSort(vec,n);
	cout<<"Vector: "<<"\n";
	for(int i=0;i<n;i++){
		cout<<vec[i]<<" ";
	}
	return 0;
}
