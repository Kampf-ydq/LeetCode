#include<iostream>
#include<vector>
using namespace std;

int main()
{
	int small, middle, big;
	vector<int> nums;
	int n,t;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> t;
		nums.push_back(t);
	}

	small = (nums[0] > nums[n - 1]) ? nums[n - 1] : nums[0];
	big = (nums[0] > nums[n - 1]) ? nums[0] : nums[n - 1];

	if (n % 2 == 0)
	{
		int x1 = nums[n / 2 - 1], x2 = nums[n / 2];
		if ((x1 + x2) % 2 != 0) //��ż��ͬ
		{
			double mid = (x1 + x2) / 2.0;
			cout << big << " " << mid << " " << small << endl;
		}
		else
		{
			middle = (x1 + x2) / 2;
			cout << big << " " << middle << " " << small << endl;
		}
		
	}
	else
	{
		middle = nums[n / 2];
		cout << big << " " << middle << " " << small << endl;
	}

	return 0;
}

//���ܽ᡿
/*
	   ���CCF���⣬��������һ��Ҫ�ϸ�����Ŀ�������ġ��籾���Ҫ�������int�ͣ�����

	�з��������С��������small��middle��big�ض�Ϊint���з���ʱ��middleΪdouble��

														2019/07/01
														   ydq
*/