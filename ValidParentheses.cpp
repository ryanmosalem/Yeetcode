class Solution {
public:
    bool isValid(string s) {
        std::stack<char> st;
        for (int i = 0; i < s.length(); i++) {
            if (s.at(i) == ')') {
                if (st.empty()) {
                    return false;
                }
                if (st.top() == '(') {
                    st.pop();
                } else
                    return false;
            } else if (s.at(i) == ']') {
                if (st.empty()) {
                    return false;
                }
                if (st.top() == '[') {
                    st.pop();
                } else
                    return false;
            } else if (s.at(i) == '}') {
                if (st.empty()) {
                    return false;
                }
                if (st.top() == '{') {
                    st.pop();
                } else
                    return false;
            } else {
                st.push(s.at(i));
            }
        }
        if (st.empty())
            return true;
        return false;
    }
};