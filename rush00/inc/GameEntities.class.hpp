#ifndef GAMEENTITIES_CLASS_HPP
# define GAMEENTITIES_CLASS_HPP

# include <iostream>
# include "Form.hpp"

class AGameEntities {
    public:
        AGameEntities();
        AGameEntities(int);
        AGameEntities(int, int, int);
        AGameEntities(int, Form);
        AGameEntities(AGameEntities const & src);
        virtual ~AGameEntities();

        AGameEntities& operator=(AGameEntities const & src);
		bool touch(AGameEntities & obj);

		int getPos(int i) const;
        Form const & getForm() const;
        int getHp() const;

        void setHp( int );

        bool virtual nextFrame( int );
        void takeDamage( int );

        //10
        //int _wait;
    protected:
        int _hp;
        int _pos[2];
        Form _form;
};

#endif
