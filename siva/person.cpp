//siva
#include"person.h"
map<int, string>::iterator it;
string name;
int street_number,roll_number;
char PersonOpt;
int op;
using namespace Person;
void Person::display_data(map<int, string>& Person_data)
{
	cout << "**************************************" << endl;
    it = Person_data.begin();
    while (it != Person_data.end()) {
        cout << "Person street Number: " << it->first << "\t" << "Name: " << it->second << endl;
        ++it;
    }
	cout << "**************************************" << endl;
}
void Person::delete_data(map<int, string>& Person_data)
{
    //stu_data.erase(stu_data.begin(), stu_data.find("Siva"));
    it = Person_data.begin();
    cout << "Enter the roll number which you want to delete it: " << endl;
    cin >> roll_number;
    Person_data.erase(Person_data.find(roll_number));
    cout << "\nAfter Deleting the Person data..." << endl;
    while (it != Person_data.end()) {
        cout << "Person ID Number: " << it->first << "\t" << "Name: " << it->second << endl;
        ++it;
    }
}
void Person::addPerson(map<int, string>& addPerson_data)
{
    it= addPerson_data.begin();
    cout << "Enter Person street number: ";
    cin >> street_number;
    cout << "Person Name: ";
    cin >> name;
    addPerson_data[street_number] = name;
}
