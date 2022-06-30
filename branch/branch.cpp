#include <iostream>

int main()
{
    int side;

    std::cout << "Enter the size of the parties: ";
    std::cin >> side;
    std::cout << std::endl;

    for (int i = 0; i < side; i++)
    {
        for (int j = 0; j < side; j++)
        {
            if (i == 0 || j == 0 || i == side - 1 || j == side - 1)
                std::cout << "* ";
            else
                std::cout << "  ";
        }
        std::cout << std::endl;
    }
    system("pause");
    return 0;
}