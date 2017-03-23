using namespace std;
class Elo
{
public:
	float get_K();
	float get_Ra();
	float get_Rb();
	void set_K(float a);
	void set_Ra(float a);	
	void set_Rb(float a);
	float update(float result);
private:
	float K,Ra,Rb;
};
