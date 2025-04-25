#include <iostream>
#include <queue>
#include <vector>
using namespace std;

// Function to find the k largest numbers in a list
int kLargestNumbers(vector<int>& nums, int k){
    priority_queue<int, vector<int>, greater<int>> minHeap;

    // Insert the first k elements into the min heap
    for(int num : nums){
        minHeap.push(nums);
        if(minHeap.size() > k){
            minHeap.pop();
        }
    }
    return minHeap.top();
}
