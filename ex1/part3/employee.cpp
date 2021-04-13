#include "employee.h"

void employee::load(string id)
{
    employee temp;
    int size;
    int i = 1;
    fstream file("emps.bin", ios::in | ios::binary);
    if(!file.is_open())
    {
        cerr << "Couldn't open file!\n";
        exit(42);
    }

    while (!file.eof())
    {
        file.read((char * ) & size, sizeof(int));
        char* temp_id = new char[size + 1];
        file.read(temp_id, size);
        file.read((char*)& temp._salary, sizeof(int));
        file.read((char*)& temp._seniority, sizeof(int));
        temp._id = temp_id;

        if (temp._id == id)
        {
            _id = temp._id;
            _salary = temp._salary;
            _seniority = temp._seniority;
            file.close();
            return;
        }
    }
    file.close();
}

void employee::save()
{
    int size = _id.size();
    fstream file("emps.bin", ios::out | ios::binary | std::ios_base::app);
    if(!file.is_open())
    {
        cerr << "Couldn't open file!\n";
        exit(42);
    }
    file.write((char*)& size, sizeof(int));
    file.write( _id.c_str(), size);
    file.write((char*)& _salary, sizeof(int));
    file.write((char*)& _seniority, sizeof(int));
    file.close();
}

void employee::print()
{
    cout << "PRINT:\nID: " << _id << endl;
    cout << "Salary: " << _salary << endl;
    cout << "Seniority: " << _seniority << endl;
}
