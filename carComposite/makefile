ofiles = main.o Tire.o TireState.o OKCondition.o GoodCondition.o BadCondition.o RaceCarBuilder.o CarBuilder.o RaceCar.o CarPart.o Chassie.o Engine.o Hub.o Suspension.o Wing.o Team.o
gpp_o = g++ -c -std=c++11 -static

main: $(ofiles)
	g++ -std=c++11 -static $(ofiles) -o main

main.o: main.o Tire.o TireState.o OKCondition.o GoodCondition.o BadCondition.o RaceCarBuilder.o CarBuilder.o RaceCar.o CarPart.o Chassie.o Engine.o Hub.o Suspension.o Wing.o Team.o

Team.o: Team.cpp Team.h
	$(gpp_o) Team.cpp

RaceCarBuilder.o: RaceCarBuilder.cpp RaceCarBuilder.h
	$(gpp_o) RaceCarBuilder.cpp

CarBuilder.o: CarBuilder.cpp CarBuilder.h
	$(gpp_o) CarBuilder.cpp
	
RaceCar.o: RaceCar.cpp RaceCar.h
	$(gpp_o) RaceCar.cpp

CarPart.o: CarPart.cpp CarPart.h
	$(gpp_o) CarPart.cpp
	
Chassie.o: Chassie.cpp Chassie.h
	$(gpp_o) Chassie.cpp
	
Engine.o: Engine.cpp Engine.h
	$(gpp_o) Engine.cpp
	
Hub.o: Hub.cpp Hub.h
	$(gpp_o) Hub.cpp
	
Suspension.o: Suspension.cpp Suspension.h
	$(gpp_o) Suspension.cpp
	
Wing.o: Wing.cpp Wing.h
	$(gpp_o) Wing.cpp

Tire.o: Tire.cpp Tire.h
	$(gpp_o) Tire.cpp
	
TireState.o: TireState.cpp TireState.h
	$(gpp_o) TireState.cpp
	
OKCondition.o: OKCondition.cpp OKCondition.h
	$(gpp_o) OKCondition.cpp
	
GoodCondition.o: GoodCondition.cpp GoodCondition.h
	$(gpp_o) GoodCondition.cpp
	
BadCondition.o: BadCondition.cpp BadCondition.h
	$(gpp_o) BadCondition.cpp

run: main
	./main

clean:
	rm *.o main