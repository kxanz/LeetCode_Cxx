class Solution {
public:

    int Operation(int a,int b,string t)
    {
        if(t == "+"){
            return a+b;
        }else if(t == "-"){
            return a-b;
        }else if(t == "*"){
            return (long)a*(long)b;
        }else{
            return a/b;
        }
    }

    int evalRPN(vector<string>& tokens) 
    {
        stack<int>st;
        
        for(auto &t : tokens){
            if(t == "+" || t == "-" || t == "*" || t == "/"){
                int b = st.top();
                st.pop();
                int a = st.top();
                st.pop();
                int result = Operation(a,b,t);
                st.push(result);
            }else{
                st.push(stoi(t));
            }
        }
        return st.top();
    }
};