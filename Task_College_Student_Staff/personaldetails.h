#ifndef PERSONALDETAILS_H
#define PERSONALDETAILS_H
#include <iostream>
using namespace std;
class PersonalDetails
{
protected:
    int m_id;
    std::string m_name;
    int m_age;
    std::string m_mobile_number;
    std::string m_address;

public:
    PersonalDetails();
    ~PersonalDetails();
};
;

#endif // PERSONALDETAILS_H
