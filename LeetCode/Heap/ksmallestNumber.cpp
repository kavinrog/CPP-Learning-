#include <iostream>
#include <queue>
#include <vector>
using namespace std;

auto kSmallestNumbers(vector<int>& nums, int k , bool required_list = true){
    priority_queue<int> maxHeap;
    
    vector<int> result;

    for(int num : nums){
        maxHeap.push(num);
        if(maxHeap.size() > k){
            maxHeap.pop();
        }
    }
    if (!required_list){
        return maxHeap.top();
    }
    else{
        while(!maxHeap.empty()){
            result.push_back(maxHeap.top());
            maxHeap.pop();
        }
        return result;
    }
}

int main() {
    vector<int> nums = {3, 2, 1, 5, 6, 4};
    int k = 2;
    cout << "The " << k << "th smallest number is: " << kSmallestNumbers(nums, k , false) << endl;
    cout << "The " << k << " smallest numbers are: ";
    vector<int> result = kSmallestNumbers(nums, k);
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}