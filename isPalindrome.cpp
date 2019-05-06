#include<iostream>
using namespace std;

class Solution {
public:
	bool isPalindrome(int x) {
		int tmp = x;
		if (x < 0)
		{
			return false;
		}

		int y;
		int res = 0;
		while (x != 0)
		{
			y = x % 10;
			x /= 10;

			//溢出判断，若溢出，则必不为回文
			if (res > (INT_MAX - y) / 10)
			{
				return false;
			}
			res = res * 10 + y;
		}

		if (res == tmp)
		{
			return true;
		}

		return false;
	}
};