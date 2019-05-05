package com.leetcode.methold;

public class Reverse {

	public int reverse(int x) {
		/*
		 * x��3�ࣺ1.����    2.����    3.���
		 */
		int tmp,n;
		int res = 0;
		tmp = Math.abs(x);
		
		while(tmp != 0){ //ע���˳�����
			n = tmp % 10; //����
			tmp /= 10;
			
			//��ת���Ƿ����
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