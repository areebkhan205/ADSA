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