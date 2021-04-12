#include "employee.h"


void employee::load()
{
    fstream file("emps.bin", ios::in | ios::binary);
    int size;
    file.read((char * ) & size, sizeof(int));
    file.read((char * ) & *this, sizeof(employee));
    cout << "LOAD:\nID: " << _id << endl;
    cout << "Salary: " << _salary << endl;
    cout << "Seniority: " << _seniority << endl;
}
void employee::load(string id)
{
    employee temp;
    int size;
    int i = 1;
    fstream file("emps.bin", ios::in | ios::binary);

    while (!file.eof())
    {
        file.read((char * ) & size, sizeof(int));
        file.read((char * ) & temp, size);
        cout << i++ <<") " << size << " , " << temp._id << endl;

        if (temp._id == id)
        {
            _id = temp._id;
            _salary = temp._salary;
            _seniority = temp._seniority;
            return;
        }
    }
}

void employee::save()
{
    int size = sizeof(*this);
    fstream file("emps.bin", ios::out | ios::binary | std::ios_base::app);
    file.write((char*)& size, sizeof(int));
    file.write((char*)& *this, sizeof(*this));
    cout << "SAVE:\nID: " << _id << endl;
    cout << "Salary: " << _salary << endl;
    cout << "Seniority: " << _seniority << endl;
    cout << "SIZE: " << size << endl;
}

void employee::print()
{
    cout << "PRINT:\nID: " << _id << endl;
    cout << "Salary: " << _salary << endl;
    cout << "Seniority: " << _seniority << endl;
}
