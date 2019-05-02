package com.leetcode.methold;

public class Reverse {

	public int reverse(int x) {
		/*
		 * x分3类：1.正常    2.负数    3.溢出
		 */
		int tmp,n;
		int res = 0;
		tmp = Math.abs(x);
		
		while(tmp != 0){ //注意退出条件
			n = tmp % 10; //余数
			tmp /= 10;
			
			//反转后是否溢出
			if (res > (Integer.MAX_VALUE - n) / 10) {
				return 0;
			}
			
			res = res * 10 + n;
			/*
			 * res*10+n > Integer.MAX_VALUE
			 * ==>> res > (Integer.MAX_VALUE - n)/10
			 */
		}
		
		if (x < 0) {
			return res*(-1);
		}
		return res;
	}

}
