class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string app="";
        int a=0;
        int b=0;
        while(a<word1.size() && b<word2.size()){
            app+=word1[a];
            app+=word2[b];
            a++;
            b++;
        }
      for(int i=a; i<word1.size(); i++){
        if(a<word1.size()){
            app+=word1[a++]; // yhaa increse karo 
        }
      }
        for(int i=b; i<word2.size(); i++){
        if(b<word2.size()){
            app+=word2[b++]; // b increase karo
        }
      }
        return app;

    }
};