class Solution {
public:
    int lengthOfLongestSubstring(string s) {
       map<char,int> m;
        int n = s.size();
        int ans = 0;
        int curre = 0;
        int currs = 0;
        for(int i=0; i<n; ++i)
        {
            if(m.find(s[i]) == m.end())
            {
                m[s[i]]++;
            }
            else if(m[s[i]] > 0)
            {
                while(m[s[i]] >0)
                {
                    m[s[currs]]--;
                    currs++;
                }
                m[s[i]]++;
            }
            else
            {
                m[s[i]]++;
            }
            curre = i;
            int currlen = curre - currs+1;
            ans = max(ans, currlen);
        }
        return ans;
    }
};
