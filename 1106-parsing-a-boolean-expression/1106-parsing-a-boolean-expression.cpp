class Solution {
public:
    bool solve(vector<char> &v, char op) {
        bool ans = (v[0] == 'f') ? false : true;

        for (int i = 1; i < v.size(); i++) {
            bool current = (v[i] == 'f') ? false : true;
            if (op == '&') {
                ans = ans & current;
            } else if (op == '|') {
                ans = ans | current;
            }
        }
        return ans;
    }

    bool parseBoolExpr(string s) {
        stack<char> operators;  
        stack<char> operands;   
        
        for (char ch : s) {
            if (ch == 't' || ch == 'f' || ch == '(') {
                operands.push(ch);
            }
            else if (ch == '&' || ch == '|' || ch == '!') {
                operators.push(ch);
            }
           
            else if (ch == ')') {
                vector<char> v;  
                while (operands.top() != '(') {
                    v.push_back(operands.top());
                    operands.pop();
                }
                operands.pop();  

                char op = operators.top();
                operators.pop();

                bool result;
                if (op == '!') {
                    result = (v[0] == 'f') ? true : false;
                }
                else {
                    result = solve(v, op);
                }

                operands.push(result ? 't' : 'f');
            }
        }

        return operands.top() == 't';
    }
};
