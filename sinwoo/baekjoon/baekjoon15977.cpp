#include<iostream>
#include<array>
#include<string>
using namespace std;

int N, M;
array<int, 10> arr{};
array<bool, 10> isUsed{};
void problem(int k);

int main() {
	cin >> N >> M;

	problem(0);
}
void problem(int k)
{
	if (k == M)
	{
		for (int i = 0; i < M; ++i) {
			cout << arr[i] << " ";
		}
		cout << "\n";
	}
	for (int i = 1; i <= N; ++i) {
		if (not isUsed[i]) {
			arr[k] = i;
			isUsed[i] = true;
			problem(k + 1);
			isUsed[i] = false;
		}
	}
}


