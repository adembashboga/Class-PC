#include <iostream>
using namespace std;

class PC
{
protected:
	string name;
	string cpu;
	string gpu;
	string ssd;
	string ram;
	double price;
public:
	PC() {}
	PC(string nm, string cp, string gp, string ss, string ra, double pr) 
		: name(nm), cpu(cp), gpu(gp), ssd(ss), ram(ra), price(pr) {}

	void Print()
	{
		cout << name << "\t" << cpu << "\t" << gpu << "\t" << ssd << "\t" << ram << "\t" << price << endl;
	}
};

class OfficePC : public PC
{
private:
	string micro;
public:
	OfficePC(string nm, string cp, string gp, string ss, string ra, double pr, string mic)
		: PC(nm, cp, gp, ss, ra, pr), micro(mic) {}

	void Print() 
	{
		cout << "Office PC: ";
		PC::Print();
		cout << "Micro: " << micro << endl;
	}
};

class GamePC : public PC
{
private:
	string keyboard;
	string headphones;

public:
	GamePC(string nm, string cp, string gp, string ss, string ra, double pr, string kb, string hd)
		: PC(nm, cp, gp, ss, ra, pr), keyboard(kb), headphones(hd) {}

	void Print()
	{
		cout << "Game PC: ";
		PC::Print();
		cout << "Keyboard: " << keyboard << "\tHeadphones: " << headphones << endl;
	}
};

class HomePC : public PC
{
private:
	string camera;

public:
	HomePC(string nm, string cp, string gp, string ss, string ra, double pr, string cam)
		: PC(nm, cp, gp, ss, ra, pr), camera(cam) {}

	void Print()
	{
		cout << "Home PC: ";
		PC::Print();
		cout << "Camera: " << camera << endl;
	}
};

int main()
{
	OfficePC officePC("OfficeM", "Intel i5", "Integrated", "512GB", "8GB", 500);
	GamePC gamePC("GamerPro", "Intel i9", "RTX 3080", "1TB", "32GB", 2000, "Razer", "HyperX");
	HomePC homePC("HomeEase", "AMD Ryzen 5", "Integrated", "256GB", "16GB", 800, "Logitech");

	officePC.Print();
	cout << endl;

	gamePC.Print();
	cout << endl;

	homePC.Print();
	cout << endl;
}