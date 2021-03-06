class Solution {
public:
    vector<int> twoSum(vector<int>&a, int target) {
        map<int, int> m;
        for(int i=0; i<a.size(); ++i)
        {
            if(m.find(target - a[i])!= m.end() )
            {
                return {i, m[target - a[i]]};
            }
            m[a[i]] = i;
        }
        return {};
    }
};
