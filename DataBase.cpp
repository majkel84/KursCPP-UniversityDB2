#include "DataBase.hpp"
#include <iostream>
#include <string>
#include <iomanip>
#inlcude <fstream>

using namespace std;

//overloading of << operator 
ostream& operator << (ostream& stream_out, Person p) 
{  
  stream_out << p.name << " " << p.lastName << " " << p.pesel << " " << p.gender << " " << p.adress << " " << p.income;
  return stream_out; 
}
  
//overloading of >> operator 
istream& operator >> (istream& stream_in, Person &p) 
{  
  stream_in >> p.name >> " " >> p.lastName >> " " >> p.pesel >> " " >> p.gender >> " " >> p.adress >> " " >> p.income;
  return stream_in; 
}
  

