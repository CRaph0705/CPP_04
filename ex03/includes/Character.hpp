/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcochran <rcochran@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 12:17:31 by rcochran          #+#    #+#             */
/*   Updated: 2025/11/19 10:58:20 by rcochran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include "ICharacter.hpp"
#include "AMateria.hpp"

class ICharacter;
class Character: public ICharacter {
	private:
	std::string _name;
	AMateria *inventory[4];
	public:
	Character( void );
	Character(std::string name);
	Character(Character &cpy);
	Character	&operator=(Character &cpy);
	~Character( void );

	std::string const & getName() const {return (this->_name);};
	
	void equip(AMateria* m);
	void unequip(int idx);
	void use(int idx, ICharacter& target);
} ;