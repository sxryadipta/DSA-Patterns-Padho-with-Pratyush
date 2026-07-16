//brute
class Solution {
public:
    bool isSubsequence(string s, string t) {

        int i = 0, j = 0;

        while (i < s.size() && j < t.size()) {

            if (s[i] == t[j])
                i++;

            j++;
        }

        return i == s.size();
    }
};

//better
class Solution {
public:
    bool isSubsequence(string s, string t) {

        vector<int> pos[26];

        // Preprocessing
        for (int i = 0; i < t.size(); i++) {
            pos[t[i] - 'a'].push_back(i);
        }

        int last = -1;

        for (char c : s) {

            auto &v = pos[c - 'a'];

            auto it = upper_bound(v.begin(), v.end(), last);

            if (it == v.end())
                return false;

            last = *it;
        }

        return true;
    }
};
