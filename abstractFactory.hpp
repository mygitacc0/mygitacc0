#include "includes.hpp"
class Infantryman
{
public:
	virtual void info() = 0;
};
class RInfantryman : public Infantryman
{
public:
	void info(){cout<<"RInfantryman"<<endl;}
};
class CInfantryman : public Infantryman
{
public:
	void info(){cout<<"CInfantryman"<<endl;}
};
class Factory
{
public:
	virtual  Infantryman* createInfantryman() = 0;
};
class RFactory : public Factory
{
public:
	 Infantryman* createInfantryman()
	{
		return new RInfantryman();
	}
};
class CFactory : public Factory
{
public:
	 Infantryman* createInfantryman(){return new CInfantryman();}
};
class Army
{
public:
	vector <Infantryman*> vi;
	void info()
	{
		typedef vector<Infantryman*>::iterator InfantrtmanVectorIt;
		for(InfantrtmanVectorIt it = vi.begin();it!=vi.end();++it)
		{
			(*it)->info();
		}
	}
};
class Game
{
public:
	Army* createArmy(Factory& f)
	{
       Army* p = new Army();
	   p->vi.push_back(f.createInfantryman());
	   return p;
	}
};