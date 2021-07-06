// ###########################
// #
// # @ Author: Estenio Garcia
// #
// # @ License: MIT
// #
// ###########################

#include <iostream>
#include <SFML/Graphics.hpp>

#include "Timer.hpp"

int main(){

	sf::RenderWindow app(sf::VideoMode(700, 600), "Tic-Tac-Toe - by Estenio Garcia", sf::Style::Close);
	app.setFramerateLimit(60.f);
	sf::Event event;

	while(app.isOpen()){

		while(app.pollEvent(event)){

			if(event.type == sf::Event::Closed)
				app.close();
		}

		// # Here an exemplo how to call delay
		// # Each 5 seconds, a message will show on display
		
		// # Warning: This function does not manage FPS, Thread Sleep or others.
		// # it just counts the time passed by deltaTime.
		// # The management of the FPS is your responsibility.
		
		if( Timer::Delay(5.f) ){
			
			// # Inside this block, you must put your logic
			// # that will run at a specific time
			std::cout << "Hello there!" << std::endl;
		}

		app.clear();



		app.display();
	}


	return 0;
}