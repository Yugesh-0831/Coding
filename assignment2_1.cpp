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
 

void infixToPostfix(char s[],int n) {
 
    stack<char> st; 
    char output[n];
    int x=0;
 
    for(int i = 0; i < n; i++) {
        char c = s[i];
      
        if((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9')){
            output[x] = c;
            x++;
        }
        else if(c == '(')
            st.push('(');


        else if(c == ')') {
            while(!st.empty() && st.top() != '(')
            {
                output[x] = st.top();
                x++;
                st.pop();
            }
            st.pop();
        }

        else {
            while(!st.empty() && precedence(s[i]) <= precedence(st.top())) {
                output[x] = st.top();
                x++;
                st.pop(); 
            }
            st.push(c);
        }
    }

    while(!st.empty()) {
        output[x] = st.top();
        x++;
        st.pop();
    }

 cout<<"postfix notation is: ";
 for(x=0;x<n;x++)
    cout << output[x] << " ";
}

int main() {

      cout<<"DSA Lab"<<endl;
  cout<<"Assugnment 2 Q1"<<endl;
  cout<<"Yugesh Jhamb"<<endl;
  cout<<"20BCS5510\n"<<endl;

int n;
    char arr[n];

    cout<<"enter the characters in infix notation: ";
    cin>>n;

cout<<"enter the infix notation: ";

for(int i=0;i<n;i++){
    cin>>arr[i];
}

    infixToPostfix(arr,n);
    return 0;
}