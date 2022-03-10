#ifndef KAREN_H
#define KAREN_H
# include <iostream>

class Karen
{
private:
    void    debug( void );
    void    info( void );
    void    warming( void );
    void    error( void );
    void    nothing( void );

public:
    void    complain(std::string level);
    Karen(/* args */);
    ~Karen();
};

#endif