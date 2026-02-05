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

    
}