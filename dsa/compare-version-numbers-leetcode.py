# link : https://leetcode.com/problems/compare-version-numbers/
# type : MEDIUM
# concept : String,Two Pointers
"""
	notes:
		lstrip("0") => strips all zeros from the left
"""


class Solution:
    def compareVersion(self, version1: str, version2: str) -> int:
        v1 = version1.split(".")
        v2 = version2.split(".")
        s1 = len(v1)
        s2 = len(v2)
        i=0
        sizeCompare = s1-s2
        while sizeCompare > 0:
            v2.append("0")
            sizeCompare -=1
        while sizeCompare < 0:
            v1.append("0")
            sizeCompare +=1
        newSize = len(v1)
        while(i<newSize):
            compare = int(v1[i])-int(v2[i])
            if compare == 0:
                i+=1
            elif compare>0:
                return 1
            else :
                return -1
        return 0
