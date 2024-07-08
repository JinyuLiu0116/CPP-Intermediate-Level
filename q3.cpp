/*Write a C++ program using Arrays that allows the Teacher (user) to enter the grades scored
(0-100) of a student. (50 points)
The Teacher (user) will input the grades of 5 subjects (Math, English, Computer Science,
History and Physics). After all grades have been inputted, the program should display the sum
and average of the grades.
If the student scored: 95 to 100 then notify the Teacher that the letter grade is A, If the score
is 90 to 94.99 then notify the user that the letter grade is A-, If the score is 87 to 89.99 then
notify the user that the letter grade is B+ , If the score is 83 to 86.99 then notify the user that
the letter grade is B, If the score is 80 to 82.99 then notify the user that the letter grade is B-,
If the score is 77 to 79.99 then notify the user that the letter grade is C+, If the score is 73 to
76.99 then notify the user that the letter grade is C, If the score is 70 to 72.99 then notify the
user that the letter grade is C-, If the score is 60 to 69.99 then notify the user that the letter
grade is D and if the score is below 60 then notify the user that the letter grade is F.
*/
#include <iostream>
#include <string>
using namespace std;
const int SIZE = 5;

struct Student{
    string studentName;
    string subjdect[SIZE]={"Math","English","Computer Science","History","Physics"};
    int grades[SIZE];
    double totalScore=0;
    double average;
    string letterGrade;

};
int main()
{
   Student student[15];
   int counter=0;
   char choice;
    cout<<"Welcome to use grading system.\n";
   do{
    cout<<"Please enter student's name:";
    getline(cin,student[counter].studentName);

    //user input
    cout<<"please enter grade for the following subjects:\n";
    for(int index=0;index<SIZE;index++)
    {
        cout<<index+1<<"."<<student[counter].subjdect[index]<<"(0-100):";
        cin>>student[counter].grades[index];
        while(student[counter].grades[index]<0&&student[counter].grades[index]>100)
        {
            cout<<"Invalid input number, please enter number between 0 to 100:";
            cin>>student[counter].grades[index];
        }
    }
    //total and average
    for(int index=0;index<SIZE;index++)
    {
        student[counter].totalScore+=student[counter].grades[index];
    }
    student[counter].average = student[counter].totalScore/SIZE;

    //letter grade
    if(student[counter].average>=95&&student[counter].average<=100)
    {
        student[counter].letterGrade ="A";
    }
    else if(student[counter].average>=90&&student[counter].average<=94.99)
    {
        student[counter].letterGrade ="A-";
    }
    else if(student[counter].average>=87&&student[counter].average<=89.99)
    {
        student[counter].letterGrade ="B+";
    }
    else if(student[counter].average>=83&&student[counter].average<=86.99)
    {
        student[counter].letterGrade ="B";
    }
    else if(student[counter].average>=80&&student[counter].average<=82.99)
    {
        student[counter].letterGrade ="B-";
    }
    else if(student[counter].average>=77&&student[counter].average<=79.99)
    {
        student[counter].letterGrade ="C+";
    }
    else if(student[counter].average>=73&&student[counter].average<=76.99)
    {
        student[counter].letterGrade ="C";
    }
    else if(student[counter].average>=70&&student[counter].average<=72.99)
    {
        student[counter].letterGrade ="C-";
    }
    else if(student[counter].average>=60&&student[counter].average<=69.99)
    {
        student[counter].letterGrade ="D";
    }
    else
    {
        student[counter].letterGrade ="F";
    }

    cout<<'\n'<<"Here is student's information:\n";
    cout<<"*************************************\n";
    cout<<"Student name:"<<student[counter].studentName<<endl;
    cout<<"Total score:"<<student[counter].totalScore<<endl;
    cout<<"Average:"<<student[counter].average<<endl;
    cout<<"Letter Grade:"<<student[counter].letterGrade<<endl;

    cout<<'\n'<<"Do you want to continue?(y/n):";
    cin>>choice;

    while(choice!='N'&&choice!='n'&&choice!='Y'&&choice!='y')
    {
        cout<<"Invalid input character,please enter 'y' for Yes, 'n' for No:";
        cin>>choice;
    }
    cin.ignore();
    choice=tolower(choice);
    if(choice=='y')
    {
        counter++;
    }

   }while(choice!='n');
   cout<<'\n'<<"Thank you for using.\n";

}
