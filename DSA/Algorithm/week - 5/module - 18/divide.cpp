#include<bits/stdc++.h>
using namespace std;

void conquer(int arr[],int l,int mid,int r){
    int n = mid - l + 1;
    int a[n];
    int p = l;
    for(int i=0; i<n; i++){
        a[i] = arr[p++];
    } 
    int m = r - mid;
    int b[m];
    p = mid + 1;
    for(int i=0; i<m; i++){
        b[i] = arr[p++];
    }
    int i = 0, j = 0, cur = l;
    while(i < n && j < m){
        if(a[i] < b[j]){
            arr[cur++] = a[i++];
        }
        else{
            arr[cur++] = b[j++];
        }
    }
    while( i < n){
        arr[cur++] = a[i++];
    }
    while( j < m){
        arr[cur++] = b[j++];
    }
}

void divide(int arr[],int l, int r){
    if(l >= r) return;
    int mid = (l+r)/2;
    divide(arr,l,mid);
    divide(arr,mid+1,r);
    conquer(arr,l,mid,r);
}

int main(){
    int n; cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    divide(arr,0,n-1); 
    for(int i=0; i<n; i++){
        cout << arr[i] <<" ";
    }
    return 0;
}