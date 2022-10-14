// gugudan.cc
// printing gugudan through stdout
#include <iostream>

int main(){
	std::cout<< " printing gugudan " << std::endl;
	for(int i = 1; i < 9; i++){ // modify here
		std::cout<< " --- " << i << " 단" << " --- " <<std::endl;
		for(int j = 1; j <= 9; j++){
			std::cout<< " " << i << " X " << j << " = " << i*j <<std::endl;
		}
	}
	std::cout<< " --- done --- " << std::endl;
}
