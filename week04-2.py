#week04-2.py 是今天的LeetCode 挑戰提 Easy 題(二合一)
#LeetCode 2529 Maxinum ount of Positive Integer and Negative Integer
#找出「有幾個正數」「有幾個負數」
class Solution:
    def maximumCount(self, nums: List[int]) -> int:
        pos=0
        neg=0 #迴圈前面,準備好,都放0
        for i in range(len(nums)):#迴圈裡,更新它
            if nums[i] > 0: pos += 1
            if nums[i] < 0: neg += 1
        #迴圈後面,把答案拿來用
        return max(pos, neg)

