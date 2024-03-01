#include<iostream>
#include<algorithm>
using namespace std;
int ternarrysearch(int l, int r, int key, int a[]){
    if(r>=l){
        int mid1=l+(r-l)/3;
        int mid2=r-(r-l)/3;
        if(a[mid1]==key){
            return mid1;
        }
        if(a[mid2]==key){
            return mid2;
        }
        if(a[mid1]>key){
            return ternarrysearch(l,mid1-1,key,a);
        } else if (a[mid2]>key){
            return ternarrysearch(mid2+1,r,key,a);
        } else {
            return ternarrysearch(mid1+1,mid2-1,key,a);
        }
    }
    return -1;
}
int main(){
    int n;
    cout<<"Nhap n= ";
    cin>>n;
    int key;
    cout<<"\nNhap key= ";
    cin>>key;
    int l=0;
    int r=n-1;
    int a[n];
    cout<<"\nNhap mang\n";
    for(int i=0; i<n;i++){
        cout<<"a["<<i<<"]= ";
        cin>>a[i];
    }
    sort(a, a+n); // Sắp xếp mảng trước khi tìm kiếm
    int k= ternarrysearch(l,r,key,a);
    cout << "Index of "<<key<<" is " << k << endl;
    return 0;
}
