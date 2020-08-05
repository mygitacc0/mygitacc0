#include "abstractFactory.hpp"
#include "builder.hpp"

int main(){
//abstractFactory
   Game game;
   RFactory rf;
   CFactory cf;
   Army* ra = game.createArmy(rf);
   Army* ca = game.createArmy(cf);
   ra->info();
   ca->info();
//builder
	jBuilder jb;
	nBuilder nb;
    Director d;
	Car* j =  d.createCar(jb);
	Car* n =  d.createCar(nb);
	j->info();
	n->info();
	
	cout<<"New string";
        cout<<"Stop_impl";
        cout<<"Restart_impl";
		cout<<"Reopen_impl";
	return 1;
}


