from typing import List

class Solution:
    def nextPermutation(self, nums: List[int]) -> None:
        """
        Do not return anything, modify nums in-place instead.
        """
        if len(nums) <= 1:
            return
        sanlie = dict()
        for i in range(10):
            sanlie[i] = []
        for i in range(len(nums)) :
            sanlie[nums[i]].append(i)

        i = len(nums) -2
        for i in range(len(nums)-2 , -1, -1) :
            for j in range(i, len(nums)) :


