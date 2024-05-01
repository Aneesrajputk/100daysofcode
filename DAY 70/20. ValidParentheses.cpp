class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for(int i=0;i<s.size();i++){
            char ch=s[i];

        //open bracket k liye 
            if(ch=='(' || ch=='{'|| ch=='['){
                st.push(ch);
            }
            //closing bracket k liye 
            else{
                if(!st.empty()){
                    char topch=st.top();
                    if(ch==')' && topch=='('){
                        st.pop();
                    }
                    else if(ch=='}' && topch=='{'){
                        st.pop();
                    }
                    else if(ch==']' && topch=='['){
                        st.pop();
                    }
                    else{
                        return false;
                    }
                }
                    else{
                    return false;
                }
            }

        }

       if(st.empty()){
        return true;
    }
    return false;
    
    }
};