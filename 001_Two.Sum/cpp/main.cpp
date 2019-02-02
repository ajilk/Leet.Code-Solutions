#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
	unordered_map<int, int> n;
	for(int i=0; i<nums.size(); i++){
		int complement = target-nums[i];
		if(n.end() != n.find(complement))
			return vector<int>{n[complement], i};
		n.insert({nums[i], i});
	}
	return vector<int>{0,0};
}

int main(int argc, char** argv){
	vector<int> nums = {1,2,3,4,5};
	int target = 3;
	vector<int> indicies = twoSum(nums, target); 
	cout << indicies[0] << " " << indicies[1] << endl;
	return 0;
}