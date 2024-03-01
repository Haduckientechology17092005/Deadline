#include <bits/stdc++.h>
using namespace std;

// Function to get the missing element
int getMissingNo(int a[], int n)
{
	int i, total = 1;

	for (i = 2; i < (n + 1); i++) {
		total += i;
		total -= a[i - 2];
	}
	return total;
}

// Driver Program
int main()
{
	int n;
	cin>>n;
	cout<<"Nhap  mang: \n";
	int arr[n];
	for(int i=0;i<n;i++){
		cout<<"a["<<i<<"]= ";
		cin>>arr[i];
	}

	// Function call
	cout << getMissingNo(arr, n);
	return 0;
}

// This code is contributed by Aditya Kumar (adityakumar129)

