#include <iostream>
#include <cstdlib>

	
int horsePosition [5] = { 0, 1, 2, 3, 4 };
int horse0 = 0;
int horse1 = 1;
int horse2 = 2;
int horse3 = 3;
int horse4 = 4;


//function prototypes
int flipCoin(int horseNum);
void printBoard(int horseNum);



int main()
{
    int seed = 0;
    std::cout << "Please enter a random seed: ";
    std::cin >> seed;
	srand(seed);
    
	while(horsePosition[horse0] < 15 && horsePosition[horse1] < 15 && horsePosition[horse2] < 15 && horsePosition[horse3] < 15 && horsePosition[horse4] < 15)
	{
		flipCoin(horse0);
		flipCoin(horse1);
		flipCoin(horse2);
		flipCoin(horse3);
		flipCoin(horse4);
		
		printBoard(horse0);
		std::cout << std::endl;
		printBoard(horse1);
		std::cout << std::endl;
		printBoard(horse2);
		std::cout << std::endl;
		printBoard(horse3);
		std::cout << std::endl;
		printBoard(horse4);
		std::cout << std::endl;
		std::cout << std::endl;
		
	}
    
    if (horsePosition[horse0] >=15){
        std::cout << "Horse 0 wins!";
    }
    
    else if (horsePosition[horse1] >=15){
        std::cout << "Horse 1 wins!";
    }
    
    else if (horsePosition[horse2] >=15){
        std::cout << "Horse 2 wins!";
    }
    
    else if (horsePosition[horse3] >=15){
        std::cout << "Horse 3 wins!";
    }
    
    else if (horsePosition[horse4] >=15){
        std::cout << "Horse 4 wins!";
    }


    return 0;
}

int flipCoin(int horseNum){
	
	int flip = 0;
	flip = rand()%2 + 1;
	
	horsePosition[horseNum] = horsePosition[horseNum] + flip-1;
	
	return horsePosition[horseNum];
}

void printBoard(int horseNum){
	for (int i=0; i<=14; i++){
		if (i == horsePosition[horseNum]){
			std::cout << horseNum;
			
		}
		
		else if (i != horsePosition[horseNum]){
			std::cout << ".";
			
		}
		
	}
}
