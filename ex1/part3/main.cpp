#include <iostream>
#include "employee.h"
#include "../part2/ChacheMemory.h"

using namespace std;

int main(int argc, char const *argv[])
{
    cout << endl;
    employee emps[10];
    employee test_emp;
    for (int i = 0; i < 10; i++)
    {
        emps[i]._id = (string("id") + to_string(i));
        emps[i]._salary = 1000+i;
        emps[i]._seniority = 10+i;
    }

    for (size_t i = 0; i < 10; i++)
    {
        emps[i].save();
    }

    test_emp.load("id3");

    test_emp.print();
    cout << endl;

    ChacheMemory<string,employee> my_mem;

    my_mem.add("id2", emps[2]);
    my_mem.get("id2")->print();
    cout << endl;
    my_mem.get("id2")->print();
    cout << endl;
    \
    try
    {
        my_mem.erase("id5");
    }
    catch(const ObjectNotExistException& e)
    {
        std::cerr << "Object Does Not Exist!" << '\n';
    }
    
    try
    {
        my_mem.add("id5",emps[5]);
        my_mem.add("id5",emps[5]);
    }
    catch(const DuplicateKeyException& e)
    {
        std::cerr << "Duplicate Key!" << '\n';
    }
    
    return 0;
}
