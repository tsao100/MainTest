// MainTest.cpp: 定義應用程式的進入點。
//

#include "MainTest.h"

#include "../MyDll/MyDll.h"
using namespace std;

int main()
{
	cout << "Hello CMake." << endl;

	myprint((char*)"hello World\n");

	getchar();
	return 0;
}
