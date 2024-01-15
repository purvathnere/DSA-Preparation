#include<iostream>
#include<stack>
using namespace std;

bool isvalid(string s)
{
    int n = s.size(); // Length of a string 
    stack<char> st;    // Stack creation
    bool ans = true;   // Suppose the string is already balanced

    // Traverse the string 
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '(' || s[i] == '{' || s[i] == '[')
        {
            st.push(s[i]);
        }
        else if (s[i] == ')')
        {
            if (!st.empty() && st.top() == '(')
            {
                st.pop();
            }
            else
            {
                ans = false;
                break;
            }
        }
        else if (s[i] == '}')
        {
            if (!st.empty() && st.top() == '{')
            {
                st.pop();
            }
            else
            {
                ans = false;
                break;
            }
        }
        else if (s[i] == ']')
        {
            if (!st.empty() && st.top() == '[')
            {
                st.pop();
            }
            else
            {
                ans = false;
                break;
            }
        }
    }

    return ans && st.empty();
}

int main()
{
    string str = "[{()}]";

    if (isvalid(str))
    {
        cout << "String is valid" << endl;
    }
    else
    {
        cout << "String is invalid" << endl;
    }

    return 0;
}
