# @leet start
class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        #     num_to_index = {}
        #     for index, num in enumerate(nums):
        #         complement = target - num
        #         if complement in num_to_index:
        #             return [num_to_index[complement], index]
        #         num_to_index[num] = index

        for i in range(len(nums) - 1):
            for j in range(i + 1, len(nums)):
                if nums[i] + nums[j] == target:
                    return [i, j]


# @leet end
