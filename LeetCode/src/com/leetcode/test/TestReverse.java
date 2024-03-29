package com.leetcode.test;

import static org.junit.Assert.assertEquals;

import org.junit.Before;
import org.junit.Test;

import com.leetcode.methold.Reverse;

public class TestReverse {

	int case1,case2,case3;
	Reverse r;
	
	@Before
	public void init(){
		case1 = 10;  //3
		case2 = 120;  // 21
		case3 = -54; //-45
		r = new Reverse();
	}
	
	@Test
	public void testReverse(){
		int res;
		res = r.reverse(case1);
		assertEquals(res, 1);
		
		res = r.reverse(case2);
		assertEquals(res, 21);
		
		res = r.reverse(case3);
		assertEquals(res, -45);
	}
}
