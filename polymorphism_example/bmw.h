#ifndef BMW_H
#define BMW_H
#include "car.h"
class BMW:public Car
{
public:
    BMW(int wheels,std::string name);
    ~BMW();
};

#endif // BMW_H
