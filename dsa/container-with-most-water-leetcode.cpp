// link : https://leetcode.com/problems/container-with-most-water/
// type : MEDIUM
// concept: Array,Two Pointers
/*
	notes:
		min(a,b) => givies minimum
		max(a,b) => gives maximum
		
*/



class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0, right = height.size() - 1, max_area = 0;

        while (left < right) {
            int area = (right - left) * min(height[left], height[right]);
            max_area = max(max_area, area);
            if (height[left] > height[right]) {
                right -= 1;
            } else {
                left += 1;
            }
        }
        return max_area;
    }
};
