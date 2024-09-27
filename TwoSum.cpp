#include <iostream>
#include <vector>
using namespace std;

// Problem: Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for(int i = 0; i < nums.size(); i++){
            for(int j = 1; j < nums.size(); j++){
                if(nums[i] + nums[j] == target){
                    return {i,j};
                }
            }
        }
        return {};
    }
};