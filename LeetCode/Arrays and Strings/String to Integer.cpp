#include <climits>
#include <string>
class Solution {
    public:
        int myAtoi(string s) {
            int n = s.length();
            long result = 0 ;
            int sign = 1;
            int i = 0 ; 

            // Ignore teh white spaces in the input 
            while(i < n && s[i] == ' '){
                i++;
            }

            // Check for the sign values
            if(i < n && (s[i] == '+' || s[i] == '-')){
                sign = s[i] == '-' ? -1 : 1;
                i++;
            }

            //Main part 
            while(i < n && isdigit(s[i])){
                result = result * 10 + (s[i] - '0');
                if (sign * result >= INT_MAX) return INT_MAX;
                if (sign * result <= INT_MIN) return INT_MIN;
                i++;
            }
            return static_cast<int> (result * sign);
            
        }
    };