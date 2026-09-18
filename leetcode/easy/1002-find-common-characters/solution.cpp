class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        vector<int> min_frequencies(26, INT_MAX);
        for (const std::string& word : words) {
            vector<int> current_frequencies(26, 0);
            for (char c : word) {
                current_frequencies[c - 'a']++;
            }
            for (int i = 0; i < 26; ++i) {
                min_frequencies[i] = std::min(min_frequencies[i], current_frequencies[i]);
            }
        }
        std::vector<std::string> result;
        for (int i = 0; i < 26; ++i) {
            while (min_frequencies[i] > 0 && min_frequencies[i] != INT_MAX) {
                result.push_back(std::string(1, i + 'a'));
                min_frequencies[i]--;
            }
        }
        return result;
    }
};