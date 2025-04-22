#include <string>
#include <unordered_map>

class Solution {
    public:
        int romanToInt(string s) {
            unordered_map<char, int> m;
            int ans = 0;
            m['I'] = 1;
            m['V'] = 5;
            m['X'] = 10;
            m['L'] = 50;
            m['C'] = 100;
            m['D'] = 500;
            m['M'] = 1000;

            for(int i = 0; i < s.size(); i++){
                if(m[s[i]] < m[s[i+1]]){
                    ans -= m[s[i]];
                }
                else{
                    ans += m[s[i]];
                }
            }
        return ans;
        
            
        }
    };

#include <iostream>
using namespace std;

int main() {
    Solution sol;

    cout << sol.romanToInt("III") << endl;    // 3
    cout << sol.romanToInt("IV") << endl;     // 4
    cout << sol.romanToInt("IX") << endl;     // 9
    cout << sol.romanToInt("LVIII") << endl;  // 58
    cout << sol.romanToInt("MCMXCIV") << endl; // 1994

    return 0;
}