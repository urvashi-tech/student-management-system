

# Student Management System (C++)

## 1. Introduction
This project is a simple Student Management System developed using C++. It is designed to store and manage student details such as ID and Name. The system follows a menu-driven approach, allowing users to perform basic operations easily. This project helps beginners understand how programming concepts can be applied to real-world scenarios.

---

## 2. Objectives of the Project
- To understand the basic concepts of C++ programming
- To implement a simple real-world application
- To practice the use of arrays, loops, and conditions
- To develop problem-solving and logical thinking skills

---

## 3. Methodology / System Design
The system is designed using a menu-driven approach.

Working Process:
1. The program displays a menu with different options.
2. The user selects an option.
3. The program performs the selected operation.
4. The process continues until the user chooses to exit.

System Features:
- Add Student details
- Display all students
- Exit the program

Data Storage:
- Student data is stored using arrays.
- A variable is used to keep track of the number of students.

---

## 4. Implementation / Source Code

The project is implemented using basic C++ programming constructs.

### Variable Declaration
Arrays are used to store student data:
- `id[]` stores student IDs
- `name[]` stores student names
- `n` keeps track of total number of students

### Menu System
A `do-while` loop is used to repeatedly display the menu until the user selects the exit option.

### Add Student Logic
When the user selects the "Add Student" option:
- The program takes ID and Name as input
- Stores them in arrays
- Increases the student count using `n++`

### Display Student Logic
When the user selects the "Display Students" option:
- A loop runs from 0 to `n-1`
- All stored student records are displayed

### Exit Condition
The program terminates when the user selects the exit option.

### Source Code
```cpp
#include<iostream>
using namespace std;

int id[10];
string name[10];
int n = 0;

int main()
{
    int choice;

    do
    {
        cout<<"\n1 Add Student";
        cout<<"\n2 Display Students";
        cout<<"\n3 Exit";

        cout<<"\nEnter choice: ";
        cin>>choice;

        if(choice==1)
        {
            cout<<"Enter ID: ";
            cin>>id[n];

            cout<<"Enter Name: ";
            cin>>name[n];

            n++;
        }

        else if(choice==2)
        {
            for(int i=0;i<n;i++)
            {
                cout<<id[i]<<" "<<name[i]<<endl;
            }
        }

    }while(choice!=3);

    return 0;
}

                                            ###Conclusion


this project helped in understanding the basic concepts of C++ such as arrays, loops, and conditional statements. It also demonstrated how a simple system can be built to manage data efficiently. The project can be further improved by adding features like search, delete, and file handling.
