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

void enter(){
	int choice;
	if(total==0)
	{
	cout<<"How many students you want to add:  ";
	cin>>choice;
	cin.ignore();
	cout<<"Enter the name of subject 1: ";
	getline(cin,subject1);
	cout<<"Enter the name of subject 2: ";
	getline(cin,subject2);
	cout<<"Enter the name of subject 3: ";
	getline(cin,subject3);
	total+=choice;
	for(int i=0;i<choice;i++)
	{
		cout<<"Enter data of Student"<<i+1<<":"<<endl<<endl;
		cout<<"Enter the Name: ";
		getline(cin,sb1[i].Add1.name);
		cout<<"Enter the Registration No: ";
		getline(cin,sb1[i].Add1.reg);
		cout<<"Enter the Department: ";
		getline(cin,sb1[i].Add1.dept);
		cout<<"Enter the Section: ";
		getline(cin,sb1[i].Add1.section);
		cout<<"Enter Marks Of Subject "<<subject1<<" : "<<endl<<endl;
	do
		 {cout<<"Enter the Quiz marks[Between 0 to 15]: ";
		 cin>>sb1[i].quiz;}
		while(sb1[i].quiz>15||sb1[i].quiz<0);
		
		do
		{cout<<"Enter the Assignment marks:[Between 0 to 10] ";
		cin>>sb1[i].assignments;}
		while(sb1[i].assignments>10||sb1[i].assignments<0);
		do{
		cout<<"Enter the Midterm marks: ";
		cin>>sb1[i].mids;}
		while(sb1[i].mids>25||sb1[i].mids<0);
		do{
		cout<<"Enter the Terminal marks: ";
		cin>>sb1[i].terminal;}
		while(sb1[i].terminal>50||sb3[i].terminal<0);
		cin.ignore();

		cout<<"Enter Marks Of Subject "<<subject2<<" : "<<endl<<endl;
		do
		 {cout<<"Enter the Quiz marks[Between 0 to 15]: ";
		 cin>>sb2[i].quiz;}
		while(sb2[i].quiz>15||sb2[i].quiz<0);
		
		do
		{cout<<"Enter the Assignment marks:[Between 0 to 10] ";
		cin>>sb2[i].assignments;}
		while(sb2[i].assignments>10||sb2[i].assignments<0);
		do{
		cout<<"Enter the Midterm marks: ";
		cin>>sb2[i].mids;}
		while(sb2[i].mids>25||sb2[i].mids<0);
		do{
		cout<<"Enter the Terminal marks: ";
		cin>>sb2[i].terminal;}
		while(sb2[i].terminal>50||sb2[i].terminal<0);
		cin.ignore();
		cout<<"Enter Marks Of Subject "<<subject3<<" : "<<endl<<endl;
		
		do
		 {cout<<"Enter the Quiz marks[Between 0 to 15]: ";
		 cin>>sb3[i].quiz;}
		while(sb3[i].quiz>15||sb3[i].quiz<0);
		do
		{cout<<"Enter the Assignment marks:[Between 0 to 10] ";
		cin>>sb3[i].assignments;}
		while(sb3[i].assignments>10||sb3[i].assignments<0);
		do{
		cout<<"Enter the Midterm marks: ";
		cin>>sb3[i].mids;}
		while(sb3[i].mids>25||sb3[i].mids<0);
		do{
		cout<<"Enter the Terminal marks: ";
		cin>>sb3[i].terminal;}
		while(sb3[i].terminal>50||sb3[i].terminal<0);
		cin.ignore();
	}
	}
else{
    cout<<"How many students you want to add:  ";
	cin>>choice;
	cin.ignore();
	for(int i=total;i<total+choice;i++)
	{
		cout<<"Enter data of Student"<<i+1<<":"<<endl<<endl;
		cout<<"Enter the Name: ";
		getline(cin,sb1[i].Add1.name);
		cout<<"Enter the Registration No: ";
		getline(cin,sb1[i].Add1.reg);
		cout<<"Enter the Department: ";
		getline(cin,sb1[i].Add1.dept);
		cout<<"Enter the Section: ";
		getline(cin,sb1[i].Add1.section);
		cout<<"Enter Marks Of Subject "<<subject1<<" : "<<endl<<endl;
	do
		 {cout<<"Enter the Quiz marks[Between 0 to 15]: ";
		 cin>>sb1[i].quiz;}
		while(sb1[i].quiz>15||sb1[i].quiz<0);
		
		do
		{cout<<"Enter the Assignment marks:[Between 0 to 10] ";
		cin>>sb1[i].assignments;}
		while(sb1[i].assignments>10||sb1[i].assignments<0);
		do{
		cout<<"Enter the Midterm marks: ";
		cin>>sb1[i].mids;}
		while(sb1[i].mids>25||sb1[i].mids<0);
		do{
		cout<<"Enter the Terminal marks: ";
		cin>>sb1[i].terminal;}
		while(sb1[i].terminal>50||sb3[i].terminal<0);
		cin.ignore();

		cout<<"Enter Marks Of Subject "<<subject2<<" : "<<endl<<endl;
		do
		 {cout<<"Enter the Quiz marks[Between 0 to 15]: ";
		 cin>>sb2[i].quiz;}
		while(sb2[i].quiz>15||sb2[i].quiz<0);
		
		do
		{cout<<"Enter the Assignment marks:[Between 0 to 10] ";
		cin>>sb2[i].assignments;}
		while(sb2[i].assignments>10||sb2[i].assignments<0);
		do{
		cout<<"Enter the Midterm marks: ";
		cin>>sb2[i].mids;}
		while(sb2[i].mids>25||sb2[i].mids<0);
		do{
		cout<<"Enter the Terminal marks: ";
		cin>>sb2[i].terminal;}
		while(sb2[i].terminal>50||sb2[i].terminal<0);
		cin.ignore();
		cout<<"Enter Marks Of Subject "<<subject3<<" : "<<endl<<endl;
		
		do
		 {cout<<"Enter the Quiz marks[Between 0 to 15]: ";
		 cin>>sb3[i].quiz;}
		while(sb3[i].quiz>15||sb3[i].quiz<0);
		do
		{cout<<"Enter the Assignment marks:[Between 0 to 10] ";
		cin>>sb3[i].assignments;}
		while(sb3[i].assignments>10||sb3[i].assignments<0);
		do{
		cout<<"Enter the Midterm marks: ";
		cin>>sb3[i].mids;}
		while(sb3[i].mids>25||sb3[i].mids<0);
		do{
		cout<<"Enter the Terminal marks: ";
		cin>>sb3[i].terminal;}
		while(sb3[i].terminal>50||sb3[i].terminal<0);
		cin.ignore();
	}
	total+=choice;
}
}

