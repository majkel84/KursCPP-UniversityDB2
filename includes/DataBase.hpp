#include <vector>
#include <string>
#include <algorithm>
#include "Student.hpp"
#include "Employee.hpp"
#include "PeselValidation.hpp"

using namespace std;
using Persons = vector<Person*>;

class Database {
    public:
        void addItem(Person * person);
        void removeByPESEL(const uint32_t pesel);
        void modifyIncome(const uint newIncome, const uint32_t pesel);
        void modifyAddress(const string newAddress, const uint32_t pesel);
        void sortByLastname();
        void sortByPESEL();
        void sortByIncome();
        void searchByLastname(const string lastname, Person* item);
        void searchByPESEL(const uint32_t pesel, Person* item);
        void showAll();
        bool validatePESEL(uint32_t pesel);
        bool loadFromFile(const string filename);
        bool saveToFile(const string filename);

    private:
        Persons db_;
};
