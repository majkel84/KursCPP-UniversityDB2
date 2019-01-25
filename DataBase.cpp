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

