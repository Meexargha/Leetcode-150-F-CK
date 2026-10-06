class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char, int> market;
        unordered_map<char, int> need;

        
        for (int i = 0; i < magazine.size(); i++) {
            market[magazine[i]]++;
        }

        
        for (int i = 0; i < ransomNote.size(); i++) {
            need[ransomNote[i]]++;
        }

        
        for (auto x : need) {
            if (market[x.first] < x.second) {
                return false;
            }
        }

        return true;
    }
};
