class Solution:
    def threeSum(self, nums: List[int]) -> List[List[int]]:
        LenNum = len(nums)
        answer = []
        if LenNum < 3: return answer

        ans = set()

        nums.sort()  # n ~ nlogn
        #bigO(n)
        for i, num in enumerate(nums[:-2]):
            if i > 0 and nums[i - 1] == num:
                continue
            d = {}
            for x in nums[i + 1:]:
                if x not in d:
                    d[-x - num] = 1
                else:
                    ans.add((num, -x - num, x))

        return list(ans)

# Big(N^3)
#         setList = []
#         i,j,k =0,0,0

#         for i in range(LenNum):
#             for j in range(LenNum):
#                 for k in range(LenNum):
#                     if i==j or j==k or k==i:
#                         continue


#                     if nums[i]+nums[j]+nums[k] == 0:
#                         tmp_set = {nums[i],nums[j],nums[k]}
#                         if tmp_set not in setList:
#                             tup = (nums[i],nums[j],nums[k])

#                             answer.append(tup)
#                             setList.append(tmp_set)

#         return answer