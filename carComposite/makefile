FILES = BadCondition.o CarBuilder.o CarPart.o Chassie.o Engine.o GoodCondition.o Hub.o main.o OKCondition.o RaceCar.o RaceCarBuilder.o Suspension.o Team.o Tire.o Wing.o 

main: $(FILES)
	g++ -o main $(FILES)

BadCondition.o:
	g++ -c -g BadCondition.cpp

CarBuilder.o:
	g++ -c -g CarBuilder.cpp

CarPart.o:
	g++ -c -g CarPart.cpp

Chassie.o:
	g++ -c -g Chassie.cpp

Engine.o:
	g++ -c -g Engine.cpp

GoodCondition.o:
	g++ -c -g GoodCondition.cpp

Hub.o:
	g++ -c -g Hub.cpp

main.o:
	g++ -c -g main.cpp

OKCondition.o:
	g++ -c -g OKCondition.cpp

RaceCar.o:
	g++ -c -g RaceCar.cpp

RaceCarBuilder.o:
	g++ -c -g RaceCarBuilder.cpp

Suspension.o:
	g++ -c -g Suspension.cpp

Team.o:
	g++ -c -g Team.cpp

Tire.o:
	g++ -c -g Tire.cpp

Wing.o:
	g++ -c -g Wing.cpp

run: main
	./main

clean:
	rm main *.o
	clear

