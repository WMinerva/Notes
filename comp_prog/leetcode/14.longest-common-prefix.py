# @leet start
class Solution:
    def longestCommonPrefix(self, strs: List[str]) -> str:
        min_length = min(len(s) for s in strs)
        result = ""
        for i in range(min_length):
            char = strs[0][i]
            if all(s[i] == char for s in strs):
                result += char
            else:
                break
        return result


# @leet end
