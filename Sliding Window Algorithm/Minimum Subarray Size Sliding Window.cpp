#include <iostream>
using namespace std;

int minsubarraysize(int arr[], int n, int x) {
    int sum = 0;
    int minlength = n + 1;
    int start = 0;
    int end = 0;

    while (end < n) {
       
        sum += arr[end++];

        while (sum >= x) {
         
            if (end - start < minlength) {
                minlength = end - start;
            }
            
            sum -= arr[start++];
        }
    }

   
    return (minlength == n + 1 ? 0 : minlength);
}

int main() {
    int arr[] = {2, 3, 4, 5, 6, 7};
    int x = 9;
    int n = sizeof(arr) / sizeof(arr[0]);
   
    cout << "The minimum subarray size is: " << minsubarraysize(arr, n, x) << endl;

    return 0;
}
