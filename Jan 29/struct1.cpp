#include <iostream>
using namespace std;
// array of structure
struct Student
{
    string name;
    int roll_number;
    int marks;
} s[5];

// input
void input()
{
    for (int i = 0; i < 5; i++)
    {
        cout << "Enter the Name : ";
        cin >> s[i].name;
        cout << "Enter the roll Number : ";
        cin >> s[i].roll_number;
        cout << "Enter the total percentage : ";
        cin >> s[i].marks;
    }
}

// display

void display()
{

    for (int i = 0; i < 5; i++)
    {
        cout << "\n The Name : " << s[i].name;
        cout << "\n The roll Number : " << s[i].roll_number;
        cout << "\n The total percentage : " << s[i].marks;
    }
}

// sort
void sort()
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = i + 1; j < 5; j++)
        {

            if (s[i].roll_number > s[j].roll_number)
            {
                int temp_rollnumber = s[j].roll_number;
                string temp_name = s[j].name;
                int temp_marks = s[j].marks;

                s[j].roll_number = s[i].roll_number;
                s[j].name = s[i].name;
                s[j].marks = s[i].marks;

                s[i].roll_number = temp_rollnumber;
                s[i].name = temp_name;
                s[i].marks = temp_marks;
            }
        }
    }
}

int main()
{
    cout<<"input elements \n";
    input();
    
    cout<<"unsorted element s elements \n";
    display();
    sort();
    cout<<"sorted element s elements \n";
    display();
}
