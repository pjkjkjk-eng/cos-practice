#include <iostream>
using namespace std;
int main(int argc, char*argv[])
{
	int a,b;

	a = atoi(argv[1]);
	b = atoi(argv[2]);

	if (a>=b)
	{
		return 1;
	}

	return 0;
}
