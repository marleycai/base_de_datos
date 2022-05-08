#include <iostream>
#include <fstream>
#include <string>
#include "Student.hpp"
#include "Course.hpp"
using namespace std;


class AttendanceManagement 
{
    public: 
    AttendanceManagement();

    virtual ~AttendanceManagement();
    
   void takeAttendance(Student *student ,Course *course ,string time , bool assisted); 

    void showAttendance();
};