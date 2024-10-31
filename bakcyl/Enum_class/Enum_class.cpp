#include <iostream>


enum class CatState
{
    Sleeping,
    Hungry,
    Idle,
    Overfed
};

void feedTheCat(CatState& state)
{
    switch (state)
    {
        case CatState::Sleeping:
            std::cout << "cat is sleeping, no need to wake it up. \n";
            break;
        case CatState::Hungry:
            std::cout << "Feeding a cat... \n";
            state = CatState::Idle; 
            break;
        case CatState::Idle:
            std::cout << "Feeding a cat... it will cause overfed\n";
            state = CatState::Overfed;
            break;
        case CatState::Overfed:
            std::cout << "Cat is overfed, better not to feed \n";
            break;
        default:
            std::cout << "Cat is in not know state, better not to feed\n";
            break;
    }

}

int main()
{
    CatState catState{CatState::Hungry};
    feedTheCat(catState);
    feedTheCat(catState);
    feedTheCat(catState);

    std::cin.get();
    return 0;

}