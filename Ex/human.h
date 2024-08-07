#pragma once
#include <string>
#include <sstream>
#include "employee.h"

#pragma once /* ������ �� �������� ����������� ������������� ����� */

using namespace std;

class human {

	employee id;
	string employeeId = id.getEmployeeId();

public:
	// ����������� ������ human
	human(std::string last_name, std::string name, std::string second_name, std::string employeeId)
	{
		this->last_name = last_name;
		this->name = name;
		this->second_name = second_name;
		this->employeeId = employeeId;
	}
	human(std::string last_name, std::string name, std::string second_name)
	{
		this->last_name = last_name;
		this->name = name;
		this->second_name = second_name;
	}
	// ��������� ��� ��������
	virtual std::string get_full_name()
	{
		std::ostringstream full_name;
		full_name << this->last_name << " "
			<< this->name << " "
			<< this->second_name;
		return full_name.str();
	}

	virtual ~human() {}

private:
	std::string name; // ���
	std::string last_name; // �������
	std::string second_name; // ��������

};