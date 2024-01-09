class Solution {
public:
    bool isPalindrome(string s) {
    int n = s.size();
    string result;  // To store the cleaned string

    for (int i = 0; i < n; i++) {
        if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= '0' && s[i] <= '9')) {
            // Keep lowercase alphabets and digits as they are
            result += s[i];
        } else if (s[i] >= 'A' && s[i] <= 'Z') {
            // Convert uppercase letters to lowercase
            result += tolower(s[i]);
        }
        // Ignore other characters (symbols and whitespaces)
    }
     int left = 0;
    int right = result.size() - 1;

    while (left <= right) {
        if (result[left] != result[right]) {
            return false;
            break;
        }
        left++;
        right--;
    }
    return true;

    
    }
};