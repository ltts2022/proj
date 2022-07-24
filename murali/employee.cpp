//murali
#include"employee.h"

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
