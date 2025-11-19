/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcochran <rcochran@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 12:37:37 by rcochran          #+#    #+#             */
/*   Updated: 2025/11/19 10:54:21 by rcochran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include "Character.hpp"

class Character;
class ICharacter;
class AMateria
{
protected:
	std::string	_type;
	Character	*_owner;
public:
AMateria( void );
AMateria(std::string const & type);
AMateria(AMateria &cpy);
AMateria	&operator=(AMateria &cpy);
virtual ~AMateria();


std::string const & getType() const; //Returns the materia type
void  setType(std::string new_type); //Returns the materia type
virtual AMateria* clone() const = 0;
virtual void use(ICharacter& target);
virtual	Character* getOwner();
virtual void	setOwner(Character *owner);
};