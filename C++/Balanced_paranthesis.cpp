/*
  Author Lakshay Goel
  Github profile: https://github.com/MrLakshay
  Problem link: Given a string with some brackets in it check if the paranthesis are balanced or not.
*/
#include <iostream>
#include <stack>
using namespace std;
bool isBalanced(string& a){
    stack<char>stk;
    for (int i = 0; a[i]!='\0'; i++)
    {
        
        char ch=a[i];
        switch (ch)
        {
        case '{':
        case '(':
        case '[':
            stk.push(ch);
            break;
        case ']':
            if(stk.empty() || stk.top()!='['){
                return false;
            }
            stk.pop();
            break;
        case ')':
            if(stk.empty() || stk.top()!='('){
                return false;
            }
            stk.pop();
            break;
        case '}':
            if(stk.empty() || stk.top()!='{'){
                return false;
            }
            stk.pop();
            break;
        }
        
    }
    if(stk.empty()) return true;
    return false;
}
int main()
{
    // char a[]="{a+[b*(c+d)]*e}";
    string a;
    cin>>a;
    if(isBalanced(a)){
        cout<<"Balanced"<<endl;
    }
    else{
        cout<<"Not Balanced"<<endl;
    }
    return 0;
}
