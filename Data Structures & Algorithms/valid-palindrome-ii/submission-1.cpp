class Solution {
public:
    bool validPalindrome(string s) {
        int left = 0;
        int right = s.size() - 1;

        while (left < right) {

            if (s[left] != s[right]) {

                // Option 1: skip left
                int l = left + 1;
                int r = right;

                while (l < r && s[l] == s[r]) {
                    l++;
                    r--;
                }

                bool skipLeft = (l >= r);

                // Option 2: skip right
                l = left;
                r = right - 1;

                while (l < r && s[l] == s[r]) {
                    l++;
                    r--;
                }

                bool skipRight = (l >= r);

                return skipLeft || skipRight;
            }

            left++;
            right--;
        }

        return true;
    }
};