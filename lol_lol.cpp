#include<iostream>
using namespace std;

void input(int marks[50]);

int highest_marks(int marks[50]);

int main()
{
    int marks[50], highestMarks;
    input(marks);
    highestMarks = highest_marks(marks);
    cout << "\nHighest marks is " << highestMarks;
    return 0;
}

void input(int marks[50])
{
    for(int i = 0; i < 50; i++)
    {
        cout << "\nEnter marks of student number " << (i+1) << " :";
        cin >> marks[i];
    }
}

int highest_marks(int marks[50])
{
    int max = marks[0];
    for(int i = 1; i < 50; i++)
    {
        if(marks[i] > max)
        {
            max = marks[i];
        }
    }
    return max;
}