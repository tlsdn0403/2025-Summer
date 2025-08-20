// max값을 찾고 왼쪽부터 그리고 오른쪽부터

//4 4
//3 0 1 4

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
	int H, W;		// H는 세로, W는 가로
	cin >> H >> W;

	vector<int> height(W);
	for (int i = 0; i < W; ++i) {
		cin >> height[i];
	}

	int maxIndex = max_element(height.begin(), height.end()) - height.begin();		// maxHeight는 4, 근데 인덱스를 구하려면 begin을 빼야됨
	int leftMax = height[0];
	int sum = 0;
	for (int i = 0; i < maxIndex; ++i) {
		if (height[i] > leftMax)
			leftMax = height[i];
		sum += leftMax - height[i];
	}

	int rightMax = height[W - 1];
	for (int i = W - 1; i > maxIndex; --i) {
		if (height[i] > rightMax)
			rightMax = height[i];
		sum += rightMax - height[i];
	}
	cout << sum;
}