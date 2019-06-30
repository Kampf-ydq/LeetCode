//#include<iostream>
//#include<string>
//#include<vector>
//using namespace std;
//
//class Solution {
//public:
//	//【1】暴力法
//	//int singleNumber(vector<int>& nums) {
//	//	int count = 0;
//	//	int i, j;
//	//	for (i = 0; i < nums.size(); i++) {
//	//		for (j = 0; j < nums.size(); j++) {
//	//			if (nums[i] == nums[j]) {
//	//				count++;
//	//			}
//	//			if (count >= 2)
//	//			{
//	//				break;
//	//			}
//	//		}
//	//		if (count == 1) {
//	//			return nums[i];
//	//		}
//	//		count = 0; //清零
//	//	}
//	//	return 0;
//	//}
//	//【2】异或：a^a = 0; 0^b=b
//	int singleNumber(vector<int>& nums) {
//		int res = nums[0];
//		int i;
//		for (i = 1; i < nums.size(); i++) {
//			res = res^nums[i];
//		}
//		return res;
//	}
//};
//
//int main()
//{
//	vector<int> vec = { 1,3,1,-1,3 };
//	Solution s;
//	int res = s.singleNumber(vec);
//	cout << res << endl;
//
//	return 0;
//	
//}