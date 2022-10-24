#include <iostream>
using namespace std;
#include <array>

int  main(){
  int nums[] = {2,7,9,11};
  cout<< "size of nums: " << sizeof(nums) <<endl;
  cout<< "size of nums2:" <<nums.size()<<endl;
  int target = 9;
  int answer[2] = {0,0};
  for (int i = 0; i < sizeof(nums); i++){
    for(int j = i; j < sizeof(nums); j++){
        if (nums[i] + nums[j] == target){
            answer[0] = i;
            answer[1] = j; 
            cout<< "i:" << answer[0] <<endl; 
            cout<<"j:" << answer[1]<<endl;
        }
    }
  }  
}
