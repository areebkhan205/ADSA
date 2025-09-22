// class Solution {
// public:
//     int lengthOfLongestSubstring(string s) {
// int maxlen=0;
// int len=0;
// for(int i=0;i<s.size();i++){
//    int  Hash[255]={0};
//    for(int j=i;j<s.size();j++){
//     if(Hash[s[j]]==1)break;
//     len=j-i+1;
//     maxlen=max(len,maxlen);
//     Hash[s[j]]=1;
//    }
// }
// return maxlen;
//     }
// };





// class Solution {
// public:
//     int lengthOfLongestSubstring(string s) {
//         if (s.empty()) return 0;
//         vector<int> last(256, -1);
// int maxlen=0;
// int len=0;
// int r=0;
// int l=0;
//   while(r<s.size()){
//     if(last[s[r]]!=-1){
//         if(last[s[r]]>=l){
//            l= last[s[r]]+1;
//         }
//     }
//     len=r-l+1;
//     maxlen=max(len,maxlen);
//     last[s[r]]=r;
//     r++;
//   }
// return maxlen;
//     }
// };