#include<iostream>
#include<vector>
#include<string>
using namespace std;
vector<string> v;
void input() {
	int r{}, c{};
	cin >> r >> c;
	v.resize(r);
	for (string& s : v)
		cin >> s;
}
void Print() {
	for (string& s : v)
		cout << s << '\n';
}

void solution() {
	bool flag = true;

	for (size_t i = 0; i < v.size(); ++i) {
		for (size_t j = 0; j < v[i].size(); ++j)
		{
			if (v[i][j] == 'W')
			{
				if ((j > 0 && v[i][j - 1] == 'S') ||
					(j < v[i].size() - 1 && v[i][j + 1] == 'S') ||
					(i > 0 && v[i - 1][j] == 'S') ||
					(i < v.size() - 1 && v[i + 1][j] == 'S'))
				{
					flag = false;
					goto END;
				}
				if (i > 0 && v[i - 1][j] == '.')
					v[i - 1][j] = 'D';
				if (j > 0 && v[i][j - 1] == '.')
					v[i][j - 1] = 'D';
				if (i < v.size() - 1 && v[i + 1][j] == '.')
					v[i + 1][j] = 'D';
				if (j < v[i].size() - 1 && v[i][j + 1] == '.')
					v[i][j + 1] = 'D';
			}
		}
	}

END:
	cout << flag << '\n';

}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	input();
	solution();
	Print();

}