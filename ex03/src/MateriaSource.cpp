/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcochran <rcochran@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 18:25:19 by rcochran          #+#    #+#             */
/*   Updated: 2025/11/18 19:38:38 by rcochran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"


MateriaSource::MateriaSource()
{
	std::cout << "MateriaSource Default constructor function called." << std::endl;
	return ;
}

// MateriaSource::MateriaSource(std::string name)
// {
// 	std::cout << "MateriaSource Overloaded constructor function called." << std::endl;
// 	return ;
// }

MateriaSource::MateriaSource(MateriaSource &cpy)
{
	(void)cpy;
	std::cout << "MateriaSource copy constructor function called." << std::endl;
	return ;
}

MateriaSource::~MateriaSource()
{
	std::cout << "MateriaSource Destructor function called." << std::endl;
	return ;
}

void MateriaSource::learnMateria(AMateria*)
{
	//
	return ;
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	AMateria	*new_materia;
	if (type=="ice")
		new_materia = new Ice();
	else
		new_materia = new Cure();
	return (new_materia);
}
