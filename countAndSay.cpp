#include<iostream>
#include<string>

using namespace std;

class Solution {
public:
	string countAndSay(int n) {
		string res = "1";
		string str;
		int count = 1;

		//报数序列第n项
		for (int i = 0; i < n - 1; i++)
		{
			str = res;
			res = "";
			//遍历str，开始报数
			for (int j = 0; j < str.length(); j++)
			{
				if ((j < str.length() - 1) && (str[j] == str[j+1]))
				{
					count++;
				}
				else
				{
					res = res + std::to_string(count) + str[j]; //注意拼接顺序（追加）
					count = 1; //恢复初始
				}
			}
		}
		return res;
	}
};

int main()
{
	Solution s;
	cout << s.countAndSay(5) << endl;
	return 0;
}