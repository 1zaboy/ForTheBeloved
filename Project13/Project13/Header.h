#pragma once
#include <iostream>
#include <cmath>
#include <string>
#include <wtypes.h>
#include <math.h>
using namespace std;
double** transp(double **at, double **a, int n)
{
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			at[i][j] = a[j][i];
	return at;
}
// Условие окончания
bool converge(double *xk, double *xkp, double n, double eps)
{
	double norm = 0;
	for (int i = 0; i < n; i++)
	{
		norm += (xk[i] - xkp[i])*(xk[i] - xkp[i]);
	}
	if (sqrt(norm) >= eps)
		return false;
	return true;
}
int round_value(int x)
{
	int r = 0;
	if (x != 0)
	{
		r = 10;
		r = pow(r, x);
	}
	return r;
}