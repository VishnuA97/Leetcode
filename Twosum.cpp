#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

vector<int> twoSum(vector<int>& nums, int target){
        unordered_map<int,int> map;
        vector<int> result;
        
        for( int i = 0; i < nums.size(); ++i){
            int num = target - nums[i];
            if (map.find(num) != map.end()){
                result.push_back(map[num]);
                result.push_back(i);
                return result;
            }
            map[nums[i]] = i;            

        }
        return result;

    }


int main(){

    int nums , target;

    return 0;
}
