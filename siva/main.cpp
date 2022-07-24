//siva
#include"person.h"
using namespace Person;
extern map<int, string>::iterator it;
extern string name;
extern int street_number,roll_number;
extern char PersonOpt;
extern int op;

int main()
{  
    map<int, string> Person_data;
    while (1) {
        cout << "Select the option to Add the Person details, display or delete the data: " << endl;
        cout << "1.Add the Person data\n2.Delete the data\n3.Display the data\n4.Exit from application" << endl;
        cin >> op;
        switch (op) {
        case 1:
            do {
                addPerson(Person_data);
                cout << "want to add more student details(Y/N): ";
                cin >> PersonOpt;
            } while (PersonOpt == 'y' || PersonOpt == 'Y');
            break;
        case 2:
            delete_data(Person_data);
            break;
        case 3:
            display_data(Person_data);
            break;
        case 4:
            return 0;
        default:
            break;
        }
    }
}