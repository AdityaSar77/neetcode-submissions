#include <unordered_map>
class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        std::unordered_map<int, int> last_seen;

        for (int i = 0; i < nums.size(); i++) {
            int num = nums[i];
            if (last_seen.find(num) != last_seen.end()) {
                return true;
            }
            last_seen[num] = i;
        }
        return false;
    }
};