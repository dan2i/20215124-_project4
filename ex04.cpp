#include <iostream>
using namespace std;

class Employee {
	string name;
	int salary;

public:
	Employee() {}
	Employee(string n, int s) : name(n), salary(s) {}

	string getName() {
		return name;
	}

	void setName(string name) {
		this->name = name;
	}

	int getSalary() {
		return salary;
	}

	void setSalary(int salary) {
		this->salary = salary;
	}

	virtual int computeSalary() {
		return salary;
	}

};

class Manager : public Employee {
private:
	int bonus;

public:
	Manager(string name, int salary, int bonus) : Employee(name, salary) {
		this->bonus = bonus;
	}
	int computeSalary() override{
		return Employee::computeSalary() + bonus;
	}
	
	void print() {
		cout << "이름: " << getName() << endl;
		cout << "월급: " << getSalary() << endl;
		cout << "보너스: " << bonus << endl;
		cout << "전체 급여: " << Manager::computeSalary() << endl;
	}
};

int main() {
	Manager m1{ "김철수", 200, 100 };
	m1.print();
}