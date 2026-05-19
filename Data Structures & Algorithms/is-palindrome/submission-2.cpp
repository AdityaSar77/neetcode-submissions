class Solution {
public:
    bool isPalindrome(string s) {
        string t;
        for (char c : s) {
            if (((c >= 'a') && (c <= 'z')) || ((c >= '0') && (c <= '9'))) t += c;
            else if (c >= 'A' && c <= 'Z') t += c + 32;
        }

        int left = 0;
        int right = t.size() - 1;

        while (right > left) {
            if (t[right] != t[left]) return false;
            right--;
            left++;            
        }
        return true;
    }
};
