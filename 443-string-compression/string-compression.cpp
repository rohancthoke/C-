class Solution {
public:
    int compress(vector<char>& chars) {
        int count = 1;
        int index = 0;
        for (int i = 1; i < chars.size(); i++) {
            if (chars[i] == chars[i - 1]) {
                count++;
            } else {
                chars[index++] = chars[i - 1];
                if (count > 1) {
                    string count_str = to_string(count);
                    for (char c : count_str) {
                        chars[index++] = c;
                    }
                }
                count = 1;
            }
        }
        chars[index++] = chars[chars.size() - 1];
        if (count > 1) {
            string count_str = to_string(count);
            for (char c : count_str) {
                chars[index++] = c;
            }
        }
        return index;
    }
};