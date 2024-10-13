#include "Write.h"
#include <fstream>
#include <iostream>
using namespace std;
Write::Write()
{
    cout << "Write Constructor Called" << endl;
}
Write::~Write()
{
    cout << "Write Destructor Called " << endl;
}
void Write::WriteFile()
{
    ofstream ofile;
    ofile.open("shapes.dat");
    ofile << "Data Written to File" << endl;
    cout << "Data written to file" << endl;
    ofile.close();
}
void Write::Display7() {
    cout << "This is a Write " << endl;
}

