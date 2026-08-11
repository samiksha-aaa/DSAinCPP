class Solution {
public:
    string simplifyPath(string path) {
        stack<string> st;
        string current = "";

        for (int i = 0; i <= path.length(); i++) {

            // End of a directory name
            if (i == path.length() || path[i] == '/') {

                // Ignore "" and "."
                if (current == "" || current == ".") {
                    // Do nothing
                }

                // Go to parent directory
                else if (current == "..") {
                    if (!st.empty()) {
                        st.pop();
                    }
                }

                // Normal directory
                else {
                    st.push(current);
                }

                // Reset for next directory
                current = "";
            }

            // Build the current directory name
            else {
                current += path[i];
            }
        }

        // Build result
        string result = "";

        while (!st.empty()) {
            result = "/" + st.top() + result;
            st.pop();
        }

        // If stack was empty
        if (result == "") {
            return "/";
        }

        return result;
    }
};