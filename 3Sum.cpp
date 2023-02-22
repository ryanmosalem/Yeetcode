class Solution {
public:
    int findZero(vector<int>& nums){
        for(int i = 0; i < nums.size(); i++){
            if (nums[i] == 0)
                return i;
        }
        return -1;
    }
    bool matching(vector<vector<int>>& trips, vector<int>& temp){
        //helper method that checks if temp is a duplicate of any vectors in triplets
        // if not, temp is added to triplets set
        //passed vector by reference 
        for(int i = 0; i < trips.size(); i++){
            if (trips[i] == temp)
                return false;
        }
        trips.push_back(temp);
        return true;
    }


    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> triplets = {};
        sort(nums.begin(), nums.end());
        
        for(int i = 0; i < nums.size() - 2; i++){
            for(int j = i + 1; j < nums.size()- 1 ; j++){
                int value = 0 - nums[i] - nums[j];
                for(int k = j + 1; k < nums.size(); k++ ){
                    if (nums[k] == value){
                        vector<int> temp = {nums[i], nums[j], nums[k]};
                        sort(temp.begin(), temp.end());
                        matching(triplets, temp);
                        temp.clear();
                    }
                }  
            }
        }
        return triplets;
    }
};

//BAAADDD runtime bro. O(n^3). Need to use sorting to advantage
//if need positive value- go immediately to positive side. stop searching past positive if value > 