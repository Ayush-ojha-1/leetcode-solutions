/*
20. Valid Parentheses

Given a string of brackets, determine whether it is balanced.

Approach: push every opener onto a stack; for each closer, the stack top
must be the matching opener, otherwise the string is invalid. The string
is balanced only if the stack is empty at the end.

Time: O(n)
Space: O(n)
*/


class Solution {
public:
    bool isValid(string s) {
        stack<char> stk;
        if(stk.size() == 1)
            return false;
        for(int i = 0; i < s.size(); i++){
            if(s[i] == '(' || s[i] == '[' || s[i] == '{')
                stk.push(s[i]);
            else{
                if(stk.empty())
                    return false;
                char ch = stk.top();
                if((ch == '(' && s[i] == ')') ||
                    (ch == '[' && s[i] == ']') ||
                    (ch == '{' && s[i] == '}'))
                        stk.pop();
                else
                    return false;
                }
            }
        return stk.empty();
    }
};