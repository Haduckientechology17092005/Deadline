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
    int r=n;
    int a[n];
    cout<<"\nNhap mang\n";
    for(int i=0; i<n;i++){
        cout<<"a["<<i<<"]= ";
        cin>>a[i];
    }
    sort(a, a+n); // S?p x?p m?ng tru?c khi tìm ki?m
    int k= ternarrysearch(l,r,key,a);
    cout<<"\nMang sau khi sap xep: \n";
    for(int i=0;i<n;i++){
    	cout<<"a["<<i<<"]= "<<a[i]<<"\n";
    }
    if(k==-1){
    	cout<<"Khong ton tai key";
    } else {
    	cout << "\nIndex of "<<key<<" is " <<k<<"\n";
    }
    return 0;
}

