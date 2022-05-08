#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
using namespace std;

class Student{
  private:
   int _identifier;
   string _name;
   string _surname;

  public:
   Student();
   
   void setIdentifier(int);
   void setName(string);
   void setSurname(string);
   int getIdentifier();
   string getName();
   string getSurname();
};
#endif 