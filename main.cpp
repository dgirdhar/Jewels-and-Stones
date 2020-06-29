class Solution {
public:
    int numJewelsInStones(string J, string S) {
        int ret = 0;
        int jSize = J.size();
        int sSize = S.size();
        
        for (int i = 0; i < jSize; ++i) {
            for (int j = 0; j < sSize; ++j) {
                if (J[i] == S[j]) {
                    ret++;
                }
            }
        }
        
        return ret;
    }
};
