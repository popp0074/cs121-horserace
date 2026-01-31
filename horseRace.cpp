#include <iostream>
#include <cstdlib>
#include <ctime>


void advance(int horseNum, int* horses);
void printLane(int horseNum, int* horses);
bool isWinner(int horseNum, int* horses);


const int NUM_HORSES = 5;
const int TRACK_LENGTH = 15;


int main(){
	std::cout << "Horse race game" << std:: endl;
	srand(time(NULL));

	int horses[NUM_HORSES] = {0, 0, 0, 0, 0};
	
	int keepGoing= 1;
	
	for (int h= 0; h < NUM_HORSES; h++) {
		printLane(h, horses);
	} // end for

	while (keepGoing) {
		std::cout << "Press enter for another turn";
		std::cin.get();
		for (int h= 0; h < NUM_HORSES; h++) {
			advance(h, horses);
		} // end for
		
		for (int h= 0; h < NUM_HORSES; h++){
			printLane(h, horses);
		} // end for

		for (int h= 0; h < NUM_HORSES; h++) {
			if (isWinner(h, horses)) {
				keepGoing = 0;
			} // end if
		} // end for
		
		if(!keepGoing){
			for (int h= 0; h < NUM_HORSES; h++){
				if (isWinner(h, horses)){
					std::cout << "Horse " << h << "Wins!" << std::endl;
				} // end if
			} // end for
		} // end if
	}

	return 0;
} // end main

void printLane(int horseNum, int* horses){
	for (int i= 0; i < TRACK_LENGTH; i++){
		if (i == horses[horseNum]){
			std::cout << horseNum;
		}	else {
			std::cout << ".";
		} // end if
	} // end for loop
	// print a newline
	std::cout << std::endl;
} // end printLane

void advance(int horseNUM, int* horses){
	int coin = rand() % 2;
	horses[horseNUM] += coin;
} // end advance

bool isWinner(int horseNum, int* horses) {
	return horses[horseNum] >= TRACK_LENGTH - 1;
} // end isWinner
