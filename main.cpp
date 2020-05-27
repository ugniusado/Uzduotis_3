#include "Source.h"


int main()
{
	int d = decision();
	if (d == 1)
	{
		int longName = 8, longSurn = 9;
		vector<Stud>Student;
		DataRead(Student, longName, longSurn);
		DataOutput(Student, longName, longSurn, "Studentai");
	}
	if (d == 2)
	{
		vector<Stud>Student;
		int y = 1;

		for (int i = 0; i < 6; i++)
		{
			auto begin = std::chrono::high_resolution_clock::now();
			y = y * 10;
			DataGenerate(Student, y);
			DataOutput(Student, 12 + i, 13 + i, "Studentai" + std::to_string(y));
			auto end = std::chrono::high_resolution_clock::now();
			cout << "generate:" << std::chrono::duration_cast<std::chrono::nanoseconds>(end - begin).count() << " nanosekund�i�" << endl;
			Student.clear();
		}

	}
	if (d == 3)
	{
		int longName = 8, longSurn = 9;
		vector<Stud>Student;
		vector<Stud>Nuskriaustieji;
		vector<Stud>Kietiakai;
		//	RZ << "Dabar studentus skirstysime i du naujus konteinerius, tokiu budu skirstant, musu naudojamiems konteineriams prireike tiek laiko:" << endl;
		auto begin = std::chrono::high_resolution_clock::now();
		DataRead(Student, longName, longSurn);
		auto end = std::chrono::high_resolution_clock::now();
		//	RZ << "Nuskaitymui i vectoriu prireike " << std::chrono::duration_cast<std::chrono::nanoseconds>(end - begin).count() << " nanosekundziu" << endl;
		begin = std::chrono::high_resolution_clock::now();
		DataDis(Student, Nuskriaustieji, Kietiakai);
		end = std::chrono::high_resolution_clock::now();
		//	RZ << "Duomenu esanciu vektoriuje skirstymui prireike " << std::chrono::duration_cast<std::chrono::nanoseconds>(end - begin).count() << " nanosekundziu" << endl;
		begin = std::chrono::high_resolution_clock::now();
		DataOutput(Kietiakai, longName, longSurn, "VectorKietiakai");
		DataOutput(Nuskriaustieji, longName, longSurn, "VectorNuskriaustieji");
		end = std::chrono::high_resolution_clock::now();
		//RZ << "Duomenims, esantiems vektoriuje, isvesti prireike " << std::chrono::duration_cast<std::chrono::nanoseconds>(end - begin).count() << " nanosekundziu" << endl;
		Student.clear();
		Nuskriaustieji.clear();
		Kietiakai.clear();
		//	RZ.close();
	}
	return 0;
}