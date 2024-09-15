#include <iostream>
using namespace std;

int summaxsubarray(int arr[],int n,int k,int x){
	int ans  = 0;
	int sum = 0;
	
	for(int i =0;i<k;i++){
		sum+=arr[i];
	}
	if(sum<x){
		ans= sum;
	}
	
	for(int i=k;i<n;i++){
		sum -= arr[i-k];
		sum+=arr[i];
	}
	if(sum<x){
		ans = max(sum,ans);
	}
	
	cout<<sum;
}

int main(){
	int arr[] = {7,5,4,6,8,9};
	summaxsubarray(arr,5,3,20);
}