#include<iostream>

using namespace std;

void assignment(int a[], int n, int max){
    bool present[max+1] = {false};
    for(int i = 0; i < n; i++){
        present[a[i]] = true;
    }
    for(int i = 1; i <= max; i++){
        if(!present[i]){
            cout << i << " ";
        }
    }
}
int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int max=0;
    for(int i=0;i<n;i++){
        if(a[i]>max){
            max=a[i];
        }
    }
    for(int i=0;i<n;i++){
        cout<<"a["<<i<<"]= "<<a[i]<<endl;
    }
    assignment(a,n,max);
    return 0;
}
