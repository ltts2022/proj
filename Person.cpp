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
    map<int, string>::iterator it= addPerson_data.begin();
    cout << "Enter Person street number: ";
    cin >> street_number;
    cout << "Person Name: ";
    cin >> name;
    addPerson_data[street_number] = name;
}
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