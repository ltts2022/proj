//Rahul Kumar
#pragma once
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
namespace student {
	void addStudent(map<int, string>& addStu_data);
	void delete_data(map<int, string>& stu_data);
	void display_data(map<int, string>& stu_data);
	/*map<int, string>::iterator it;
	string name;
	int rollNo,checkRoll;
	char studentOpt;
	int op;*/

}