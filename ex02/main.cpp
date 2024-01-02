#include "MutantStack.hpp"

int main()
{
    std::cout << "---- Test from the subject: ----" << std::endl;
    MutantStack<int> mstack;
    mstack.push(5);
    mstack.push(17);
    std::cout << mstack.top() << std::endl;
    mstack.pop();
    std::cout << mstack.size() << std::endl;
    mstack.push(3); mstack.push(5); mstack.push(737); //[...] mstack.push(0);
    MutantStack<int>::iterator it = mstack.begin(); MutantStack<int>::iterator ite = mstack.end();
    ++it;
    --it;
    while (it != ite)
    {
        std::cout << *it << std::endl;
        ++it;
    }
    std::stack<int> s(mstack);

    std::cout << "---- Own test: ----" << std::endl;
    MutantStack<std::string> restack;

    restack.push ("Sto con");
    restack.push ("I miei slime");
    restack.push ("Mangiamo ancora");
    restack.push ("dallo stesso piatto");

    MutantStack<std::string>::iterator ptr = restack.begin();
    MutantStack<std::string>::iterator ptr2 = restack.end();

    std::cout << "Premier élement: " << *ptr << std::endl;
    std::cout << "Dernier élement: " << *(ptr2 - 1)<< std::endl;

    std::cout << "Nombre d'éléments dans restack: " << restack.size() << std::endl;

    return 0;
}