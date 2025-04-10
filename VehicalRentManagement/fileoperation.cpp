#include "fileoperation.h"
#include <iostream>
#include <fstream>
using namespace std;
Fileoperation::Fileoperation()
{
    cout<<"Fileoperation constructor called"<<endl;
}
Fileoperation::~Fileoperation()
{
    cout<<"Fileoperation destructor called"<<endl;
}
void Fileoperation::writeBikeData(std::list<RentalBike> bikelist)
{
    ofstream file("bike.csv",ios::app);
    for(auto i=bikelist.begin();i!=bikelist.end();i++)
    {
        file<<i->getvehicalNumber()<<" "<<i->getbrand()<<" "
             <<i->getmodel()<<" "<<i->getrentprice()<<" "
             <<i->getstatus()<<"\n";
    }
    file.close();
}
list<RentalBike> Fileoperation::readBikeData()
{
    list<RentalBike> bikelist;
    ifstream file("bike.csv");
    string vechical_number, brand, model, status, rentpriceStr;
    float rentprice;

    while (getline(file, vechical_number, ',') &&
           getline(file, brand, ',') &&
           getline(file, model, ',') &&
           file>>rentprice && file.ignore()&&
           getline(file, status))
    {

        bikelist.push_back(RentalBike(vechical_number, brand, model, rentprice, status));
    }

    file.close();
    return bikelist;
}
void Fileoperation::writeCarData(std::list<RentalCar> carlist)
{
    ofstream file("car.csv",ios::app);
    for(auto i=carlist.begin();i!=carlist.end();i++)
    {
        file<<i->getvehicalNumber()<<","<<i->getbrand()<<","
             <<i->getmodel()<<","<<i->getrentprice()<<","
             <<i->getstatus()<<"\n";
    }
    file.close();
}
list<RentalCar> Fileoperation::readCarData()
{
    list<RentalCar> carlist;
    ifstream file("car.csv");
    string vechical_number, brand, model, status, rentprice;
    float rentPrice;

    while (getline(file, vechical_number, ',') &&
           getline(file, brand, ',') &&
           getline(file, model, ',') &&
           file>>rentprice && file.ignore()&&
           getline(file, status))
    {

        carlist.push_back( RentalCar(vechical_number,brand, model, rentPrice, status));
    }

    file.close();
    return carlist;
}
void Fileoperation:: writeCustomerdatabike(std::list<Customer> customerlist)
{
    ofstream file("customerdatabike.csv",ios::app);
    for(auto i=customerlist.begin();i!=customerlist.end();i++)
    {
        file<<i->getCustomerName()<<","<<i->getidProof()<<","<<i->getAge()<<","<<i->getPhnum()<<"\n";
    }
    file.close();
}
list<Customer> Fileoperation::readcustomerdatabike()
{
    list<Customer> customerlist;
    ifstream file("customerdatacar.csv");
    string customer_name, idproof, phnum;
    int age;

    while (getline(file, customer_name, ',') &&
           getline(file, idproof, ',') &&
           file >> age &&
           file.ignore() &&
           getline(file, phnum))
    {
        Customer cust(customer_name, idproof, age, phnum, nullptr);
        customerlist.push_back(cust);
    }

    file.close();
    return customerlist;
}
list<Customer> Fileoperation::readcustomerdatacar()
{
    list<Customer> customerlist;
    ifstream file("customerdatacar.csv");
    string customer_name, idproof, phnum;
    int age;

    while (getline(file, customer_name, ',') &&
           getline(file, idproof, ',') &&
           file >> age &&
           file.ignore() &&
           getline(file, phnum))
    {
        Customer cust(customer_name, idproof, age, phnum, nullptr);
        customerlist.push_back(cust);
    }

    file.close();
    return customerlist;
}

void Fileoperation::writeCustomerdatacar(list<Customer> customerlist)
{
    ofstream file("customerdatacar.csv", ios::app);
    for(auto i=customerlist.begin();i!=customerlist.end();i++)
    {
         file<<i->getCustomerName()<<","<<i->getidProof()<<","<<i->getAge()<<","<<i->getPhnum()<<"\n";
    }
    file.close();
}


// void Fileoperation::writeAdminData(list<Admin> adminlist)
// {
//     ofstream file("AdminData.csv",ios::app);
//     for(auto i=adminlist.begin();i!=adminlist.end();i++)
//     {
//         file<<i->getusername()<<","<<i->getpassword()<<"\n";
//     }
//     file.close();
// }
// list<Admin> Fileoperation::readAdminData()
// {
//     list<Admin*> adminlist;
//     ifstream file("AdminData.csv");
//     string username,password;
//     while(getline(file,username,',')&& getline(file,password,','))
//     {
//         adminlist.push_back(new Admin(username,password));
//     }
//     file.close();
// }
// void Fileoperation::wirteUserData(list<User> userlist)
// {
//     ofstream file("UserData.csv",ios::app);
//     for(auto i=userlist.begin();i!=userlist.end();i++)
//     {
//         file<<i->getusername()<<","<<i->getpassword()<<","
//              <<i->getphonenumber()<<","<<i->getemailid()<<"\n";
//     }
//     file.close();
// }
// list<User> Fileoperation::readUserData()
// {
//     list<User*> userlist;
//     ifstream file("UserData.csv");
//     string username,password,phonenumber,emailid;
//     while(getline(file,username,',')&& getline(file,password,',')
//            && getline(file,phonenumber,',')&& getline(file,emailid,','))
//     {
//         userlist.push_back(new User(username,password,phonenumber,emailid));
//     }
//     file.close();
// }
