# include<iostream>
using namespace std;
int sum(int e,int f);
int main()
{
	int a,b,c;
	cin >> a >> b;
	c = sum(a, b);
	cout << "sum=" << c<<endl;

	return main();
}
int sum(int e,int f)
{
	return e + f;
}