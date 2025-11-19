/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcochran <rcochran@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 18:25:19 by rcochran          #+#    #+#             */
/*   Updated: 2025/11/19 12:45:40 by rcochran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"


MateriaSource::MateriaSource()
{
	std::cout << "MateriaSource Default constructor function called." << std::endl;
	return ;
}

MateriaSource::MateriaSource(MateriaSource &cpy)
{
	(void)cpy;
	std::cout << "MateriaSource copy constructor function called." << std::endl;
	return ;
}

MateriaSource::~MateriaSource()
{
	std::cout << "MateriaSource Destructor function called." << std::endl;
	for (int i = 0; i < 4; i++)
	{
		if (this->_materia_array[i] != NULL)
			delete (this->_materia_array[i]);
	}
	return ;
}

void MateriaSource::learnMateria(AMateria *materia)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_materia_array[i] == NULL)
		{
			this->_materia_array[i] = materia;
			std::cout << "This source has learned " << materia->getType() << "."<< std::endl;
			return ;
		}
	}
	std::cout << "This source has already its 4 slots full." << std::endl;
	std::cout << "Couldn't learn " << materia->getType() << "." << std::endl;
	delete (materia);
	return ;
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_materia_array[i] && this->_materia_array[i]->getType() == type)
		{
			std::cout << "This source has created a " << type << "." << std::endl;
			return (this->_materia_array[i]->clone());
		}
	}
	std::cout << "No Materia of type " << type << " learned by this source." << std::endl;
	std::cout << "Creation aborted." << std::endl;
	return (NULL);
}
