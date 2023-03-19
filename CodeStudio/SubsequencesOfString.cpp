#include <bits/stdc++.h>

void solve (string str, string output, int i, vector<string> &ans) {
	if (i >= str.length()) {
		ans.push_back(output);
		return;
	}

	// exclude waala case
	solve(str, output, i+1, ans);

	// include waala case
	output += str[i];
	solve(str, output, i+1, ans);
}

vector<string> subsequences(string str){
	
	vector<string> ans;
	string output = "";
	int i = 0;
	solve(str, output, i, ans);

	ans.erase(ans.begin());
	
	return ans;
}