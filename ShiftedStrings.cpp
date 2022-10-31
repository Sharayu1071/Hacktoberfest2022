/* C++ program to print groups of shifted strings
together. */
#include <bits/stdc++.h>
using namespace std;
const int ALPHA = 26; // Total lowercase letter

// Method to a difference string for a given string.
// If string is "adf" then difference string will be
// "cb" (first difference 3 then difference 2)
string getDiffString(string str)
{
	string shift = "";
	for (int i = 1; i < str.length(); i++)
	{
		int dif = str[i] - str[i-1];
		if (dif < 0)
			dif += ALPHA;

		// Representing the difference as char
		shift += (dif + 'a');
	}

	// This string will be 1 less length than str
	return shift;
}

// Method for grouping shifted string
void groupShiftedString(string str[], int n)
{
	// map for storing indices of string which are
	// in same group
	map< string, vector<int> > groupMap;
	for (int i = 0; i < n; i++)
	{
		string diffStr = getDiffString(str[i]);
		groupMap[diffStr].push_back(i);
	}

	// iterating through map to print group
	for (auto it=groupMap.begin(); it!=groupMap.end();
												it++)
	{
		vector<int> v = it->second;
		for (int i = 0; i < v.size(); i++)
			cout << str[v[i]] << " ";
		cout << endl;
	}
}

// Driver method to test above methods
int main()
{
	string str[] = {"acd", "dfg", "wyz", "yab", "mop",
					"bdfh", "a", "x", "moqs"
				};
	int n = sizeof(str)/sizeof(str[0]);
	groupShiftedString(str, n);
	return 0;
}
