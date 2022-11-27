#include <iostream>
using namespace std;

template<typename T>
T getSmallest(T arr[], int n) {
	T min = arr[0];
	for (int i = 0; i < n; i++) {
		if (arr[i] < min)
			min = i;
	}
	return min;
}

int main() {
	double list[] = { 1.2, 3.3, 9.0, 1.5, 8.7 };
	double minValue = getSmallest(list, 5);

	cout << "ÃÖ¼Ò°ª: " << minValue << endl;
}