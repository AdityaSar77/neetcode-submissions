#include <unordered_map>
class Solution {
public:
    bool isAnagram(string s, string t) {
        std::unordered_map<char, int> umap;
        
        for (char c : s) umap[c]++;

        for (char d : t) {
            umap[d]--;
            if (umap[d] < 0) return false;
        }
        
        for (auto it = umap.begin(); it != umap.end(); it++) {
            if (it->second != 0) return false;
        }
        return true;
    }
};
