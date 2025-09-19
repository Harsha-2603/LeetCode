class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        auto length=words.size();
        vector<int>end;
        for(int i =0;i<length;i++){
            int count=0;
            auto le=words[i].size();
            string word=words[i];
            for(int j=0;j<le;j++){
                if(word[j]==x)
                    count++;
            }
            if(count>0){
                end.push_back(i);
            }
        }
        return(end);
    }
};