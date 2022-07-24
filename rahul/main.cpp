//Rahul Kumar
#include"student.hpp"
using namespace std;
using namespace ltts;

int main()
{
    map<int, string> student_data;
    student obj;
    while (1) {
        std::cout << "Select the option to Add the student details, display or delete the data: " << endl;
        std::cout << "1.Add the student data\n2.Delete the data\n3.Display the data\n4.Exit from application" << endl;
        std::cin >> obj.op;
        switch (obj.op) {
        case 1:
            do {
                obj.addStudent(student_data);
                std::cout << "want to add more student details(Y/N): ";
                std::cin >> obj.studentOpt;
            } while (obj.studentOpt == 'y' || obj.studentOpt == 'Y');
            break;
        case 2:
            obj.delete_data(student_data);
            break;
        case 3:
            obj.display_data(student_data);
            break;
        case 4:
            return 0;
        default:
            break;
        }
    }
    return 0;
}