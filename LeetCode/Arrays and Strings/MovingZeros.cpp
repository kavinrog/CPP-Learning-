#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    Solution solution;
    vector<int> nums = {0, 1, 0, 3, 12};
    
    cout << "Before moving zeros: ";
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;

    solution.moveZeroes(nums);

    cout << "After moving zeros: ";
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
class Solution {
    public:
        void moveZeroes(vector<int>& nums) {
            int l = 0 ;
            for(int r = 0; r<nums.size(); r++){
                if(nums[r]!= 0){
                    swap(nums[l], nums[r]);
                    l++;
                }
                
            }
            
        }
    };
    