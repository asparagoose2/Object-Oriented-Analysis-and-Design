#pragma once
#include <string>
#include <iostream>
#include <fstream>

using namespace std;

class employee
{
public:
    string _id;
    unsigned int _salary;
    unsigned int _seniority;

public:
    employee(string id,unsigned int salary,unsigned int seniority) : _id(id) , _salary(salary), _seniority(seniority) {}
    employee() : _salary(0), _seniority(0) {}
    ~employee() {}

    void load(string);
    void save();

    void print();
};

