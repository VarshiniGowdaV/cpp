#ifndef FILEHANDLING_H
#define FILEHANDLING_H
// #include "bike.h"
// #include "car.h"
 #include "custamerdetails.h"
// #include "rentmanager.h"
#include <vector>
class FileHandling
{
private:
     vector<Bike*> bikelist;
     vector<Car> carList;
     vector<CustomerDetails*> customerList;

public:
    FileHandling();
    ~FileHandling();

    void writeBikeData(std::vector<Bike>bikelist);
    vector<Bike*> readBikeData();

    void writeCarData(std::vector<Car>carList);
    vector<Car*> readCarData();

    void writeCustamerDetails(std::vector<CustomerDetails> customerList);
    vector<CustomerDetails*> readCustamerData();
};

#endif // FILEHANDLING_H
