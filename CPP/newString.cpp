#include <bits/stdc++.h>
using namespace std;

void solve(string in, string out)
{
	if(in.length() == 0)
	{
		cout << out << endl;
		return ;
	}
	
	string op1 = out;
    string op2 = out;
    // if(isdigit(in[0]))
    // {
    //     op1.push_back(in[0]);
    //     op2.push_back(in[0]);
    //     in.erase(in.begin() + 0);
    // }
	
	op1.push_back(toupper(in[0]));
	op2.push_back(in[0]);
	in.erase(in.begin() + 0);
	
	solve(in, op1);
	solve(in, op2);

}

int main()
{
	string s = "ab";
	string out = "";
	
	solve(s, out);
	return 0;
}
