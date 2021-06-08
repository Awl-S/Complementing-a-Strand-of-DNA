#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main() {
	string str; cin >> str;
	char s;
	for (int i = 0; i < str.length(); i++)
	{
		s = str.at(i);
		if (s == 'A') str[i] = 'T';
		if (s == 'G') str[i] = 'C';
		if (s == 'C') str[i] = 'G';
		if (s == 'T') str[i] = 'A';
	}
	cout << "\n";
	reverse(str.begin(), str.end());
	cout << str;
}
