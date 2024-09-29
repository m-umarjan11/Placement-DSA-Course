#include <iostream>
#include <map>
#include <climits>
#include <unordered_map>
#include <vector>
using namespace std;
int mostfreq(vector<int> nums){
	unordered_map<int,int> m;
	int maxfreq= INT_MIN;
	int ans = 0;
	for(int i = 0;i<nums.size();i++){
		m[nums[i]]++;
		maxfreq = max(maxfreq,m[nums[i]]);
	}
	for(int i =0;i<nums.size();i++){
		if(maxfreq==m[nums[i]]){
			ans = maxfreq;
			break;
		}
	}
	return ans;
	
}
int main(){
	vector<int> nums = {2,3,4,5,3,5,3,2,6,7,8};
	cout<<mostfreq(nums);
	
}