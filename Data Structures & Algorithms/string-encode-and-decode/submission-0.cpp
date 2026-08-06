class Solution {
public:

  string encode(vector<string>& strs) {

        string ans;

        for (string &word : strs) {

            ans += to_string(word.size());
            ans += '#';
            ans += word;

        }

        return ans;
    }

    vector<string> decode(string s) {

        vector<string> ans;

        int i = 0;

        while (i < s.size()) {

            int j = i;

            // Find '#'
            while (s[j] != '#')
                j++;

            // Read length
            int len = stoi(s.substr(i, j - i));

            // Move to first character
            j++;

            // Read string
            ans.push_back(s.substr(j, len));

            // Move to next word
            i = j + len;
        }

        return ans;
    }
    
};
