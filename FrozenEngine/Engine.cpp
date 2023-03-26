#include <iostream>
#include <locale>
#include <Windows.h>

#define FE_LOG(Format, ...) \
	printf("Log: "##Format"\n", ##__VA_ARGS__)

#pragma 

#define MY_MACRO(x) \
    do { \
        if ((x) < 0) { \
            /* Output a warning message */ \
			_Pragma ("message( \"the _Pragma way\")") \
        } \
        /* ... */ \
    } while (0);

typedef wchar_t WIDECHAR;
typedef WIDECHAR TCHAR;

void EngineLoop()
{
	MY_MACRO(-1);
	while (true)
	{
		/*wchar_t chinese_char2 = L'\x6211';
		printf("%lc\n", chinese_char2);*/ 
	}
}

int main()
{
	setlocale(LC_ALL, ".utf8");
	
	EngineLoop();
	return 0;
}
