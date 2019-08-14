#include<iostream>
#include<vector>

using namespace std;


class Solution {
public:
	int removeElement(vector<int>& nums, int val) {
		int count = 0;
		for (int i = 0; i < nums.size(); i++)
		{
			if (val != nums[i])
			{
				nums[count] = nums[i];
				count++;
			}
		}

		return count;
	}
};

int main()
{
	vector<int> nums = { 0, 1, 2, 2, 3, 0, 4, 2 };
	Solution s;
	cout << s.removeElement(nums, 2) << endl;

	return 0;
}