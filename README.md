# Student Management System

A comprehensive C++ console application designed to manage student records and academic performance. This project was built as part of the Programming Fundamental Course in the second semester.

## 📋 Overview

This Student Management System provides a complete solution for managing student information and academic records. The system allows users to add, view, search, update, and delete student records while maintaining persistent data storage.

## ✨ Features

### Core Functionality
- **Add Student Records**: Enter detailed student information including personal details and academic marks
- **View All Records**: Display complete information for all registered students
- **Search Records**: Search for specific students using various criteria
- **Update Records**: Modify existing student information and marks
- **Delete Records**: Remove individual student records or clear all data
- **GPA Calculator**: Automatically calculate student GPA based on marks
- **Data Persistence**: All records are saved to file and loaded automatically on program start

### Student Information Management
- Name
- Registration Number
- Department
- Section

### Academic Performance Tracking
The system tracks marks for **three subjects**, with each subject having:
- **Quiz Marks** (0-15 points)
- **Assignment Marks** (0-10 points)
- **Midterm Exam** (0-25 points)
- **Terminal Exam** (0-50 points)
- **Total per Subject**: 100 points

## 🚀 Getting Started

### Prerequisites
- C++ Compiler (GCC, MinGW, or any C++11 compatible compiler)
- Basic knowledge of C++ programming

### Compilation
```bash
g++ "Student Management System.cpp" -o StudentManagement
```

### Running the Program
```bash
./StudentManagement
```

## 📖 How to Use

Upon running the program, you'll see a menu with the following options:

1. **Enter Data** - Add new student records
2. **Show Data** - Display all existing records
3. **Search Data** - Find specific student records
4. **Update Data** - Modify existing student information
5. **Find GPA** - Calculate and display student GPA
6. **Delete All Records** - Remove all student data
7. **Delete a Record** - Remove a specific student record
0. **Exit** - Close the application

## 💾 Data Storage

The program automatically saves all student records to a file, ensuring data persistence across sessions. Data is loaded automatically when the program starts.

## 🛠️ Technical Details

- **Language**: C++
- **Programming Paradigm**: Procedural programming with structures
- **Data Structures**: Arrays and structures (structs)
- **File Handling**: Text file-based storage
- **Input Validation**: Built-in validation for mark entries

## 📝 Code Structure

The program uses three main structures to handle data for three subjects:
- `sub1`, `sub2`, `sub3` - Store marks and student information for each subject
- `info` - Nested structure for student personal information

### Key Functions
- `enter()` - Add new student records
- `show()` - Display all records
- `search()` - Search functionality
- `update()` - Update existing records
- `gpa_finder()` - Calculate GPA
- `saveData()` - Save records to file
- `loadData()` - Load records from file
- `deleteRecord()` - Delete specific record
- `deleteAllRecords()` - Clear all data

## 👨‍💻 Author

**Muhammad Abdul Rehman**

## 📄 License

This project is created for educational purposes as part of the Programming Fundamental Course.

## 🤝 Contributing

Suggestions and improvements are welcome! Feel free to fork this repository and submit pull requests.

## 📧 Contact

For any queries or suggestions, please reach out through GitHub issues.
