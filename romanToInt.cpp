#include<iostream>
#include<string>

using namespace std;

/* 字符          数值
	I             1
	V             5
	X             10
	L             50
	C             100
	D             500
	M             1000

	特例:
	I 可以放在 V (5) 和 X (10) 的左边，来表示 4 和 9。
	X 可以放在 L (50) 和 C (100) 的左边，来表示 40 和 90。 
	C 可以放在 D (500) 和 M (1000) 的左边，来表示 400 和 900。

*/

class Solution {
public:
	int romanToInt(string s) {
		int res = 0;
		if (s.length() == 0)
		{
			return -1;
		}
		for (int i = 0; i < s.length();)
		{
			switch (s[i])
			{
			case 'I': //*
				//是特例之一
				if (s[i + 1] == 'V')
				{
					res += 4;
					i = i + 2;
				}
				else
				{
					if (s[i + 1] == 'X')
					{
						res += 9;
						i = i + 2;
					}
					else
					{
						//不是特例
						res += 1;
						i++;
					}
				}
				
				break;
			case 'V':
				res += 5;
				i++;
				break;
			case 'X': //*
				if (s[i + 1] == 'L')
				{
					res += 40;
					i = i + 2;
				}
				else
				{
					if (s[i + 1] == 'C')
					{
						res += 90;
						i = i + 2;
					}
					else
					{
						//不是特例
						res += 10;
						i++;
					}
				}
				break;
			case 'L':
				res += 50;
				i++;
				break;
			case 'C': //*
				if (s[i + 1] == 'D')
				{
					res += 400;
					i = i + 2;
				}
				else
				{
					if (s[i + 1] == 'M')
					{
						res += 900;
						i = i + 2;
					}
					else
					{
						//不是特例
						res += 100;
						i++;
					}
				}
				break;
			case 'D':
				res += 500;
				i++;
				break;
			case 'M':
				res += 1000;
				i++;
				break;
			default:
				break;
			}
		}
		
		return res;
	}
};

int main()
{
	Solution s;
	cout << s.romanToInt("III") << endl;
	return 0;
}