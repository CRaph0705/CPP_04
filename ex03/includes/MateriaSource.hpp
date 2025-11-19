/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcochran <rcochran@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 18:25:14 by rcochran          #+#    #+#             */
/*   Updated: 2025/11/19 10:31:18 by rcochran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include "AMateria.hpp"
#include "IMateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

class AMateria;

class	MateriaSource : public IMateriaSource
{
private:
public:
	AMateria *_materia_array[4];
	MateriaSource(void);
	// MateriaSource(std::string name);
	MateriaSource(MateriaSource &cpy);
	// MateriaSource &operator=(MateriaSource &cpy);
	~MateriaSource();
	void learnMateria(AMateria*);
	AMateria* createMateria(std::string const & type);
};
