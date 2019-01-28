#include "DataBase.hpp"

using namespace std;


ostream& operator << (ostream& stream_out, Person p){  
    stream_out << p.name << " " << p.lastName << " " << p.pesel << " " << p.gender << " " << p.adress << " " << p.income;
    return stream_out; 
}
  
ostream& operator << (ostream& stream_out, Student s){  
    stream_out << s.name << " " << s.lastName << " " << s.pesel << " " << s.gender << " " << s.adress;
    return stream_out; 
}




istream& operator >> (istream& stream_in, Person &p){  
    stream_in >> p.name >> " " >> p.lastName >> " " >> p.pesel >> " " >> p.gender >> " " >> p.adress >> " " >> p.income;
    return stream_in; 
}



istream& operator >> (istream& stream_in, Student &s){  
    stream_in >> s.name >> " " >> s.lastName >> " " >> s.pesel >> " " >> s.gender >> " " >> s.adress;
    return stream_in; 
}







void Database::sortByPESEL() {
    std::sort(begin(db_), end(db_), [](Person * one, Person * two) {
        return one->getPESEL() < two->getPESEL();
    });
}

void Database::addItem(Person * person) {
    db_.emplace_back(person);
}

void Database::showAll() {
    for (auto x : db_) x->show();
}

void Database::sortByLastname() {
    std::sort(begin(db_), end(db_), [](const Person * one, const Person * two) {
        return one->getLastName() < two->getLastName();
    });
}

void Database::sortByIncome() {
    std::sort(begin(db_), end(db_), [](Person * one, Person * two) {
        Employee* e1 = dynamic_cast<Employee*>(one);
        Employee* e2 = dynamic_cast<Employee*>(two);
        return (e1 ? e1->getIncome() : 0) > (e2 ? e2->getIncome() : 0);
    });
}
