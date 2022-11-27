#include <iostream>
using namespace std;

class Box {
private:
	double length;
	double width;
	double height;


public:
	Box(int l = 0, int w = 0, int h = 0) :length(l), width(w), height(h) {}

	double getVolume(void) {
		return length * width * height;
	}

	void print() {
		cout << "상자의 길이: " << length << endl;
		cout << "상자의 너비: " << width << endl;
		cout << "상자의 높이: " << height << endl;
		cout << "상자의 부피: " << getVolume() << endl;
	}

	bool operator<(Box b) {
		return (this->getVolume() < b.getVolume());
	}
};

int main() {
	cout << "상자 #1" << endl;
	Box a(10, 10, 10);
	a.print();
	cout << endl;

	cout << "상자 #2" << endl;
	Box b(20, 20, 20);
	b.print();
	cout << endl;
	
	cout << boolalpha << (a < b);
}