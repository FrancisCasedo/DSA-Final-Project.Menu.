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
    string address;
    string DegreeList[5] = {"Bachelor of Science in Computer Science", "Bachelor of Science in Information Technology", "Bachelor of Science in Computer Engineering", "Bachelor of Science in Information Systems", "Bachelor of Science in Information Technology with Specialization in Cybersecurity"};
    string degreeInput;
    string degree;
    string yearList[4] ={"1st year","2nd Year","3rd Year","4th year"};
    string yearLevel;
    string yearLevelInput;
    string Gender;

    do {
        cout << "Student Name: ";
        cin >> NameInput;
        cin.ignore();
        bool validname = true;

        for (char c : NameInput) {
            if (!isdigit(c)) {
                validname = false;
                cout << "Please enter a valid name"<< endl;
                system("PAUSE");
                break;
            }else{
                Name = NameInput;
            }
        }

    } while (true);

    do {
        cout << "Gender (M/F): ";
        getline(cin,Gender);
        cin.ignore();
        if (Gender != "M" && Gender != "m" && Gender != "F" && Gender != "f") {
            cout << "Input is not included in the options" << endl;
            system("PAUSE");
        }
    } while (Gender != "M" && Gender != "m" && Gender != "F" && Gender != "f");

//Inputting the student's birthday
    do {
        cout << "Month: ";
        cin >> monthInput;
        cin.ignore();
        bool validmonth = true;

        for (char c : monthInput) {
            if (!isdigit(c)) {
                validmonth = false;
                cout << "Please enter a valid month (01 - 12)." << endl;
                system("PAUSE");
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
                system("PAUSE");
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
                system("PAUSE");
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
                system("PAUSE");
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
                system("PAUSE");
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

//Inputting the student's Degree
do{
    cout << "Degree: " << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << "[" << i + 1 << DegreeList[i] << "]" <<  endl;
    }
    cout << ": ";
    getline(cin,degreeInput);


    if (degreeInput.length() == 1){
        if(degreeInput == "1"|| degreeInput == "2"|| degreeInput == "3"|| degreeInput == "4" || degreeInput == "5"){
            degree = DegreeList[stoi(degreeInput) - 1];
        }
    }else{
    degreeInput = " ";
    cout << "Invalid Input, input a number from 1 - 5" << endl;
    system("PAUSE");
     }
     
    }while(degreeInput == " ");

//Inputting the student's year level
    do{
    cout << "Year Level [1-4]" << endl;
    for (int i = 0; i < 4; i++)
    {
        cout << "[" << i + 1 << yearList[i] << "]" <<  endl;
    }
    cout << ": ";
    cin >> yearLevelInput;

    if (yearLevelInput.length() == 1 ){
        if( yearLevelInput == "1"|| yearLevelInput == "2"|| yearLevelInput == "3"|| yearLevelInput == "4" || yearLevelInput == "5" ){
            yearLevel = yearList[stoi(yearInput) - 1];
        }
    }else{
        yearLevelInput = " ";
        cout << "Invalid Input, input a number from 1 - 4" << endl;
        system("PAUSE");
    }
    }while (yearLevelInput == " ");

    StudentList student(Name, yearLevel, ID, birthday, address, degree, Gender[0]);

    
}