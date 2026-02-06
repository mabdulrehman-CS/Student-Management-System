#include<iostream>
#include<string>
#include<fstream>
using namespace std;

const int m_s = 100;
int total = 0;
string subject1;
string subject2;
string subject3;
int j;
struct info {
    string name;
    string reg;
    string dept;
    string section;
};

struct sub1 {
    float quiz;
    float assignments;
    float mids;
    float terminal;
    struct info Add1;
};

sub1 sb1[m_s];

struct sub2 {
    float quiz;
    float assignments;
    float mids;
    float terminal;
    struct info Add2;
};

sub2 sb2[m_s];

struct sub3 {
    float quiz;
    float assignments;
    float mids;
    float terminal;
    struct info Add3;
};

sub3 sb3[m_s];

void saveData();
void enter();
void show();
void search();
void update();
void loadData();
void gpa_finder();
void deleteAllRecords();
void deleteRecord();

int main(){
    loadData();

    char value;
    while (true) {
        cout << "----------------------------------------------------------------------------------------" << endl;
        cout << "\t\tEnter an option\t\t" << endl;
        cout << "----------------------------------------------------------------------------------------" << endl;
        cout << "->Press 1 to Enter Data: " << endl;
        cout << "->Press 2 to Show Data: " << endl;
        cout << "->Press 3 to Search Data: " << endl;
        cout << "->Press 4 to Update Data: " << endl;
        cout << "->Press 5 to Find GPA:" << endl;
        cout << "->Press 6 to Delete All Records:" << endl;
        cout << "->Press 7 to Delete a single Record:" << endl;
        cout << "->Press 0 to exit from program"<<endl;

        cout << endl;
        cout << "Enter the value: ";
        cin >> value;
        cin.ignore();

        switch (value) {
            case '1':
                enter();
                saveData();
                break;
            case '2':
                show();
                break;
            case '3':
                search();
                break;
            case '4':
                update();
                saveData();
                break;
            case '5':
                gpa_finder();
                break;
            case '6':
                deleteAllRecords();
                saveData();
                break;
            case '7':
                deleteRecord();
                saveData();
                break;
            case('0'):
            	return false;
            default:
                cout << "Invalid input" << endl;
                break;
        }
    }

    return 0;
}