# link : https://www.geeksforgeeks.org/problems/find-duplicates-in-an-array/1
# type : EASY
# concept : Array, Hashing
"""
notes :
v = [0]*n => creates a list with size n and init with 0
ans.append(i) => to add the element i to the ans list

"""


class Solution:
    def duplicates(self, arr, n):
        v = [0]*n
        ans = []
        for a in arr:
            v[a]+=1
        for i in range(0,n):
            if v[i] > 1:
                ans.append(i)
        if len(ans) == 0:
            ans.append(-1)
            return ans
        return ans
    	# code here
    	    


#{ 
 # Driver Code Starts
if(__name__=='__main__'):
    t = int(input())
    for i in range(t):
        n = int(input())
        arr = list(map(int, input().strip().split()))
        res = Solution().duplicates(arr, n)
        for i in res:
            print(i,end=" ")
        print()



# } Driver Code Ends
