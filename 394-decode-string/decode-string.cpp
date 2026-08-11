class Solution {
public:
    string decodeString(string s) {
        stack<int> nums;
        stack<string> strs;

        string current = "";
        int num = 0;

        for (char ch : s) {

            // Build the number
            if (isdigit(ch)) {
                num = num * 10 + (ch - '0');
            }

            // Start a new nested string
            else if (ch == '[') {
                nums.push(num);
                strs.push(current);

                num = 0;
                current = "";
            }

            // Add character to current string
            else if (isalpha(ch)) {
                current += ch;
            }

            // End of current nested string
            else if (ch == ']') {
                int repeat = nums.top();
                nums.pop();

                string previous = strs.top();
                strs.pop();

                string temp = "";

                for (int i = 0; i < repeat; i++) {
                    temp += current;
                }

                current = previous + temp;
            }
        }

        return current;
    }
};