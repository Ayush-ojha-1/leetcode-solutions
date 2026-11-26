/*
We need to find such 2 index that when we add the elements of that index there sum is exactly equal to the given target

contstraints
Constraints:

2 <= nums.length <= 104
-109 <= nums[i] <= 109
-109 <= target <= 109
Only one valid answer exists.

Link : https://leetcode.com/problems/two-sum/description/
*/

/*
There are 2 approaches to solve this question in less Time complexity than 0(N^2)
1) sorting the vector we have to use vector pair here because we need to keep the track of original 
index and then we will use 2 pointers low at ind = 0 and high at size() - 1 and then we keep going until low <= high and if we find to such no that = to the target then we return there index or else we return {-1, -1}
Time complexity is O(n log n) and space complexity is O(n)

2) is using unorderd map here we keep track of the need that is target - nums[i] and if it is present in the map then we return the index of that and i if it is not present then we return {-1, -1}

Time complexity is O(n) and space complexity is 0(n)
*/
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mp;
        for(int i = 0; i < nums.size(); i++){
            int need = target - nums[i];
            if(mp.count(need))
                return {mp[need], i};
            mp[nums[i]] = i;
        }
        return {};
    }
};