#include <iostream>
using namespace std;
class heap{
	public:
	int arr[100];
	int size;
	heap(){
		size = 0;
		arr[0] = -1;
	}
	
	void heapify(int arr[],int n,int i){
		int largest = i;
		int left = 2*i;
		int right  = 2*i + 1;
		if(left<=n && arr[largest]<arr[left]){
			largest= left;
			
		}
		if(right<=n && arr[largest]<arr[right]){
			largest = right;
		}
		if(largest!=i){
			swap(arr[largest],arr[i]);
			heapify(arr,n,largest);
		}
	}
	
	void heapsort(int arr[],int n){
	for (int i = n; i > 1; i--) {
            
            swap(arr[1], arr[i]);

           
            heapify(arr, i - 1, 1);
        }
    }
	
	
};
int main(){
		heap h;
		int arr[6] = {-1, 54, 53, 55, 52, 50}; 
	int n = 5;
	

	for (int i = n / 2; i > 0; i--) {
		h.heapify(arr, n, i);
		
	}
	cout<<endl;
	cout<<"the array after heapify is: ";
	for(int i = 1;i<=n;i++){
		cout<<arr[i]<<" ";
		
	}
	cout<<endl;
	h.heapsort(arr,n);
	cout<<"the array after heapSort is: ";
	for(int i = 1;i<=n;i++){
		cout<<arr[i]<<" ";
	}
	
}