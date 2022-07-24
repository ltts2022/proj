//Rahul Kumar
#include"student.hpp"
using namespace std;
using namespace student;
extern string name;
extern int rollNo,checkRoll;
extern char studentOpt;
extern int op;
int main()
{  
#if 1
    map<int, string> student_data;

    while (1) {
        std::cout << "Select the option to Add the student details, display or delete the data: " << endl;
        std::cout << "1.Add the student data\n2.Delete the data\n3.Display the data\n4.Exit from application" << endl;
        std::cin >> op;
        switch (op) {
        case 1:
            do {
                addStudent(student_data);
                std::cout << "want to add more student details(Y/N): ";
                std::cin >> studentOpt;
            } while (studentOpt == 'y' || studentOpt == 'Y');
            break;
        case 2:
            delete_data(student_data);
            break;
        case 3:
            display_data(student_data);
            break;
        case 4:
            return 0;
        default:
            break;
        }
    }
	#endif
	return 0;
}