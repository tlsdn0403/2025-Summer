#include <iostream>
#include <iomanip>

using namespace std;

class Droid {
public:
	double rifle;
	double sight;
	double hearing;
	double arm;
	double leg;

	double cost() const {
		constexpr double Prices[5] = { 350.34, 230.90, 190.55, 125.30, 180.90 };
		return rifle * Prices[0] + sight * Prices[1] + hearing * Prices[2] + arm * Prices[3] + leg * Prices[4];
	}

	void read() {
		cin >> rifle >> sight >> hearing >> arm >> leg;
	}
};

int main() {
	int T;
	cin >> T;

	for (int i = 0; i < T; ++i) {
		Droid d;
		d.read();
		cout << fixed << setprecision(2) << '$' << d.cost() << '\n';
	}
}