class Solution {
public:
    bool isValid(string s) {
        stack<char> st;

        for (char ch : s) {
            
            // Opening brackets ko stack me push karo
            if (ch == '(' || ch == '{' || ch == '[') {
                st.push(ch);
            }
            
            // Closing bracket
            else {
                // Agar stack empty hai, matching opening bracket nahi hai
                if (st.empty()) {
                    return false;
                }

                char top = st.top();
                st.pop();

                if ((ch == ')' && top != '(') ||
                    (ch == '}' && top != '{') ||
                    (ch == ']' && top != '[')) {
                    return false;
                }
            }
        }
        return st.empty();
    }
};