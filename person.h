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
namespace Person {
	void addPerson(map<int, string>& addPerson_data);
	void delete_data(map<int, string>& Person_data);
	void display_data(map<int, string>& Person_data);
	map<int, string>::iterator it;
	string name;
	int street_number,roll_number;
	char PersonOpt;
	int op;
}