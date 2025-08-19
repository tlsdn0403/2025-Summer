#include <iostream>
#include <vector>

using namespace std;

int main() {
	int N;
	cin >> N;

	vector<pair<int, int>> L;
	for (int i = 0; i < N; i++) {
		int a, b;
		cin >> a >> b;
		L.push_back({ a,b });
	}
	vector<int> answer;
	for (int i = 0; i < N; i++) {
		int count = 0;
		for (int j = 0; j < N; j++) {
			if (L[j].first > L[i].first && L[j].second > L[i].second)
				count++;
		}
		answer.push_back(count + 1);
	}
	for (int v : answer)
		cout << v << " ";
}