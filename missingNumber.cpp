#include<iostream>
#include<string>
#include<vector>
using namespace std;

class Solution {
public:
	int missingNumber(vector<int>& nums) {
		int n = nums.size(); //0...n ������
		int exit = 0;
		int res = 0;

		//�ԱȲ���ȱʧ����
		for (int i = 0; i <= n ; i++)
		{
			for (int j = 0; j < n; j++)
			{
				if (nums[j] == i) 
				{
					exit = 1;
					break;
				}
			}
			if (!exit)
			{
				res = i;
				break;
			}
			exit = 0; //�ָ���ʼ״̬
		}
		return res;
	}
};

int main()
{
	vector<int> vec = { 9,6,4,2,3,5,7,0,1 };
	Solution s;
	int res = s.missingNumber(vec);
	cout << res << endl;

	return 0;

}