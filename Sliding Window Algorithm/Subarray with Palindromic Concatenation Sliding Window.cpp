#include <iostream>
#include <vector>
#include <cmath>
using namespace std;


bool ispalindrom(int num) {
    int temp = num, reversed = 0;
    
    while (temp > 0) {
        reversed = reversed * 10 + temp % 10;
        temp /= 10;
    }
    
    return reversed == num;
}


int findpalindromicsubarray(const vector<int>& arr, int k) {
    if (arr.size() < k) return -1;  
    int sum = 0;
    
    
    for (int i = 0; i < k; i++) {
        sum = sum * 10 + arr[i];
    }
    
    
    if (ispalindrom(sum)) {
        return 0;
    }
    
    
    for (int j = k; j < arr.size(); j++) {
       
        sum = (sum % (int)pow(10, k - 1)) * 10 + arr[j];
        
       
        if (ispalindrom(sum)) {
            return j - k + 1;
        }
    }
    
    return -1; 
}

int main() {
    vector<int> arr = {2, 3, 5, 1, 1, 5}; 
    int k = 4;  
    int x = findpalindromicsubarray(arr, k); 
    
    if (x == -1) {
        cout << "The palindrome doesn't exist" << endl;
    } else {
        cout << "Palindrome exists at starting index: " << x << endl;
    }
    
    return 0;
}
