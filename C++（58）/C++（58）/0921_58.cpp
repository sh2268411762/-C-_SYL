#include <iostream>
#include <string>
using namespace std;



int main()
{
	double d = 12.34;
	double& rd = d;

	d = 56.7;
	cout << rd << endl;
//	int& rdd = d;    //´íÎó
	const int& rdd = d;
	d = 88.88;
	cout << rdd << "\t" << rd << endl;
	return EXIT_SUCCESS;
}