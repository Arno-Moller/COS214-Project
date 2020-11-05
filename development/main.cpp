#include <string>
#include <iostream>

#include "Team.h"

using namespace std;

int main(){
	
	Team *t = new Team();
	t->setTireCompound("h");
	t->buildCar();
	
	//simulate laps
	for(int i = 0; i < 52; i++)
		t->lap();
	
	
	delete t;
	return 0;
}



