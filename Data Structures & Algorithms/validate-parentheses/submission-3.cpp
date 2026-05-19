class Solution {
public:
    bool isValid(string s) {
        if (s.size() % 2 != 0) return false;

        vector<char> brack; //stack for brackets

        for (char c : s) {
            switch (c) {
                case('('):
                case('{'):
                case('['):
                brack.push_back(c);
                break;

                case(')'):
                if (brack.empty() || (brack.back() != '(')) return false;
                brack.pop_back();
                break;
                case('}'):
                if ((brack.empty() || brack.back() != '{')) return false;
                brack.pop_back();
                break;
                case(']'):
                if (brack.empty() || (brack.back() != '[')) return false;
                brack.pop_back();
                break;
            }
        }
        return (brack.empty());
    }
};
