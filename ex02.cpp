#include <iostream>
using namespace std;

class Time {
private:
	int hours;
	int minutes;

public:
	Time() : hours(0), minutes(0) {}
	Time(int h, int m) : hours{ h }, minutes{ m } {}

	void displayTime() {
		cout << hours << ": " << minutes << endl;
	}

	Time& operator++() {
		++minutes;

		if (minutes == 60) {
			minutes = 0;
			hours++;
		}

		return *this;
	}
};

int main() {
	Time t1(10, 59);
	t1.displayTime();

	++t1;
	t1.displayTime();

	++t1;
	t1.displayTime();
}