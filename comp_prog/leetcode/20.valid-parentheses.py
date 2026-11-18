# @leet start
class Solution:
    def isValid(self, s: str) -> bool:
        # dic = {"(": 1, ")": -1, "{": 2, "}": -2, "[": 3, "]": -3}
        # result = 0
        # for char in s:
        #     result += dic[char]
        #
        # return False if result != 0 else True
        stack = []
        dic = {")": "(", "}": "{", "]": "["}
        for char in s:
            if char in dic.values():
                stack.append(char)
            elif char in dic.keys():
                if stack == [] or dic[char] != stack.pop():
                    return False
            else:
                return False

        return stack == []


# @leet end
