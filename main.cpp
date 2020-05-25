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
		vector<Stud>Students;
		int y = 1;
		
		for (int i = 0; i < 6; i++)
		{
			auto begin = std::chrono::high_resolution_clock::now();
			y = y * 10;
			DataGenerate(Students, y);
			DataOutput(Students, 12 + i, 13 + i, "Student" + std::to_string(y));
			auto end = std::chrono::high_resolution_clock::now();
			cout << "generate:" << std::chrono::duration_cast<std::chrono::nanoseconds>(end - begin).count() << endl;
			Students.clear();
		}
	}
	if (d == 3)
	{
		
		int longName = 8, longSurn = 9;
		vector<Stud>Student;
		vector<Stud>Nuskriaustieji;
		vector<Stud>Kietiakai;
	
		cout << "Dividing into list's: ";
			
		auto begin = std::chrono::high_resolution_clock::now();
		DataRead(Student, longName, longSurn);
		auto end = std::chrono::high_resolution_clock::now();

		cout<<"Data in from vector: " << std::chrono::duration_cast<std::chrono::nanoseconds>(end - begin).count() <<endl;
			
		begin = std::chrono::high_resolution_clock::now();
		DataDis(Student, Nuskriaustieji);
		end = std::chrono::high_resolution_clock::now();
			
		cout<<"Vector sort time" << std::chrono::duration_cast<std::chrono::nanoseconds>(end - begin).count()<< endl;
			
		begin = std::chrono::high_resolution_clock::now();
		DataOutput(Kietiakai, longName, longSurn, "Kietiakai");
		DataOutput(Nuskriaustieji, longName, longSurn, "Nuskriaustieji");
		end = std::chrono::high_resolution_clock::now();
			
		cout<<"vector output time :" << std::chrono::duration_cast<std::chrono::nanoseconds>(end - begin).count() << endl;
		
		begin = std::chrono::high_resolution_clock::now();	
			
	}
	return 0;
}