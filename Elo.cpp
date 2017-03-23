#include"Elo.h"
#include<cmath>
float Elo::get_K()
{
	return K;	
}
float Elo::get_Ra()
{
	return Ra;
}
float  Elo::get_Rb()
{
	return Rb;
}
void Elo::set_K(float a)
{
	K = a;
}
void Elo::set_Ra(float a)
{
	Ra = a;
}
void Elo::set_Rb(float a)
{
	Rb = a;
}
float Elo::update(float result)
{
	float Ea,Eb;
	Ea = 1 / (1 + pow(10,(get_Rb() - get_Ra()) / 400));
	Eb = 1 / (1 + pow(10,(get_Ra() - get_Rb()) / 400));
	float RRa,RRb;
	if(result == 1)
	{
		RRa = get_Ra() + K * (1 - Ea);
		RRb = get_Rb() + K * (0 - Eb);
	}
	else
	if(result == 0.5)
	{
		RRa = get_Ra() + K * (0.5 - Ea);
		RRb = get_Rb() + K * (0.5 - Eb);
	}
	else
	if(result == 0)
	{
		RRa = get_Ra() + K * (0 - Ea);
		RRb = get_Rb() + K * (1 - Eb);
	}
		set_Ra(round(RRa));
		set_Rb(round(RRb));
}
