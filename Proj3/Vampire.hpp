/**********************
 **Program Name: Vampire.hpp
 **Author: Jeovani Vela
 **Date: 2/7/18
 **Description: This is the specification file for the derived class
 **Vampire. Its parent class is Character.
***********************/

#ifndef VAMPIRE_H
#define VAMPIRE_H

class Vampire : public Character
{
	public:
		Vampire();	//constructor
		~Vampire();	//destructor
		virtual int attackRoll();
		virtual int defenseRoll();
		virtual bool isDead();
		
};
#endif
