#include<iostream>
using namespace std;

class Vehicle
{
public:
	Vehicle();
	~Vehicle();
	void Run();
	void Stop();
private:
	double MaxSpeed;
	double Weight;
};

Vehicle::Vehicle()
{
}

Vehicle::~Vehicle()
{
}

void Vehicle::Run()
{
	cout << "Run" << endl;
}

void Vehicle::Stop()
{
	cout << "Stop" << endl;
}

class Bicycle :virtual public Vehicle
{
public:
	Bicycle() {};
	~Bicycle() {};
	double Height;
};

class Motorcar :virtual public Vehicle
{
public:
	Motorcar() {};
	~Motorcar() {};
	int SeatNum;
};

class Motorcycle :public Motorcar, public Bicycle
{
public:
	Motorcycle() {};
	void test();
};

void Motorcycle::test()
{
	cout << "Motorcycle..." << endl;
}

void main(void)
{
	Motorcycle test;
	test.Run();
	test.Stop();

}
