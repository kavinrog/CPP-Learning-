#include <iostream>
#include <unordered_map>
#include <string>
#include <vector>
#include <cassert>
using namespace std;

class Solution {
public:
    int lengthOfLongestSubstringKDistinct(string s, int k) {
        if(k==0) return 0;
        int l = 0; 
        int resmax = 0;
        unordered_map<char, int> freq;
        for(int r= 0; r<s.size(); ++r){
            freq[s[r]]++;
            while(freq.size()>k){
                freq[s[l]]--;
                if(freq[s[l]] ==0){
                    freq.erase(s[l]);
                }
                l++;
            }
            resmax = max(resmax, r-l+1);
        }
        return resmax;
    
        }
    };

    
// 🔍 Test function
void runTests() {
    Solution sol;

    struct TestCase {
        string input;
        int k;
        int expected;
    };

    vector<TestCase> tests = {
        {"eceba", 2, 3},         // "ece"
        {"aa", 1, 2},            // "aa"
        {"aabbcc", 2, 4},        // "aabb", "bbcc"
        {"a", 0, 0},             // k = 0 → 0
        {"", 2, 0},              // empty string
        {"abcadcacacaca", 3, 10} // "cadcacacaca"
    };

    for (int i = 0; i < tests.size(); ++i) {
        int result = sol.lengthOfLongestSubstringKDistinct(tests[i].input, tests[i].k);
        cout << "Test " << i + 1 << ": ";
        if (result == tests[i].expected) {
            cout << "✅ Passed\n";
        } else {
            cout << "❌ Failed (Got " << result << ", Expected " << tests[i].expected << ")\n";
        }
    }
}

int main() {
    runTests();
    return 0;
}