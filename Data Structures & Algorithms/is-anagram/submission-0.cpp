class Solution {
public:
    bool isAnagram(string s, string t) {
         //Step 1
        unordered_map<char, int> freqA;

        //Step 2 loop s
        for (char ch: s){
            freqA[ch]++;
        }
        //Step 3 loop t
        for (char ch: t){
            freqA[ch]--;
        }

        //Step 4 if count in freqA is non-zero, return false

        for (auto entry: freqA){
            if(entry.second != 0){
                return false;
            }
        }
        return true;
    }
};
