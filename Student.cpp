#include "Student.hpp"

using namespace std;

Student::Student(const string name, 
                 const string lastName, 
                 const int64_t pesel, 
                 const bool gender,      // true - male, false - female
                 const string address,
                 const int32_t index) 
    : Person(name, lastName, pesel, gender, address)
    , index_(index) {}

int32_t Student::getIndex() const {
    return index_;
}

void Student::show() {
    cout << name_ << " " << lastName_ << " " << pesel_ << " " 
         << (gender_ ? "male " : "female ") << address_ << " "
         << index_ << endl;
}
