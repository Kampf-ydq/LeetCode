#include<iostream>
#include<string>

using namespace std;

class Solution {
public:
	string countAndSay(int n) {
		string res = "1";
		string str;
		int count = 1;

		//�������е�n��
		for (int i = 0; i < n - 1; i++)
		{
			str = res;
			res = "";
			//����str����ʼ����
			for (int j = 0; j < str.length(); j++)
			{
				if ((j < str.length() - 1) && (str[j] == str[j+1]))
				{
					count++;
				}
				else
				{
					res = res + std::to_string(count) + str[j]; //ע��ƴ��˳��׷�ӣ�
					count = 1; //�ָ���ʼ
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