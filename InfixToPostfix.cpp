#include <iostream>
#include <stack>
using namespace std;
 

int precedence(char c) {
    if(c == '^')
        return 3;
    else if(c == '/' || c=='*' || c=='%')
        return 2;
    else if(c == '+' || c == '-')
        return 1;
    else
        return -1;
}
 

void infixToPostfix(string s) {
 
    stack<char> st; 
    string output;
 
    for(int i = 0; i < s.length(); i++) {
        char c = s[i];
      
        if((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9'))
            output += c;
    
        else if(c == '(')
            st.push('(');


        else if(c == ')') {
            while(!st.empty() && st.top() != '(')
            {
                output += st.top();
                st.pop();
            }
            st.pop();
        }

        else {
            while(!st.empty() && precedence(s[i]) <= precedence(st.top())) {
                output += st.top();
                st.pop(); 
            }
            st.push(c);
        }
    }

    while(!st.empty()) {
        output += st.top();
        st.pop();
    }

 cout<<"postfix notation is: ";
    cout << output << endl;
}

int main() {

      cout<<"DSA Lab"<<endl;
  cout<<"Worksheet 6 Q2"<<endl;
  cout<<"Yugesh Jhamb"<<endl;
  cout<<"20BCS5510\n"<<endl;
    string s;

cout<<"enter the infix notation: ";
cin>>s;

    infixToPostfix(s);
    return 0;
}