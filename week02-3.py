#week02-3.py�gLeetCode
#LeetCode 1. Two Sum
#���@��Ʀrnums�̭��u����ӡv�ۥ[,�Otarget
#nums[i]+nums[j]==target ���i�Mj�ϱo�[�_�ӬOtarget
class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        box ={} #���@�ӽc�l,�̭���u�X�{�L���Ʀr�v
        #�ڭ̷Q�n��Xtarget�o�[�`

        for i, num in enumerate(nums):
            other = target - num #�t�~�@�ӻݭn���ơu�i�H��Xtaget�v��(target-num)
            if other in box : #�b�c�l��,���t�~�@�ӻݭn����
                return[ box[other],i] #��쵪��
            else: #�p�G�S���X�A���Ʀr��
             box[num] = i #�N��{�b���Ʀr num , ���box�̭�
