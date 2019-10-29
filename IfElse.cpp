#include <iostream>

int main()
{
    int m_Key;
    int m_Wrong;

    std::cout << "Enter a Key: ";
    std::cin >> m_Key;

    if (m_Key > 10)
    {
        std::cout << "Lapas bard";
    }
    else if (m_Key <= 0)
    {
        std::cout << "gamay ra kay bard";
    }
    else
    {
        std::cout << "Enter Key: ";
        std::cin >> m_Wrong;

        if (m_Wrong > 10)
        {
            std::cout << "Lapas bard balik duwa";
        }
        else if (m_Wrong <= 0)
        {
            std::cout << "gamay ra kay bard balik duwa";
        }
        else
        {
            if (m_Wrong == m_Key)
            {
                std::cout << "unlock";
            }
            else
            {
                std::cout << "not the right key";
            }
        }
    }
    return 0;
}