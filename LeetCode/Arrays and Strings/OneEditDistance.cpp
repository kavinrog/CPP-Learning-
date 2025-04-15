#include <iostream>
#include <string>
using namespace std;
class Solution {
    public:
        bool isOneEditDistance(string s, string t) {
            int m = s.size();
            int n = t.size();
            if(m>n) return isOneEditDistance(t, s);
            if(n-m >1) return false;
            for(int i = 0; i<m; ++i){
                if(s[i]!=t[i]){
                    if(m==n){
                        s.substr(i+1) == t.substr(i+1);
                    }
                    else{
                        s.substr(i) == t.substr(i+1);
                    }
                }
            }
            return m+1 == n;
        }
    };
    
int main() {
    Solution solution;
    string s = "abc";
    string t = "ab";
    if (solution.isOneEditDistance(s, t)) {
        cout << "The strings are one edit distance apart." << endl;
    } else {
        cout << "The strings are not one edit distance apart." << endl;
    }
    return 0;
}
