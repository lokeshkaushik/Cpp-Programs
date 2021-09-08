// Aaditya Paithane @aadityamp01

//Staircase Problem

// Problem link- https://www.hackerrank.com/challenges/staircase/problem


#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);


void staircase(int n) {
	for (int i = 0; i < n; i++)
	{
		for (int j = n - i; j > 1; j--)
		{
			cout << ' ';
		}
		for (int j = i; j >= 0; j--)
		{
			cout << "#";
		}
		cout << endl;

	}

}

int main()
{
	string n_temp;
	getline(cin, n_temp);

	int n = stoi(ltrim(rtrim(n_temp)));

	staircase(n);

	return 0;
}

string ltrim(const string &str) {
	string s(str);

	s.erase(
	    s.begin(),
	    find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
	);

	return s;
}

string rtrim(const string &str) {
	string s(str);

	s.erase(
	    find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
	    s.end()
	);

	return s;
}


// Time Complexity - O(n2);
// Doesnt required extra

/*
Sample Input

6

Sample Output

     #
    ##
   ###
  ####
 #####
######
*/
