
#include<iostream>

using namespace std;

int a[100001];
int b[100001];
int BinSearch(int a[], int n, int x){
	int l = 0, r = n-1;
	while (l < r){
		int mid = (l+r)/2;
		if (a[mid] < x){
			l = mid+1;
		}
		else{
			r = mid;
		}
	}
	if (a[l] == x){
		return l;
	}
	return -1;
}

void printArray(int a[], int n, int l, int r){
	cout<<l+1<<" "<<r+1<<"\n";
}

bool solve(int a[], int b[], int n, int s){
	b[0] = a[0];
	bool found = false;
	for (int i = 1; i < n; i++){
		b[i] = b[i-1] + a[i];
	}
	for (int i = 0; i < n; i++){
		if (b[i] == s){
			printArray(a, n, 0, i);
			found =true;
		}
		if (b[i] > s){
			int l = BinSearch(b, n, b[i]-s);
			if (l != -1){
				printArray(a, n, l+1, i);
				found= true;
			}
		}
	}
	return found;
}

int main(){
	int n, s;
	cin >> n;
	cin >> s;
	for (int i = 0; i < n; i++){
		cin >> a[i];
	}
	
	bool k = solve(a, b, n, s);
	if (!k){
		cout << -1;
	}
	return 0;
}
