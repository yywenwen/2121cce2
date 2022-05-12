#include<iostream>
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
    std::cin>>a;
	for(int i=0; i<a; i++)
		std::cin>>stu[i].name>>stu[i].grade;
	for(int i=0; i<a; i++)
		std::cout<<stu[i].name<<" "<<stu[i].grade<<endl;
    return 0;
}
