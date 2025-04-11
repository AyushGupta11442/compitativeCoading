/*
Input: nums = [2,7,11,15], target = 9
Output: [0,1]
Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].
*/


#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;




int main (){
    vector<int> arr = {3,2,4};

    vector<int> ans = twoSum(arr , 6);

    cout << ans[0]  <<  " " << ans[1] ; 
}