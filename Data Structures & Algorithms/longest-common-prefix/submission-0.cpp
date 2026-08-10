class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string prefix=strs[0];
        for(int i=1; i<strs.size(); i++){
            int j=0;
            while(j<prefix.size()&& j<strs[i].size()){
                if(prefix[j]==strs[i][j]) j++;
                 else {
                  break;  // stop at mismatch , other wise infinite loop,
    }
            }
            prefix=prefix.substr(0,j);
            if(prefix.size()==0){
                return "";
            }
            
        }
        return prefix;

    }
};