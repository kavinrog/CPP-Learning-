#include <vector>
#include <string>
#include <unordered_map>
using namespace std;

class Solution {
public:
    vector<string> findStrobogrammatic(int n) {
        vector<string> result;
        unordered_map<char, char> pairs = {
            {'0','0'},
            {'1','1'},
            {'6','9'},
            {'8','8'},
            {'9','6'}
        };

        string current(n, ' ');
        backtrack(current, 0, n - 1, pairs, result);
        return result;
    }

private:
    void backtrack(string& current, int left, int right,
                   unordered_map<char, char>& pairs,
                   vector<string>& result) {
        if (left > right) {
            result.push_back(current);
            return;
        }

        for (auto& pair : pairs) {
            char a = pair.first, b = pair.second;

            // Skip leading zero for outermost digits (unless n == 1)
            if (left == 0 && a == '0' && current.size() != 1) continue;

            // For middle digit in odd-length number, both sides must match
            if (left == right && a != b) continue;

            current[left] = a;
            current[right] = b;

            backtrack(current, left + 1, right - 1, pairs, result);
        }
    }
}; 