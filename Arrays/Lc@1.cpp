// class Solution {
// public:
//     vector<int> twoSum(vector<int>& nums, int target) {
//         for(int i=0;i<nums.size();i++){
//             for(int j=i+1;j<nums.size();j++){
//                 if((nums[i]+nums[j])==target){
//                     return {i,j};
//                 }
//             }
//         }
//         return {-1,-1};
//     }
// };

// Better 


// class Solution {
// public:
//     vector<int> twoSum(vector<int>& nums, int target) {
//         map<int,int> mpp;
//         for(int i=0;i<nums.size();i++){
//             int ma=target-nums[i];
//             if(mpp.find(ma)!=mpp.end()){
//                 //mpp[ma]{index of the number}
//                 return {mpp[ma],i};
//             }
//             mpp[nums[i]]=i;
//         }
//         return {-1,-1};
//     }
// };