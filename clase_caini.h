#ifndef CLASE_CAINI_H_INCLUDED
#define CLASE_CAINI_H_INCLUDED

#include <iostream>
#include <cstring>

using namespace std;

class Caine{
public:
    string name;
    int hight;
    int weight;
    int age;
    string color;

    void get_details();
    void display();
};

class CaineCuPete:public Caine{
public:
    int nr_spots;

    void spots();
};

class CaineFaraPete:public Caine{

};

#endif // CLASE_CAINI_H_INCLUDED
