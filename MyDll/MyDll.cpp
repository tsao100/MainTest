#include<stdio.h>

//#include"myshare.h"

extern "C" __declspec(dllexport) void __cdecl myprint(char* str) {

	printf("%s", str);

}
