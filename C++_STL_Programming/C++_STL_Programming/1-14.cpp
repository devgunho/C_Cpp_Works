#include <iostream>
using namespace std;

struct FuncObject
{
public:
	void operator()(int arg) const
	{
		cout << "���� : " << arg << endl;
	}
};

void Print1(int arg)
{
	cout << "���� : " << arg << endl;
}

int main()
{
	return 0;
}