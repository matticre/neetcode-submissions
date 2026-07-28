class Solution {
public:
    bool isValid(string s) {
        stack<char> store;
        for (auto bracket : s){
            if (bracket == ')' && !store.empty() &&store.top() == '(' )
                store.pop();
            else if (bracket == ']' && !store.empty() && store.top() == '[' )
                store.pop();
            else if ( bracket == '}' && !store.empty() && store.top() == '{')
                store.pop();
            else if (bracket == '(' || bracket == '[' || bracket == '{')
                store.push(bracket);
            else
                return false;
        }
        return store.empty();
    }
};
