/* Stone Removal Game (LeetCode 3360): Alice and Bob take turns removing stones from a pile of n stones, Alice first. Alice removes exactly 10 stones on her first turn, and each later turn removes 1 fewer stone than the previous turn. A player who cannot make a move loses. Return true if Alice wins, else false.

Constraint: 1 <= n <= 50

Link: https://leetcode.com/problems/stone-removal-game/ */

/*
Approach: Simulate the game. Alice removes 10, Bob 9, Alice 8, and so on.
If the pile has fewer stones than the required amount on Alice's turn,
she loses; the loop runs at most 10 times.
Time: O(1)   Space: O(1)
*/

class Solution {
public:
    bool canAliceWin(int n) {
        int sub = 10, cnt = 1;
    if(n < 10)
        return false;
    while(n >= 0 && sub != 0){
        if(cnt % 2 != 0){
            if(n < sub)
                return false;
        }
        n -= sub;
        sub -= 1;
        cnt++;
    }
    return true;
    }
};