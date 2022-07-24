//murali
#include<iostream>
#include<string>
#include<vector>
#include<list>
#include<map>
#include<algorithm>
#include<chrono>
#include <cstdint>
using namespace std;
using namespace std::chrono;
namespace Employee {
	void addEmployee(map<int, string>& addEmp_data);
	void delete_data(map<int, string>& Emp_data);
	void display_data(map<int, string>& Emp_data);
	map<int, string>::iterator it;
	string name,organization;
	int id_number,roll_number;
	char EmployeeOpt;
	int op;
}

