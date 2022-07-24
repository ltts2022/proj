//murali
#include"employee.h"

using namespace Employee;

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