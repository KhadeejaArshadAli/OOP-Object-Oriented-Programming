#include<iostream>
using namespace std;
class Car
{
	public:
	string name;
	string model;
	string company;
	
	Car(string name,string model,string company)
	{
		this->name = name;
		this->model = model;
		this->company = company;
		
	}
	void dispalyData()
	{
		cout<<"NAME="<<name<<endl;
		cout<<"MODEL="<<model<<endl;
		cout<<"COMPANY="<<company<<endl;
	}
};
class Driver
{
	public:
		string name;
		string experience;
	Driver(string name,string experience)
	{
		this->name = name;
		this->experience= experience;
	}
	void drive(Car mycar)
	{
		cout<<"NAME:"<<name<<endl;
		cout<<"EXPERIENCE:"<<experience<<endl;
		cout<<"CAR MODEL:"<<mycar.model<<endl;
		cout<<"CAR NAME:"<<mycar.name<<endl;
		cout<<"CAR COMPANY:"<<mycar.company<<endl;
		
	}
};
int main()
{
	Car c("honda","4","altis");
	c.dispalyData();
	
	Driver d("mariya","5_years");
    d.drive(c);
    return 0;
}

