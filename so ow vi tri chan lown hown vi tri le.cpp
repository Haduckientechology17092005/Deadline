#include<iostream>
#include<algorithm>
using namespace std;
void asign(int a[], int n){
	sort(a, a + n);
	int p,q;
	int ans[n];
	p=0;
	q=n-1;
	for(int i=0;i<n;i++){
		if((i+1)%2==0){
			ans[i]=a[q--];
		} else {
			ans[i]=a[p++];
		}
	}
	for(int i=0;i<n;i++){
		cout<<"ans["<<i<<"]= "<<ans[i]<<"\n";
	}
}
int main (){
	int n;
	cout<<"Enter n=  ";
	cin>>n;
	int a[n];
	cout<<"Enter array: \n";
	for(int i=0;i<n;i++){
		cout<<"a["<<i<<"]= ";
		cin>>a[i];
	}
	cout<<"\nXuat mang theo yeu cau: \n";
	asign(a,n);
	return 0;
}
