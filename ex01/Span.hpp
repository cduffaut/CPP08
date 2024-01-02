#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <algorithm>
#include <vector>

class Span
{
    private:
            std::vector<int>stock;
            unsigned int maximum;

    public:
    Span();
    Span(unsigned int N);
    ~Span();

    void addNumber(int number);
    
    unsigned int shortestSpan() const;
    unsigned int longestSpan() const;

    unsigned int getMaximum() const;
    std::vector<int> getStock() const;

    // Adding several values in "once".
    template <typename Iterator>
    void addNumber(Iterator begin, Iterator end)
    {
        while (begin != end && stock.size() < getMaximum())
        {
            addNumber(*begin);
            ++begin;
        }
    }
};

#endif