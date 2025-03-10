#ifndef MAGAMENT_H
#define MAGAMENT_H
#include <list>
#include <vector>
#include<iostream>
using namespace std;
class Student;
class Staff;
class Magament
{
private:
    std::list<Student>*m_studentData;
    std::vector<Staff>*m_staffData;
public:
    Magament();
    ~Magament();

    void addStudent(int id, std::string name, int age, std::string department, std::string mobile_number, std::string address);
    void deleteStudent(int id);
    void updateStudent(int id, std::string name, int age,std::string department,std::string mobile_number,std::string address);
    void displayStudent();

    void addStaff( int id,std::string name,int age,std::string department,std::string mobile_number,std::string address ,float salary);
    void deleteStaff(int id);
    void updateStaff(int id,std::string name,int age,std::string department,std::string mobile_number,std::string address ,float salary);
    void displayStaff();

};

#endif // MAGAMENT_H
