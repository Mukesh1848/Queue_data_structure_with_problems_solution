
int countRev (string s)
{
    //odd condition
    if(s.length()%2 == 1) {
        return -1;
    }
    
    stack<char> st;
    for(int i=0; i<s.length(); i++) {
        char ch = s[i];
        
        if(ch == '{') 
            st.push(ch);
		else
        {
            //ch is closed brace
            if(!st.empty() && st.top() == '{') {
                st.pop();
            }
            else
            {
                st.push(ch);
            }
        }
    }
    
        //stack contains invalid expression
        int a = 0, b = 0;
        while(!st.empty()) {
            if(st.top() == '{') {
                b++;
            }
            else
            {
                a++;
            }
            st.pop();
        }
        
		int ans = (a+1)/2 + (b+1)/2;
        return ans;
}
