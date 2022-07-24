//Rahul Kumar
#include"student.hpp"
using namespace std;
using namespace student;
string name;
int rollNo,checkRoll;
char studentOpt;
int op;
map<int, string>::iterator it;
void student::display_data(map<int, string>& stu_data)
{
	cout << "**************************************" << endl;
    it = stu_data.begin();
    while (it != stu_data.end()) {
        cout << "Student Roll Number: " << it->first << "\t" << "Name: " << it->second << endl;
        ++it;
    }
	cout << "**************************************" << endl;
}
void student::delete_data(map<int, string>& stu_data)
{
    //stu_data.erase(stu_data.begin(), stu_data.find("Siva"));
    it = stu_data.begin();
    cout << "Enter the roll number which you want to delete it: " << endl;
    cin >> checkRoll;
    stu_data.erase(stu_data.find(checkRoll));
    cout << "\nAfter Deleting the student data..." << endl;
    while (it != stu_data.end()) {
        cout << "Student Roll Number: " << it->first << "\t" << "Name: " << it->second << endl;
        ++it;
    }
}
void student::addStudent(map<int, string>& addStu_data)
{
    it= addStu_data.begin();
    cout << "Enter Student RollNumber: ";
    cin >> rollNo;
    cout << "Student Name: ";
    cin >> name;
    addStu_data[rollNo] = name;
}
