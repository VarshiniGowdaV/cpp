#ifndef LIGHT_H
#define LIGHT_H
#include "wire.h"
#include <iostream>
using namespace std;
class Wire;
class Light
{
private:
    string m_brand;
    string m_colour;
    //Wire *wire;
public:
    Light(string brand,string colour);
    Light();
    ~Light();
     Light(const Light& light1);
    void  operator =(Light light);

    void lightOn();
};

#endif // LIGHT_H
