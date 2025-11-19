/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcochran <rcochran@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 12:19:05 by rcochran          #+#    #+#             */
/*   Updated: 2025/11/19 10:31:02 by rcochran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include "AMateria.hpp"

class Cure : public AMateria
{
private:
public:
	Cure(void);
	Cure(const Cure &cpy);
	Cure	&operator=(Cure &cpy);
	~Cure(void);

	void use(ICharacter& target);
	AMateria* clone() const;
} ;