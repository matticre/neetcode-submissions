class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> s;

        for (auto token : tokens){
            if (token!="+" && token!="-" && token!="*" && token!="/")
                s.push(stoi(token));
            else {
                auto num_1 = s.top(); s.pop();
                auto num_2 = s.top(); s.pop();

                if (token == "+")
                    s.push(num_2 + num_1);
                else if (token == "-")
                    s.push(num_2 - num_1);
                else if (token == "*")
                    s.push(num_2 * num_1);
                else if (token == "/")
                    s.push(num_2 / num_1);
            }
        }

        return s.top();
    }
};
