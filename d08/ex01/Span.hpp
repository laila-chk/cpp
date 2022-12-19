#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>

class Span {
    unsigned int _N; 
    std::vector<int> vec;
  public:
    /*     Canonical Form:     */
    Span();
    Span(unsigned int N);
    Span(const Span& sp);
    Span& operator= (const Span& sp);

    /*     methods:     */
    void addNumber(int n);
    int shortestSpan();
    int longestSpan();
    template<typename T> 
    void addRange(T& data, int a, int e);
};    


#endif
