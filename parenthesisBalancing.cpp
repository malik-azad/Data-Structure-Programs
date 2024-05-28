
#include <bits/stdc++.h>
using namespace std;

// function to check if brackets are balanced
bool areBracketsBalanced(string expr)
{
    stack<char> temp;
        for(int i=0;i<expr.length();i++)
        {
            if ((expr[i] == ' ')
                ||( expr[i] >= 'a' && expr[i] <= 'z')
                ||(expr[i] >= 'A' &&  expr[i] <= 'Z')
                ||(expr[i] >= '0' && expr[i] <= '9')
                ||(expr[i] == '+')|| (expr[i] == '-')
                || (expr[i] == '*')||(expr[i] == '/')||(expr[i] == '%'))
            {
                continue;
            }
            else if(temp.empty())
            {
                temp.push(expr[i]);
            }
            else if((temp.top()=='('&& expr[i]==')')
                     ||  (temp.top()=='{' && expr[i]=='}')
                     ||  (temp.top()=='[' && expr[i]==']'))
            {
                temp.pop();
            }

            else
            {
                temp.push(expr[i]);
            }
        }


        if(temp.empty())
        {
            return true;
        }
        return false;
}


int main()
{
  //  string expr = " {( a + b )* c }/[a-b]";
//string expr = " {( a + b )* c }/a-b]";
string expr = " {( a + b )* c }/[[a-b]";

    // Function call
    if (areBracketsBalanced(expr))
        cout << "Balanced";
    else
        cout << "Not Balanced";
    return 0;
}