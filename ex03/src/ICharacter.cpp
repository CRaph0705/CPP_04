/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcochran <rcochran@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 13:05:54 by rcochran          #+#    #+#             */
/*   Updated: 2025/11/18 19:03:41 by rcochran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ICharacter.hpp"

ICharacter::ICharacter(std::string name)
{
	(void) name;
	return ;
}

ICharacter::ICharacter(ICharacter &cpy)
{
	(void)cpy;
	return ;
}

ICharacter	&ICharacter::operator=(ICharacter &cpy)
{
	(void)cpy;
	return (*this);
}

void ICharacter::equip(AMateria* m)
{
	(void) m;
	return ;
}

void ICharacter::unequip(int idx)
{
	if (idx > 3 || idx < 0)
		return ;
	return ;
}

void ICharacter::use(int idx, ICharacter& target)
{
	if (idx > 3 || idx < 0)
		return ;

	(void) target;
	return ;
}