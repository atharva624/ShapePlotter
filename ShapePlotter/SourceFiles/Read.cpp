#include "Read.h"
#include<fstream> 
#include <iostream>
using namespace std;
Read::Read()
{
    cout << "Read Class Constructor " << endl;
}
Read::~Read()
{
    cout << "Read Destructor " << endl;
}
void Read::ReadFile()
{
    char data[100];
    ifstream ifile;

    ifile.open("shapes.dat");
    while (!ifile.eof())
    {
        ifile.getline(data, 100);
        cout << data << endl;
    }
    ifile.close();
}
void Read::Display8() {
    cout << "This is a Read " << endl;
}