void show(){
    if (total==0){
        cout<<"No Data Entered Yet."<<endl;
    }
    else
    {
    cout<<"----------------------------------------------------------------------------------------"<<endl;
    cout<<"\t\tDATA OF STUDENTS\t\t"<<endl;
    cout<<"----------------------------------------------------------------------------------------"<<endl;
    for(int i=0;i<total;i++){
        cout<<"Data of student "<<i+1<<":\n";
        cout<<"Name of the student is: "<<sb1[i].Add1.name<<endl;
        cout<<"Roll-No is: "<<sb1[i].Add1.reg<<endl;
        cout<<"Department is: "<<sb1[i].Add1.dept<<endl;
        cout<<"Section is: "<<sb1[i].Add1.section<<endl;
        cout<<"Marks Obtained in Subject "<<subject1<<" is : "<<endl<<endl;
        cout<<"Obtained Quiz Marks: "<<sb1[i].quiz<<endl;
        cout<<"Obtaind Assignment Marks: "<<sb1[i].assignments<<endl;
        cout<<"Obtained Mid Terms Marks: "<<sb1[i].mids<<endl;
        cout<<"Obtained Terminal Exam Marks: "<<sb1[i].terminal<<endl;
        cout<<"Marks Obtained in Subject "<<subject2<<" is : "<<endl<<endl;
        cout<<"Obtained Quiz Marks: "<<sb2[i].quiz<<endl;
        cout<<"Obtaind Assignment Marks: "<<sb2[i].assignments<<endl;
        cout<<"Obtained Mid Terms Marks: "<<sb2[i].mids<<endl;
        cout<<"Obtained Terminal Exam Marks: "<<sb2[i].terminal<<endl;
        cout<<"Marks Obtained in Subject "<<subject3<<" is : "<<endl<<endl;
        cout<<"Obtained Quiz Marks: "<<sb3[i].quiz<<endl;
        cout<<"Obtaind Assignment Marks: "<<sb3[i].assignments<<endl;
        cout<<"Obtained Mid Terms Marks: "<<sb3[i].mids<<endl;
        cout<<"Obtained Terminal Exam Marks: "<<sb3[i].terminal<<endl;
    	}
    }
}

void search(){
    if(total==0){
        cout<<"Invalid Input"<<endl;
    }
    else
    {
    string roll;
    cout<<"Enter Roll-No Of Student: ";
    cin>>roll;
    cin.ignore();
    for(int i=0;i<total;i++){
        if(roll==sb1[i].Add1.reg){
            cout<<"Data of student "<<i+1<<":\n";
        cout<<"Name of the student is: "<<sb1[i].Add1.name<<endl;
        cout<<"Roll-No is: "<<sb1[i].Add1.reg<<endl;
        cout<<"Department is: "<<sb1[i].Add1.dept<<endl;
        cout<<"Section is: "<<sb1[i].Add1.section<<endl;
        cout<<"Marks Obtained in Subject "<<subject1<<" is : "<<endl<<endl;
        cout<<"Obtained Quiz Marks: "<<sb1[i].quiz<<endl;
        cout<<"Obtaind Assignment Marks: "<<sb1[i].assignments<<endl;
        cout<<"Obtained Mid Terms Marks: "<<sb1[i].mids<<endl;
        cout<<"Obtained Terminal Exam Marks: "<<sb1[i].terminal<<endl;
        cout<<"Marks Obtained in Subject "<<subject2<<" is : "<<endl<<endl;
        cout<<"Obtained Quiz Marks: "<<sb2[i].quiz<<endl;
        cout<<"Obtaind Assignment Marks: "<<sb2[i].assignments<<endl;
        cout<<"Obtained Mid Terms Marks: "<<sb2[i].mids<<endl;
        cout<<"Obtained Terminal Exam Marks: "<<sb2[i].terminal<<endl;
        cout<<"Marks Obtained in Subject "<<subject3<<" is : "<<endl<<endl;
        cout<<"Obtained Quiz Marks: "<<sb3[i].quiz<<endl;
        cout<<"Obtaind Assignment Marks: "<<sb3[i].assignments<<endl;
        cout<<"Obtained Mid Terms Marks: "<<sb3[i].mids<<endl;
        cout<<"Obtained Terminal Exam Marks: "<<sb3[i].terminal<<endl;
            }
        }
    }
}
