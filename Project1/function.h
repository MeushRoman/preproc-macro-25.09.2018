#include <ctime>
#include <iostream>
#include <cstdlib>


using namespace std;
#ifndef _MY_FUNCTION_
#define _MY_FUNCTION_

//#define MY_INTEGER
//#define MY_DOUBLE
#define MY_CHAR


#ifdef MY_INTEGER

void fill_array(int *p, int n);
void print_array(int *p, int n);

#define PrintInt print_array
#define fillInt fill_array

#endif // MY_INTEGER


#ifdef MY_DOUBLE

void fill_array(double *p, int n);
void print_array(double *p, int n);

#define PrintDouble print_array;
#define fillDouble fill_array;

#endif // MY_DOUBLE

#ifdef MY_CHAR

void fill_array(char *p, int n);
void print_array(char *p, int n);

#define PrintChar print_array;
#define fillChar fill_array;

#endif // MY_CHAR

#endif