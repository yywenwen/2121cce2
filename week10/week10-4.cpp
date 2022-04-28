#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;
class Student
{
    public:
    char name[30];
    int grade;
};
Student student[100];
bool compare(Student a, Student b)
{
    return (a.grade > b.grade);
}

int main()
{
    FILE * fin = fopen("input.txt", "r");
    int N;
    fscanf(fin, "%d", &N);


    vector<Student> student(20);
    for(int i=0; i<N; i++)
    {
        fscanf(fin, "%s %d", student[i].name, &student[i].grade);

    }

    sort(student.begin(), student.end(), compare);

    for(int i=0; i<N; i++)
        printf("%s %d\n", student[i].name, student[i].grade);

}
