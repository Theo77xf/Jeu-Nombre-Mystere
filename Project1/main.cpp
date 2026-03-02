#include <iostream>
#include <random>
/*
* Jeu du nombre mystère
➤ Le programme choisit un nombre aléatoire entre 1 et 100.
➤ L’utilisateur doit deviner le nombre.
➤ Le programme indique “trop grand” ou “trop petit”.







*/
int main()
{
	std::srand(std::time(0)); 
	int min = 0;
	int max = 100;
	int vie = 5;
	int nombre;

	int randomNumber = min + rand() % (max - min + 1);

	bool gameend = false;
	std::cout << "Choissez un nombre entre  0 et 100" << std::endl;
	
	std::cout << randomNumber << std::endl;


	while (!gameend)
	{
		std::cin >> nombre;
		
		if (nombre > min || nombre < max  )
		{
			std::cout << "nombre invalide" << std::endl;
			continue;
		}
		if (nombre == randomNumber)
		{
			std::cout << "Félicitation tu as trouvé le nombre " << std::endl;
			gameend = true;
		}
		else {
			vie -= 1;
			if (randomNumber < nombre && randomNumber != nombre)
				std::cout << "le nombre est plus petit " << std::endl;
			else if (randomNumber > nombre && randomNumber != nombre)
				std::cout << "le nombre est plus grand" << std::endl;
			std::cout << "faux il vous reste " << vie << std::endl;
		}


		if (vie == 0)
			std::cout << "perdu le nombre etait : " << randomNumber << std::endl;
	}
	return 0;
}