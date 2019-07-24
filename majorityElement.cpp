#include<iostream>
#include<vector>
using namespace std;

/*
 * @Intro   分治法
 */
class Solution {
public:
	int majorityElement(vector<int>& nums) {
		return dividedAndConquer(nums, 0, nums.size() - 1);
	}

	int dividedAndConquer(vector<int>& nums, int left, int right) {
		int lcount, rcount;
		//结束条件
		if (left == right)
		{
			return nums[left];
		}
		int mid = (left + right) / 2;
		int l = dividedAndConquer(nums, left, mid);
		int r = dividedAndConquer(nums, mid + 1, right);

		if (l == r)
		{
			return l;
		}

		lcount = calShow(nums, l, left, right);
		rcount = calShow(nums, r, left, right);

		return (lcount > rcount) ? l : r;
		
	}

	//计算某数出现的次数
	int calShow(vector<int>& nums, int num, int l, int r)
	{
		int count = 0;
		for (int i = l; i <= r; i++)
		{
			if (nums[i] == num)
			{
				count++;
			}
		}
		return count;
	}
};

int main()
{
	vector<int> arr = { 3,2,1,1,5 };
	Solution s;
	cout << s.majorityElement(arr) << endl;
	return 0;
}