#include "CSVRead.h"

#include <iostream>
#include<fstream>

using namespace std;


CSVRead::CSVRead(string Inputfile, string Outputfile){
    this->Inputfile = Inputfile;
    this->Outputfile = Outputfile;
}

CSVRead::~CSVRead(){

}

