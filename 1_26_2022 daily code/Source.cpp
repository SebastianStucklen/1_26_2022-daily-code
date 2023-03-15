#include <SFML/Graphics.hpp> //bring in library


int main() //starting point of all C++ programs
{
	sf::RenderWindow window(sf::VideoMode(800, 800), "Trees"); //set up screen
	sf::CircleShape circle; //tell the program we're using this shape
	sf::RectangleShape rect; //this one too!


	while (window.isOpen())//GAME LOOP--------------------------------
	{
		sf::Event event; //look for keyboard/mouse/etc clicks
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed) //check if player has closed window with top left 'x' button
				window.close();

		}

		//render section-------------------------------
		window.clear(); //wipe screen (needed more for animations)

		//left branch
		circle.setRadius(30);
		circle.setFillColor((sf::Color(0, 100, 80)));
		circle.setPosition(200, 180);
		window.draw(circle);

		//right branch
		circle.setRadius(30);
		circle.setFillColor((sf::Color(80, 100, 0)));
		circle.setPosition(250, 180);
		window.draw(circle);

		//top branch
		circle.setRadius(30);
		circle.setFillColor((sf::Color(0, 100, 0)));
		circle.setPosition(225, 150);
		window.draw(circle);

		//trunk
		rect.setPosition(245, 200);
		rect.setFillColor(sf::Color(100, 80, 0));
		rect.setSize(sf::Vector2f(20, 100));
		window.draw(rect);

		// TREE 2 ---------------------------------------------------
		
		
		//trunk
		rect.setSize(sf::Vector2f(30, 100));
		rect.setFillColor(sf::Color(100, 80, 0));
		rect.setPosition(460, 350);
		window.draw(rect);

		//left branch
		circle.setRadius(50);
		circle.setFillColor((sf::Color(0, 120, 80)));
		circle.setPosition(400, 280);
		window.draw(circle);

		//right branch
		circle.setRadius(50);
		circle.setFillColor((sf::Color(80, 120, 0)));
		circle.setPosition(450, 280);
		window.draw(circle);

		//top branch
		circle.setRadius(50);
		circle.setFillColor((sf::Color(0, 120, 0)));
		circle.setPosition(425, 250);
		window.draw(circle);

		// TREE 3 ---------------------------------------------------


		//trunk
		rect.setSize(sf::Vector2f(30, 100));
		rect.setFillColor(sf::Color(100, 80, 0));
		rect.setPosition(160, 500);
		window.draw(rect);

		//top branch
		circle.setRadius(80);
		circle.setFillColor((sf::Color(0, 200, 0)));
		circle.setPosition(95, 400);
		window.draw(circle);
		
		//flower 1

		//trunk
		rect.setPosition(345, 300);
		rect.setFillColor(sf::Color(100, 200, 0));
		rect.setSize(sf::Vector2f(5, 80));
		window.draw(rect);

		//left branch
		circle.setRadius(30);
		circle.setFillColor((sf::Color(240, 240, 240)));
		circle.setPosition(317, 264);
		window.draw(circle);

		//right branch
		circle.setRadius(15);
		circle.setFillColor((sf::Color(240, 100, 0)));
		circle.setPosition(332, 280);
		window.draw(circle);

		//flower 2

		//trunk
		rect.setPosition(345, 500);
		rect.setFillColor(sf::Color(0, 255, 100));
		rect.setSize(sf::Vector2f(5, 80));
		window.draw(rect);

		//left branch
		circle.setRadius(30);
		circle.setFillColor((sf::Color(100, 0, 100)));
		circle.setPosition(317, 464);
		window.draw(circle);

		//right branch
		circle.setRadius(15);
		circle.setFillColor((sf::Color(240, 240, 0)));
		circle.setPosition(332, 480);
		window.draw(circle);




		window.display(); //flip the buffer (memory) to the screen

	}//end game loop-------------------------------------------------



	return 0; //tell the operating system we finished the program successfully 
} //end main