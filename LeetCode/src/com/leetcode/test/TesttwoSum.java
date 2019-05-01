package com.leetcode.test;

import static org.junit.Assert.assertArrayEquals;

import org.junit.Before;
import org.junit.Test;

import com.leetcode.methold.Solution;

public class TesttwoSum {

	int[] nums;
	int target;
	Solution s;
	
	@Before
	public void init(){
		nums = new int[]{2,7,11,15};
		target = 26;
		s = new Solution();
	}
	@Test
	public void testtwoSum(){
		int[] Ares = {2,3};
		int[] Mres = s.twoSum(nums, target);
		assertArrayEquals(Mres, Ares);
	}
	
	@Test
	public void testHash(){
		int[] Ares = {2,3};
		int[] Mres = s.twoSumHash(nums, target);
		assertArrayEquals(Mres, Ares);
	}
}
