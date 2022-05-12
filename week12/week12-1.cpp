#include<bits/stdc++.h>
using namespace std;
class S
{
	public:
		int grade;
		char name[20];
};
bool comp(S a, S b)
{
	return a.grade>b.grade;
}
int main()
{
	int a;
	cin>>a;
	vector<S> s(a);
	for(int i=0; i<a; i++)
		cin>>s[i].name>>s[i].grade;
	stable_sort(s.begin(), s.end(), comp);

	for(int i=0; i<a; i++)
		printf("%s %d\n", s[i].name, s[i].grade);
}
