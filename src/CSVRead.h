#ifndef _CSVREAD_H_
#define _CSVREAD_H_

#include <iostream>
#include <fstream>

using namespace std;
class CSVRead{
private:
    //Variables For file names
    string Inputfile;
    string Outputfile;

    //File Call Section

public:
    //
    CSVRead(string Inputfile, string Outfutfile);
    ~CSVRead();


};



#endif