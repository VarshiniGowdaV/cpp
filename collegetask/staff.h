#ifndef STAFF_H
#define STAFF_H
#include <iostream>
using namespace std;
#include <vector>

class Staff
{
private:
    int id;
    std::string name;
    std::string department;
public:
    Staff();
    ~Staff();
    Staff(int id,std::string name,std::string department);
    vector<Staff>stafflist;

    void display() const;
    void displaystaff() const;

    void addstaff(int id,std::string name,std::string department);
    void deletestaff(int id);
    void updatestaff(int id);
    void findstaff(int id);

    int getid();
    void setdetails(string name,string department);
};
#endif
