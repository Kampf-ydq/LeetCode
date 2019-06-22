#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
	int maxSubArray(vector<int>& nums) {
		int sum = 0;
		int res = nums[0];
		for (int i = 0; i < nums.size(); i++) {
			if (sum > 0) {
				sum += nums[i];
			}
			else {
				sum = nums[i];
			}
			res = (res > sum) ? res : sum;
		}
		return res;
	}
};

int main()
{
	int arr[] = {-2,1,-3,4,-1,2,1,-5,4};

	return 0;
}