#include<iostream>
using namespace std;
void print(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void sort01(int arr[],int n){
int left=0,right=n-1;
while(left<right){
    while(arr[left]==0&&left<right){
        left++;
    }
    while(arr[right]==1&&left<right){
        right--;
    }
    // while(arr[left]==1&&arr[right]==0){
    swap(arr[left],arr[right]);
    left++;
    right--;

}
}
int main(){
    int arr[6]={0,1,1,0,1,0};
    sort01(arr,6);
    print(arr,6);
}