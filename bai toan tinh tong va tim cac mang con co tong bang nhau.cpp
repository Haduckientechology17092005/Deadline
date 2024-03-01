#include<bits/stdc++.h>
using namespace std;

void printEqualSumSubarrays(int arr[], int n) {
	int k=0;
    for (int len = 2; len <= n; len++) { // length of subarrays
        for (int i = 0; i <= n - len; i++) { // start index of subarray1
            for (int j = i + len; j <= n; j++) { // start index of subarray2
                int sum1 = accumulate(arr + i, arr + i + len, 0);
                int sum2 = accumulate(arr + j, arr + j + len, 0);
                if (sum1 == sum2) {
                	k++;
                    cout << "Subarray1: ";
                    for (int k = i; k < i + len; k++)
                        cout << arr[k] << " ";
                    cout << "\nSubarray2: ";
                    for (int k = j; k < j + len; k++)
                        cout << arr[k] << " ";
                    cout << "\n\n";
                }
            }
        }
    }
    if(k==0){
    	cout<<"No possible !";
    } else {
    	cout<<"Sum child: "<<k;
    }
}

int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
    	scanf("%d",&arr[i]);
    }
    printEqualSumSubarrays(arr, n);
    return 0;
}

