FILES = Aggresive.o BadCondition.o CarBuilder.o CarPart.o Cautious.o Championship.o ChangeTires.o Chassie.o ConstructorsChampionship.o DriversChampionship.o Engine.o GoodCondition.o HardCoumpound.o Hub.o main.o MediumCompound.o Memento.o OKCondition.o RaceCar.o RaceCarBuilder.o RacingTeam.o Sensible.o SoftCompound.o Suspension.o Team.o TeamState.o TeamStateCaretaker.o Tire.o TireCompound.o TireState.o Wing.o 

main: $(FILES)
	g++ -o main $(FILES)

Aggresive.o:
	g++ -c -g Aggresive.cpp

BadCondition.o:
	g++ -c -g BadCondition.cpp

CarBuilder.o:
	g++ -c -g CarBuilder.cpp

CarPart.o:
	g++ -c -g CarPart.cpp

Cautious.o:
	g++ -c -g Cautious.cpp

Championship.o:
	g++ -c -g Championship.cpp

ChangeTires.o:
	g++ -c -g ChangeTires.cpp

Chassie.o:
	g++ -c -g Chassie.cpp

ConstructorsChampionship.o:
	g++ -c -g ConstructorsChampionship.cpp

DriversChampionship.o:
	g++ -c -g DriversChampionship.cpp

Engine.o:
	g++ -c -g Engine.cpp

GoodCondition.o:
	g++ -c -g GoodCondition.cpp

HardCoumpound.o:
	g++ -c -g HardCoumpound.cpp

Hub.o:
	g++ -c -g Hub.cpp

main.o:
	g++ -c -g main.cpp

MediumCompound.o:
	g++ -c -g MediumCompound.cpp

Memento.o:
	g++ -c -g Memento.cpp

OKCondition.o:
	g++ -c -g OKCondition.cpp

RaceCar.o:
	g++ -c -g RaceCar.cpp

RaceCarBuilder.o:
	g++ -c -g RaceCarBuilder.cpp

RacingTeam.o:
	g++ -c -g RacingTeam.cpp

Sensible.o:
	g++ -c -g Sensible.cpp

SoftCompound.o:
	g++ -c -g SoftCompound.cpp

Suspension.o:
	g++ -c -g Suspension.cpp

Team.o:
	g++ -c -g Team.cpp

TeamState.o:
	g++ -c -g TeamState.cpp

TeamStateCaretaker.o:
	g++ -c -g TeamStateCaretaker.cpp

Tire.o:
	g++ -c -g Tire.cpp

TireCompound.o:
	g++ -c -g TireCompound.cpp

TireState.o:
	g++ -c -g TireState.cpp

Wing.o:
	g++ -c -g Wing.cpp

run: main
	./main

clean:
	rm main *.o
	clear

