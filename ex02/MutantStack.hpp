#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <stack>
# include <string>

// deque: a data structure that allows 
// elements to be added and deleted at both ends
// A deque is similar to a vector

// deque here is underlying of stack
// It help us to add an iteration extension
// to stack inheritance.
template <typename T>
class MutantStack : public std::stack<T, std::deque<T> >
{
    private:


    public:
        MutantStack(){};
        MutantStack(MutantStack const &other):std::stack<T>(other){};

    // shortcut to make the code more readable.
    typedef typename std::deque<T>::iterator iterator;

    // adding iterator "extension" through deque
    iterator begin()
    {
        // 'c' is a member of the "sous-jacent" container.
        return (this->c.begin());
    }
    iterator end()
    {
        return (this->c.end());
    }
    ~MutantStack()
    {
        // Clear the stack use for deque
        this->c.clear();
    };
};

#endif