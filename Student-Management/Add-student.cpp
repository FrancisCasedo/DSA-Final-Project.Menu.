#include <iostream>
using namespace std;

void Addstud();

struct StudentList{
    string StudName;
    string YearLevel;
    string IDNumber;
    string Birthday;
    string Address;
    string DegreeProgram;
    char Gender;
    StudentList(string Name, string Year, string ID, string Birth, string Addr, string Degr, char Gen)
        : StudName(Name), YearLevel(Year), IDNumber(ID), Birthday(Birth), Address(Addr), DegreeProgram(Degr), Gender(Gen) {}
};


int main(){
    Addstud();
}

void Addstud(){
    string Name;
    string NameInput;
    string Year;
    string ID;
    string Month;
    string monthInput;
    string Day;
    string dayInput;
    string Year;
    string yearInput;
    string birthday;
    string Degree;
    string address;
    char Gender;

    do {
        cout << "Student Name: ";
        cin >> NameInput;
        cin.ignore();
        bool validname = true;

        for (char c : NameInput) {
            if (!isdigit(c)) {
                validname = false;
                cout << "Please enter a valid name"<< endl;
                break;
            }else{
                Name = NameInput;
            }
        }

    } while (true);

    do {
        cout << "Month: ";
        cin >> monthInput;
        cin.ignore();
        bool validmonth = true;

        for (char c : monthInput) {
            if (!isdigit(c)) {
                validmonth = false;
                cout << "Please enter a valid month (01 - 12)." << endl;
                break;
            }
        }

        if (validmonth) {
            int month = stoi(monthInput);
            if (month >= 1 && month <= 12) {
                Month = monthInput;
                break;
            } else {
                cout << "Please enter a valid month (01 - 12)." << endl;
            }
        }
    } while (true);

    do {
        cout << "Day: ";
        cin >> dayInput;
        cin.ignore();
        bool validday = true;

        for (char b : dayInput) {
            if (!isdigit(b)) {
                validday = false;
                cout << "Please enter a valid day (01 - 31)." << endl;
                break;
            }
        }

        if (validday) {
            int day = stoi(dayInput);
            if (day >= 1 && day <= 31) {
                Day = dayInput;
                break;
            } else {
                cout << "Please enter a valid day (01 - 31)." << endl;
            }
        }
    } while (true);

    do {
        cout << "Year: ";
        cin >> yearInput;
        cin.ignore();
        bool validyear = true;

        for (char a : yearInput) {
            if (!isdigit(a)) {
                validyear = false;
                cout << "Please enter a valid year" << endl;
                break;
            }
        }

        if (validyear) {
            int year = stoi(yearInput);
            if (year >= 1920 && year <= 2020) {
                Year = year;
                break;
            } else {
                cout << "Please enter a valid year" << endl;
            }
        }
    } while (true);

    birthday = Day + " " + Month + " " + Year;

}