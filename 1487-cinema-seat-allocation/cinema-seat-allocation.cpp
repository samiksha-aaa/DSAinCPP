class Solution {
public:
    int maxNumberOfFamilies(int n, vector<vector<int>>& reservedSeats) {
        unordered_map<int, unordered_set<int>> reserved;

        for(auto seat : reservedSeats) {
            reserved[seat[0]].insert(seat[1]);
        }

        int ans = (n - reserved.size()) * 2;

        for(auto row : reserved) {
            int count = 0;

            bool left = true;
            bool middle = true;
            bool right = true;

            for(int seat : row.second) {
                if(seat >= 2 && seat <= 5)
                    left = false;

                if(seat >= 4 && seat <= 7)
                    middle = false;

                if(seat >= 6 && seat <= 9)
                    right = false;
            }

            if(left && right)
                count = 2;
            else if(left || middle || right)
                count = 1;

            ans += count;
        }

        return ans;
    }
};