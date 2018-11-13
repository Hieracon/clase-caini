#ifndef CLASE_CAINI_H_INCLUDED
#define CLASE_CAINI_H_INCLUDED

#include <iostream>
#include <cstring>

using namespace std;

class Caine{
public:
    char name[15];
    int hight;
    int weight;
    int age;
    char color[10];

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
