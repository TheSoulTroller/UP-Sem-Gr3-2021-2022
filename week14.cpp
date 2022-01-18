#include <iostream>
#include <cmath>
#include <random>

using namespace std;

struct Student
{
    char name[20];
    float averageScore;
    int facultyNum;
    bool hasPassed;

    void createStudent()
    {
        cout << "Enter name: ";
        cin.getline(name, 20, '\n');

        cout << endl << "Enter average grade: ";
        cin >> averageScore;
        while(averageScore < 2.5 || averageScore > 6.0)
        {
            cout << "Invalid grade!"
                 << "\nEnter average grade: ";
            cin >> facultyNum;
        }

        cout << endl << "Enter faculty number: ";
        cin >> facultyNum;
        while (facultyNum < 7000 || facultyNum > 8000)
        {
            cout << "Invalid faculty number!"
                 << "\nEnter faculty number: ";
            cin >> facultyNum;
        }

        char passed;
        cout << endl
             << "Has the student passed (y/n): ";
        cin >> passed;
        while (passed != 'y' && passed != 'n')
        {
            cout << "Invalid input! "
                 << "\nHas the student passed (y/n): ";
            cin >> passed;
        }

        hasPassed = passed == 'y' ? 1:0;
    }

    void cmpAverageScore(Student other)
    {
        if(averageScore > other.averageScore)   cout << "Student 1 has better average score!";
        else    cout << "Student 2 has better average score!"; 
    }

    void cmpFacultyNum(Student other)
    {
        if(facultyNum > other.facultyNum)   cout << "Student 1 has greater faculty number!";
        else    cout << "Student 2 has greater faculty number!";
    }

    void cmpHasPassed(Student other)
    {
        if(!hasPassed && !other.hasPassed)  cout << "Neither of the students passed their exams!";
        else if(hasPassed && !other.hasPassed)  cout << "Student 1 has passed and Student 2 has NOT passed!";
        else if(!hasPassed && other.hasPassed)  cout << "Student 1 has NOT passed and Student 2 has passed!";
        else cout << "Both student have passed their exams!";
    }

    void print()
    {
        cout << "Student name: " << name << endl;

        cout << "Average grade: " << averageScore << endl;

        cout << "Faculty number: " << facultyNum << endl;

        if(hasPassed) cout << "Student HAS passed his exams!" << endl;
        else cout << "Student has NOT passed his exams!" << endl;  
        cout << endl;
    }
};

int main()
{
    Student a, b;

    a.createStudent();
    b.createStudent();

    cout << endl << "List with all the students: " << endl;
    a.print();
    b.print();

    return 0;
}