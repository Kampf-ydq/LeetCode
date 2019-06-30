#include<iostream>
#include<string>
#include<vector>
using namespace std;


class Solution {
public:
	//【法1】暴力法(1336ms)
	//int findDuplicate(vector<int>& nums) {
	//	int count = 0;
	//	for (int i = 0; i < nums.size(); i++)
	//	{
	//		for (int j = 0; j < nums.size(); j++)
	//		{
	//			if (nums[j] == nums[i])
	//			{
	//				count++;
	//			}
	//			if (count > 1)  //判断内循环是否还有继续的必要
	//			{
	//				return nums[i];
	//			}
	//		}
	//		//一次统计完成，count清0
	//		count = 0;
	//	}
	//	return -1;
	//}

	//【法2】哈希表实现(12ms)
	int findDuplicate(vector<int>& nums) {
		int map[30000] = {0};
		for (int i = 0; i < nums.size(); i++)
		{
			if (map[nums[i]] == 1) //该单元是否已有元素
			{
				return nums[i];
			}
			else
			{
				map[nums[i]] = 1;
			}
		}
		return -1;
	}
};

int main()
{
	vector<int> vec = { 1,3,4,2,2 };
	Solution s;
	int res = s.findDuplicate(vec);
	cout << res << endl;

	return 0;

}