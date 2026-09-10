class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int result = 0;
        string sentence;
        for (int i = 0; i < sentences.size(); i++) {
            sentence = sentences[i];
            int temp = 1;
            for (int j = 0; j < sentence.length(); j++) {
                if (sentence[j] == ' ') {
                    temp++;
                } else {
                    continue;
                }
                
            }
            if (temp > result) {
                    result = temp;
                } else {
                    continue;
                }
        }
        return result;
    }
};