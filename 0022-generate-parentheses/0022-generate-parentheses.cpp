#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    struct State {
        string current;
        int open, close;
        State(string c, int o, int cl) : current(c), open(o), close(cl) {}
    };

    vector<string> generateParenthesis(int n) {
        vector<string> result;
        stack<State> st;

        // Start with empty string
        st.push(State("", 0, 0));

        while (!st.empty()) {
            State state = st.top();
            st.pop();

            // If string length == 2*n, we found a valid combination
            if ((int)state.current.size() == 2 * n) {
                result.push_back(state.current);
                continue;
            }

            // Add "(" if we can
            if (state.open < n) {
                st.push(State(state.current + "(", state.open + 1, state.close));
            }

            // Add ")" if we can
            if (state.close < state.open) {
                st.push(State(state.current + ")", state.open, state.close + 1));
            }
        }

        return result;
    }
};

