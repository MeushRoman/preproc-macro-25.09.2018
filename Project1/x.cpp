// ConsoleApplication4.cpp: определяет точку входа для консольного приложения.
//


#include "function.h"

//#define min(a,b)(a<b?a:b)
//#define max(a,b)(a>b?a:b)
//#define Pow(a)(a*a)
//#define inPow(a, b)(pow(a,b))
//#define chet(a)(a%2==0)
//#define nechet(a)(a%2!=0)

#define my_define
//#define my_integer
//define MY_DOUBLE


using namespace std;


int main()
{
	/*srand(time(NULL));
	int a = 6, b = 4, k = 1;

	cout << min(a, b) << endl;
	
	cout << max(a, b) << endl;
	
	cout << Pow(a) << endl;

	cout << chet(a) << endl;

	cout << nechet(b) << endl;*/

	int a[10];
	double b[8];
	char c[5];

	/*fillInt(a, 10);
	print_array(a, 10);*/
	
	/*fillDouble(b, 8);
	print_array(b, 8);*/

	fillChar(c, 5);
	print_array(c, 5);


	system("pause");
	

    return 0;
}

