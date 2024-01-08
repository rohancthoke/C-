class Solution {
public:
    bool isValid(string s) {
        stack<char> o;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '(' || s[i] == '[' || s[i] == '{')
                o.push(s[i]);
            else if (!o.empty() &&
                       ((s[i] == ')' && o.top() == '(') ||
                        (s[i] == ']' && o.top() == '[') ||
                        (s[i] == '}' && o.top() == '{')))
                o.pop();
            else
                return false;
        }
        return o.empty();
    }
};
