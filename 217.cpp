#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution {
public:
    bool containsDuplicate(vector<int> nums) {
        int count =0;
        sort(nums.begin(),nums.end());
        int dupl=nums[0];
        for(int i:nums){
            if(dupl==i){
                count++;
            }
            else count--;
        }
        if(count==2){
            return true;
        }
        else{
            return false;
        }
    }
};
int main(){
    Solution s1;
    vector<int> nums={1,2,2,6,3};
    cout<<s1.containsDuplicate(nums);
}