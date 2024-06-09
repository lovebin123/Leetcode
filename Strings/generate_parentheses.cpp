class Solution {
public:
void f(int open,int close,vector<string>&v1,string op)
{
    if(close==0 && open==0)
    {
        v1.push_back(op);
        return;
    }
    if(open!=0)
    {
        string op1=op;
        op1.push_back('(');
        f(open-1,close,v1,op1);
    }
    if(open<close)
    {
        string op2=op;
        op2.push_back(')');
        f(open,close-1,v1,op2);
    }
}
    vector<string> generateParenthesis(int n) {
     string s="";
     vector<string>v1;
    f(n,n,v1,s);
    return v1;
    }
};