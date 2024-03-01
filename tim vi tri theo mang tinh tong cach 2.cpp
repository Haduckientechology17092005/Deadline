#include<iostream>

using namespace std;

int a[100001];

void printArray(int a[], int l, int r){
	cout<<l+1<<" "<<r+1<<endl;
}

bool solve(int a[], int n, int s){
	int left = 0, sum = 0;
	bool found = false;
	for (int right = 0; right < n; right++){
		sum += a[right];
		while (sum > s && left <= right){
			sum -= a[left];
			left++;
		}
		if (sum == s){
			printArray(a, left, right);
			found = true;
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
	
	bool k = solve(a, n, s);
	if (!k){
		cout << -1;
	}
	return 0;
}

