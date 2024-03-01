#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<math.h>
using namespace std;
void sentielsearch(int a[], int n, int key){
	int last = a[n-1];
	a[n-1] = key;
	int i = 0;
	while (a[i]!=key){
		i++;
	}
	a[n-1] = last;
	if((i<n-1)||(last==key)){
		cout<<key<<" is present at index "<<i;
	} else {
		cout<<"Element not found";
	}
}
int main(){
	int n;
	cout<<"Enter n= ";
	cin>>n;
	int a[n];
	int key;
	cout<<"\n"<<"Enter key= ";
	cin>>key;
	cout<<"Enter array: "<<"\n";
	for(int i=0;i<n;i++){
		cout<<"a["<<i<<"]= ";
		cin>>a[i];
	}
	sentielsearch(a,n,key);
	return 0;
}
