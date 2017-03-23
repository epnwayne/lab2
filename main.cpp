#include<iostream>
#include<fstream>
#include"Elo.h"
using namespace std;
int main()
{
	float readin[9] = {0};
	int i;
	ifstream fin;
	fin.open("file.in");
	ofstream fout;
	fout.open("file.out");
	for(i = 0;i < 9;i++)
	{
		fin >> readin[i];
	}
	Elo start;
	start.set_K(readin[0]);
	start.set_Ra(readin[1]);
	start.set_Rb(readin[2]);
	fout << readin[1] << "  " << readin[2] << endl;
	for(i = 3;i < 9;i++)
	{
		start.update(readin[i]);
		fout << start.get_Ra() << "  " << start.get_Rb() << endl;
	}
}
