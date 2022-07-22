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
using namespace Employee;
void Employee::display_data(map<int, string>& Emp_data)
{
	cout << "**************************************" << endl;
    it = Emp_data.begin();
    while (it != Emp_data.end()) {
        cout << "Employee ID Number: " << it->first << "\t" << "Name: " << it->second << endl;
        ++it;
    }
	cout << "**************************************" << endl;
}
void Employee::delete_data(map<int, string>& Emp_data)
{
    //stu_data.erase(stu_data.begin(), stu_data.find("Siva"));
    it = Emp_data.begin();
    cout << "Enter the roll number which you want to delete it: " << endl;
    cin >> roll_number;
    Emp_data.erase(Emp_data.find(roll_number));
    cout << "\nAfter Deleting the Employee data..." << endl;
    while (it != Emp_data.end()) {
        cout << "Employee ID Number: " << it->first << "\t" << "Name: " << it->second << endl;
        ++it;
    }
}
void Employee::addEmployee(map<int, string>& addEmp_data)
{
    map<int, string>::iterator it= addEmp_data.begin();
    cout << "Enter Employee Id number: ";
    cin >> id_number;
    cout << "Employee Name: ";
    cin >> name;
    cout<<"Employee Organization name:";
    cin>>organization;
    addEmp_data[id_number] = name;
}
int main()
{  
    map<int, string> Employee_data;
    while (1) {
        cout << "Select the option to Add the Employee details, display or delete the data: " << endl;
        cout << "1.Add the Employee data\n2.Delete the data\n3.Display the data\n4.Exit from application" << endl;
        cin >> op;
        switch (op) {
        case 1:
            do {
                addEmployee(Employee_data);
                cout << "want to add more student details(Y/N): ";
                cin >> EmployeeOpt;
            } while (EmployeeOpt == 'y' || EmployeeOpt == 'Y');
            break;
        case 2:
            delete_data(Employee_data);
            break;
        case 3:
            display_data(Employee_data);
            break;
        case 4:
            return 0;
        default:
            break;
        }
    }
}