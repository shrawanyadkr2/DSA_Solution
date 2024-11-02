
/*
Link:
https://leetcode.com/problems/circular-sentence/?envType=daily-question&envId=2024-11-02

Circular Sentence



*/

class Solution {
public:
    bool isCircularSentence(string sentence) {
        int n = sentence.size();
        
        // Check if the sentence starts and ends with the same letter
        if (sentence[0] != sentence[n - 1]) return false;

        // Traverse the sentence to check the circular condition for words
        for (int i = 0; i < n - 1; i++) {
            if (sentence[i] == ' ' && sentence[i - 1] != sentence[i + 1]) {
                return false;
            }
        }
        
        return true;
    }
};
