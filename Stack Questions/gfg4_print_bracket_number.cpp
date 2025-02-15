class Solution {
    public:
      vector<int> bracketNumbers(string s) {
          int count = 0;
          stack<int> st;
          vector<int> ans;
          for (char c : s) {
              if (c == '(') {
                  count++;
                  st.push(count);
                  ans.push_back(count);
              } 
              else if (c == ')') { 
                  if (!st.empty()) {  
                      ans.push_back(st.top());
                      st.pop();
                  }
              } 
          }
          return ans;
      }
  };