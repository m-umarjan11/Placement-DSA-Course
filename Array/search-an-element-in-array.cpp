#include <iostream>
#include <vector>
using namespace std;
int search(int array[],int n,int key){
	for(int i = 0;i<n;i++){
		if(array[i]==key){
		
		return i;
	}
	}
	return -1;
}
int main(){
	int n;
	cin>>n;
	int array[n];
	for(int i = 0;i<n;i++){
		cin>>array[i];
		
	}
	cout<<"enter the key u want to search"<<endl;
	int key;
	cin>>key;
	cout<<search(array,n,key)<<endl;
}