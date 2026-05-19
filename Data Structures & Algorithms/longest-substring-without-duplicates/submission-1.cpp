#include <unordered_map>
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        if (s.size() <= 1) return s.size();
        
        std::unordered_map <char, int> last_seen;
        int slow = 0;
        int max_length = 0;
        last_seen[s[slow]] = slow; 
        for (int fast = 1; fast < s.size(); fast++) {
            char c = s[fast];
            if (last_seen.find(c) != last_seen.end() && last_seen[c] >= slow) { 
                slow = last_seen[c] + 1;
            }
            max_length = (fast - slow + 1) >= max_length ? (fast - slow + 1) : max_length;
            last_seen[c] = fast;
        }
        return max_length;
    }
};
