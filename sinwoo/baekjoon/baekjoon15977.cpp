#include<iostream>
#include<array>
#include<vector>
using namespace std;

vector<string> country;
const int country_num = 4;
int main() {
	for (int i = 0; i < country_num; ++i) {
		string s;
		cin >> s;
		country.push_back(s);
	}
	for (const string s : country) {
		cout << s << endl;
	}

}