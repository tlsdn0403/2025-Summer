#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	int N;
	cin >> N;

	vector<pair<int, int>> pillars(N);		// pair로 두 쌍의 int인자 저장

	for (int i = 0; i < N; ++i) {		// first가 첫번째 인자, second가 두번째 인자
		cin >> pillars[i].first >> pillars[i].second;
	}

	sort(pillars.begin(), pillars.end());	// 첫번째꺼 기준으로 정렬

	int maxIndex = 0;
	for (int i = 0; i < N; ++i) {
		if (pillars[i].second > pillars[maxIndex].second)
			maxIndex = i;
	}

	int sum = 0;
	int leftMax = pillars[0].second;
	for (int i = 0; i < maxIndex; ++i) {
		if (pillars[i].second > leftMax) {
			leftMax = pillars[i].second;
		}
		sum += (pillars[i + 1].first - pillars[i].first) * leftMax;
	}

	int rightMax = pillars[N-1].second;
	for (int i = N - 1; i > maxIndex; --i) {
		if (pillars[i].second > rightMax) {
			rightMax = pillars[i].second;
		}
		sum += (pillars[i].first - pillars[i - 1].first) * rightMax;
	}
	sum += pillars[maxIndex].second;
	cout << sum;
}