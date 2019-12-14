#include "includes.hpp"

class Wheel
{
public:
	int size;
	void info(){cout<<"Tire size = "<<size<<endl;}
};
class Engine
{
public:
    int power;
	void info(){cout<<"Engine power = "<<power<<endl;}
};
class Car
{
public:
	Wheel* wheels[4];
	Engine* engine;
	void info()
	{
		wheels[0]->info();
        engine->info();
	}
};
class Builder
{
public:

	virtual Wheel* getWheel()  = 0;
	virtual Engine* getEngine() = 0;
};
class jBuilder:public Builder
{
public:
	Wheel* getWheel()
	{
		Wheel* w = new Wheel();
		w->size = 22;
		return w;
	}
	Engine* getEngine()
	{
		Engine* e = new Engine();
		e->power = 400;
		return e;
	}
};
class nBuilder:public Builder
{
public:

	Wheel* getWheel()
	{
		Wheel* w = new Wheel();
		w->size = 16;
		return w;
	}
	Engine* getEngine()
	{
		Engine* e = new Engine();
		e->power = 85;
		return e;
	}
};
class Director
{
public:

	Car* createCar(Builder& builder)
	{
		Car* car = new Car();
		car->wheels[0]=builder.getWheel();
		car->wheels[1]=builder.getWheel();
		car->wheels[2]=builder.getWheel();
		car->wheels[3]=builder.getWheel();
		car->engine=builder.getEngine();
		return car;
	}
};
