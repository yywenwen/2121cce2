#include<iostream>
using namespace std;
class S
{
	public:
		char name[30];
		int grade;
};
S stu[100];
int main()
{
    int a;
    cin>>a;
	for(int i=0; i<a; i++)
		cin>>stu[i].name>>stu[i].grade;
	for(int i=0; i<a; i++)
		cout<<stu[i].name<<" "<<stu[i].grade<<endl;
    return 0;
}
