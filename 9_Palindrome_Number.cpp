/*
9. Palindrome Number

The question is self-explanatory we have to return true if the given no is palindrome if it is not then false
*/

/*
The code is way to easy to explain but basic instinct was to use 2 pointers but i forgot about the parameters 
i thought it would be string 
complexity (O(log x) time, O(log x) space)
*/

class Solution {
public:
    bool isPalindrome(int x) {
        string s = to_string(x);
        int low = 0, high = s.size() - 1;
        while(low <= high){
            if(s[low] != s[high])
                return false;
            low++;
            high--;
        }
        return true;
    }
};