#include <fstream>
class ROT
{
private:
	double real;
	double apparent;
public:
	ROT(double R, double A) : real{ R }, apparent{ A }{}
	ROT(double R) : real(R), apparent{ 0 }{}
	double GetReal() const { return real; }
	double GetApparent() const { return apparent; }
	ROT& operator+=(ROT r) { real += r.real, apparent += r.apparent; return *this; }
	ROT& operator-=(ROT r) { real -= r.real, apparent -= r.apparent; return *this; }
	ROT& operator*=(ROT r);
	friend bool operator==(ROT a, ROT b) { return !(a == b); }
	friend std::ofstream& operator<<(std::ostream& fout, const ROT& a)
	{
		fout << a.real << (a.im < 0 ? " - " : " + ") << abs(a.im) << "i"<<endl;
		return fout;
	}
};