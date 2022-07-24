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

namespace ltts {

    class student {
    public:
		student(){};
        void addStudent(map<int, string>& addStu_data);
        void delete_data(map<int, string>& stu_data);
        void display_data(map<int, string>& stu_data);
		string name;
		int rollNo,checkRoll;
		char studentOpt;
		int op;
		map<int, string>::iterator it;
    };

}//end of namespace