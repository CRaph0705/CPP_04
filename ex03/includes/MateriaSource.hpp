/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcochran <rcochran@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 18:25:14 by rcochran          #+#    #+#             */
/*   Updated: 2025/11/18 19:34:11 by rcochran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "AMateria.hpp"
#include "IMateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

class AMateria;

class	MateriaSource : public IMateriaSource
{
private:
	/* data */
public:
	MateriaSource(void);
	// MateriaSource(std::string name);
	MateriaSource(MateriaSource &cpy);
	// MateriaSource &operator=(MateriaSource &cpy);
	~MateriaSource();
	void learnMateria(AMateria*);
	AMateria* createMateria(std::string const & type);
};
