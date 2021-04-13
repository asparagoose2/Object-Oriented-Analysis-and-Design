#include <iostream>
#include <map>
#include <cstring>
#include "employee.h"

using namespace std;

int main(int argc, char const *argv[])
{
    // employee ofir("3155",1200000000,47);
    // employee omer("2089", 21, 88);
    // ofir.save();
    // omer.save();
    employee shahar;
    // employee emps[10];
    // for (int i = 0; i < 10; i++)
    // {
    //     emps[i]._id = (string("id") + to_string(i));
    //     emps[i]._salary = 1000+i;
    //     emps[i]._seniority = 10+i;
    // }

    // for (size_t i = 0; i < 10; i++)
    // {
    //     emps[i].save();
    // }   
    shahar.load("id7"); 
    shahar.print();
    cout << "end";


    // map<int,int> M;
    // M.insert(pair<int,int>(1,15));
    // M.insert(pair<int,int>(2,4));
    // M.insert(pair<int,int>(3,150));
    // M[7] = 32;

    // std::map<int,int>::iterator it;

    // int s = 3;

    // it = M.find(2);
    // M.erase(s);

    // if(M[s])
    //     cout << "here";



    return 0;
}

