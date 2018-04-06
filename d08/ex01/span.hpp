#include <vector>

class Span {

public:
    Span( int );
    Span (Span const & src);
    Span & operator=(Span const & src);
    virtual ~Span ();

    void addNumber( int );
    int shortestSpan();
    int longestSpan();

    struct ListTooShort : std::exception {
        const char* what( void ) const _NOEXCEPT;
    };
    struct ListFull : std::exception {
        const char* what( void ) const _NOEXCEPT;
    };

private:
    Span ();
    std::vector<int> *_list;
    int _number;
    int _max;
};
