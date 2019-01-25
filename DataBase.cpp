#include "DataBase.hpp"

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
