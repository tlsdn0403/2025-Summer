#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

vector<vector<int>> combi(vector <int> list, int n) {
	vector<vector<int>> result;
	if (n > list.size())
		return result;
	if (n == 1) {
		for (int i : list) {
			vector<int> temp = { i };
			result.push_back(temp);
		}
	}
	else if (n > 1) {
		for (int i = 0; i < list.size() - n + 1; i++) {
			vector<int> slice(list.begin() + i + 1, list.end());
			for (vector<int> temp : combi(slice, n - 1)) {
				vector<int> temp2 = { list[i] };
				temp2.insert(temp2.end(), temp.begin(), temp.end());
				result.push_back(temp2);
			}
		}
	}
}

int main() {
	int N, M;
	cin >> N >> M;

	vector<int> cards;

	for (int i = 0; i < N; i++) {
		int t;
		cin >> t;
		cards.push_back(t);
	}
	int answer = 0;
	for (vector<int> c : combi(cards, 3)) {
		int acc = accumulate(c.begin(), c.end(), 0);
		if (acc <= M) {
			answer = max(answer, acc);
		}
	}
	cout << answer << endl;
}