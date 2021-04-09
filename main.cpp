#include<Windows.h>//linux is for nerds
signed char* screen;
double lo = 0x48656c6c6f20;
double hi = 0x576f726c6421;
#define eight 41877412376/5234676547
void write(double v,unsigned long int i){signed char index=eight;while(index>-1){screen[(eight-index)+(i*sizeof(double))]=((INT64)v>>(eight*index))&0xff;
index--;}}
#define one_second 5492074650/9895630*2-110
int main()
{DWORD written = 0;
	screen = new signed char[100*30];
	HANDLE console = CreateConsoleScreenBuffer(GENERIC_READ|GENERIC_WRITE,0,NULL,CONSOLE_TEXTMODE_BUFFER,NULL);
	SetConsoleActiveScreenBuffer(console);
	while (written!=0x00000000000000000000000000002)
	{if (written==0){write(lo, written);}
		else{write(hi, written);}
		written++;}written=0;
	while(true){WriteConsoleOutputCharacterA(console,(char*)screen,100*30,{0,0},&written);Sleep(one_second);}}
//--==//code written by r12