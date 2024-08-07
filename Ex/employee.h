#pragma once
#include <string>
#include <sstream>

using namespace std;


class employee {
private:
	string employeeId;
public:

	void setEmployeeId(string valueEmployeeId) {
		employeeId = valueEmployeeId;
	}

	string getEmployeeId() {
		return employeeId;
	}

	void printEmployeeId() {
		std::cout << employeeId;
	}
};

