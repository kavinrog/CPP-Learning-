#include <unordered_set>
#include <string>
#include <algorithm> 
class Solution {
    public:
        int lengthOfLongestSubstring(string s) {
            int l = 0; 
            int n = s.length();
            int res = 0;
            unordered_set<char> sets;

            for(int r = 0; r < n; r++){
                while(sets.find(s[r]) != sets.end()){
                    sets.erase(s[l]);
                    l++;
                }
                sets.insert(s[r]);
                res = max(res, r - l +1);
            }
            return res;
            
        }
};