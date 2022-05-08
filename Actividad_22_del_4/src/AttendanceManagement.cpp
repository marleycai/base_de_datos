#include "../include/AttendanceManagement.hpp"
#include <fstream>

AttendanceManagement::AttendanceManagement()
{

}
AttendanceManagement::~AttendanceManagement()
{

}
void AttendanceManagement::takeAttendance(Student *student, Course *course , string time,bool assisted ){

    ofstream file;

    file.open("data.csv",ofstream::app);
    file << student->getIdentifier();
    file << "," ; 
    file << student->getName();
    file << "," ; 
    file << student->getSurname();
    file << "," ; 
    file << course->getIdentifier();
    file << "," ; 
    file << course->getName();
    file << "," ; 
    file << time;
    file << "," ;
    file << assisted;
    file << "\n" ;
    file.close();

}
    void AttendanceManagement::showAttendance(){
       
    ifstream file("data.csv");
    char linea[128];
    long contador = 0L;

    if(file.fail())
    cerr << "Error al abrir el file Pruebas.txt" << endl;
    else
    while(!file.eof())
    {
        file.getline(linea, sizeof(linea));
        cout << linea << endl;
        if((++contador % 24)==0)
        {
            cout << "CONTINUA...";
            cin.get();
        }
    }
    file.close();

} 
    

