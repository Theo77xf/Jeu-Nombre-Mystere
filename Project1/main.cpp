#include <iostream>
#include <cstdlib>
#include <ctime>

int main()
{
    std::srand(std::time(0));

    int min = 0;
    int max = 100;
    int vie = 5;
    int nombre;

    int randomNumber = min + rand() % (max - min + 1);

    bool gameend = false;

    std::cout << "Choisissez un nombre entre 0 et 100" << std::endl;

    while (!gameend)
    {
        std::cin >> nombre;

     
        if (nombre < min || nombre > max)
        {
            std::cout << "Nombre invalide" << std::endl;
            continue;
        }

        if (nombre == randomNumber)
        {
            std::cout << "Félicitations, tu as trouvé le nombre !" << std::endl;
            gameend = true;
        }
        else
        {
            vie--;

            if (randomNumber < nombre)
                std::cout << "Le nombre est plus petit" << std::endl;
            else
                std::cout << "Le nombre est plus grand" << std::endl;

            std::cout << "Faux, il vous reste " << vie << " vies" << std::endl;

            if (vie == 0)
            {
                std::cout << "Perdu, le nombre était : " << randomNumber << std::endl;
                gameend = true;
            }
        }
    }

    return 0;
}