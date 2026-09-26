class Solution {
public:
    string decodeMessage(string key, string message) {

        vector<char> mapping(26, 0);
        char current_target = 'a';

        for (int i = 0; i < key.size(); i++) {
            char ch = key[i];

            if (ch != ' ') {
                int index = ch - 'a';

                if (mapping[index] == 0) {
                    mapping[index] = current_target;
                    current_target++;
                }
            }
        }

        string decoded_result = "";
        for (int i = 0; i < message.size(); i++) {
            char ch = message[i];

            if (ch == ' ') {
                decoded_result += ' ';
            } else {
                int index = ch - 'a';
                decoded_result += mapping[index];
            }
        }

        return decoded_result;
    }
};
