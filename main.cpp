#include <iostream>

using namespace std;

void menuShow() {
    cout << endl << "Program option:" << endl;
    cout << "1. Show students list" << endl;
    cout << "2. Add new student" << endl;
	cout << "3. Add new employee" << endl;
    cout << "4. Search by last name" << endl;
    cout << "5. Search by PESEL" << endl;
    cout << "6. Remove by PESEL" << endl ;
    cout << "7. Modify emplyee by PESEL" << endl;
    cout << "8. Sort by salary" << endl;
    cout << "9. Sort by PESEL" << endl;
	cout << "10. Sort by last name" << endl;
	cout << "11. Exit" << endl;
}

int main() {
    char option;

    // Clear terminal
    cout << "\033[2J\033[1;1H";

    do {   
        menuShow();
        cin >> option;

        switch (option) {
            case '1' :
                cout << "Show students list" << endl;
                break;
            case '2' : 
                cout << "Add new student" << endl;
                break;
			case '3' : 
                cout << "Add new employee" << endl;
                break;
			case '4' : 
                cout << "Search by last name" << endl;
                break;
			case '5' : 
                cout << "Search by PESEL" << endl;
                break;
            case '6' : 
                cout << "Remove by PESEL" << endl ;
                break;
			case '7' : 
                cout << "Modify emplyee by PESEL" << endl;
                break;
            case '8' : 
                cout << "Sort by salary" << endl;
                break;
			case '9' : 
                cout << "Sort by PESEL" << endl;
                break;
			case '10' : 
                cout << "Sort by last name" << endl;
                break;
            case '11' : 
                cout << "Exit (save to file)" << endl;
                break;
            default : 
                cout << "Unknown option " << option << "!" << endl;
                break;
        }
    } while (option != '11');
    
    return 0;
}
