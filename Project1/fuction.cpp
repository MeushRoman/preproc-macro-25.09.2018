#include "function.h"
#include <iostream>
#include <ctime>
using namespace std;


//int
//fill
void fill_array(int*p, int n) {
	srand(time(NULL));
	for (int i = 0; i < n; i++)
	{
		p[i] = rand() % 10;
	}
}
//print
void print_array(int*p, int n) {
	for (int i = 0; i < n; i++)
	{
		cout << p[i] << " ";
	}
	cout << endl;
}
//min
int min_array(int*p, int n) {
	int min = p[0];
	for (int i = 0; i < n; i++)
	{
		if (p[i]<min) min = p[i];
	}
	return min;
}
//max
int max_array(int*p, int n) {
	int max = p[0];
	for (int i = 0; i < n; i++)
	{
		if (p[i] > max) max = p[i];	
	}
	return max;
}
//sort
void sort(int *p, int n) {
	for (int pass = 0; pass < n-1; pass++)
	{
		for (int i = 0; i < n; i++)
		{
			if (p[i] > p[i + 1]) swap(p[i], p[i + 1]);
		}
	}
}

//double
void fill_array(double*p, int n) {
	srand(time(NULL));
	for (int i = 0; i < n; i++)
	{
		p[i] = double(rand() % 100 + 1)/(rand() % 20 + 1);
	}
}
//print double
void print_array(double*p, int n) {
	for (int i = 0; i < n; i++)
	{
		cout << p[i] << " ";
	}
	cout << endl;
}
//min double
double min_array(double*p, int n) {
	double min = p[0];
	for (int i = 0; i < n; i++)
	{
		if (p[i]<min) min = p[i];
	}
	return min;
}
//max double
double max_array(double*p, int n) {
	double max = p[0];
	for (int i = 0; i < n; i++)
	{
		if (p[i] > max) max = p[i];
	}
	return max;
}
//sort double
void sort(double *p, int n) {
	for (int pass = 0; pass < n - 1; pass++)
	{
		for (int i = 0; i < n; i++)
		{
			if (p[i] > p[i + 1]) swap(p[i], p[i + 1]);
		}
	}
}


//char
void fill_array(char*p, int n) {
	srand(time(NULL));
	for (int i = 0; i < n; i++)
	{
		p[i] =char( rand() % 0 + 255);
	}
}
void print_array(char*p, int n) {
	for (int i = 0; i < n; i++)
	{
		cout << p[i] << " ";
	}
	cout << endl;
}