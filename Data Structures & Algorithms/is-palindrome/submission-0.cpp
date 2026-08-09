class Solution {
public:
    bool isPalindrome(string s) {
        string r="";
        for(auto &ch:s){
            if(isalnum(ch)){
                r+=tolower(ch);
            }
        }
        int start=0;
        int end=r.size()-1;
        while(start<=end){
         if(r[start]!=r[end]){
             return false;
         }
         else{
            start++;
            end--;
         }
        }
        return true;
    }
};