#include<iostream>
#include<vector>
using namespace std;


class Solution
{
public:
	int maxArea(vector<int>& height) {
		int max = 0, l = 0, r = height.size() - 1;
		int minh, res;
		while (l < r) {
			minh = height[l] <= height[r] ? height[l] : height[r];
			res = minh * (r - l);
			max = res >= max ? res : max;
			//ÒÆ¶¯½Ï¶Ì±ß
			if (height[l] < height[r]) {
				l++;
			}
			else {
				r--;
			}
		}
		return max;

	}

};
