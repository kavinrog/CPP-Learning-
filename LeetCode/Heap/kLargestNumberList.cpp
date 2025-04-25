#include <iostream>
#include <queue>
#include <vector>
using namespace std;

// Function to find the k largest numbers in a list
int kLargestNumbers(vector<int>& nums, int k){
    priority_queue<int, vector<int>, greater<int>> minHeap;

    // Insert the first k elements into the min heap
    for(int num : nums){
        minHeap.push(num);
        if(minHeap.size() > k){
            minHeap.pop();
        }
    }
    return minHeap.top();
}
int main() {
    vector<int> nums = {3, 2, 1, 5, 6, 4};
    int k = 2;
    cout << "The " << k << "th largest number is: " << kLargestNumbers(nums, k) << endl;
    return 0;
}