class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
          vector<vector<string>>ga;
          unordered_map<string, vector<string>>position;
           
            for( auto &ch:strs){
                string k=ch;
                sort(ch.begin(),ch.end());
                position[ch].push_back(k);
            }
            for(auto & it:position){
                ga.push_back(it.second);
            }
            return ga;
           }
    };

