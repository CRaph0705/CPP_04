/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcochran <rcochran@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 12:19:05 by rcochran          #+#    #+#             */
/*   Updated: 2025/11/18 17:37:55 by rcochran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#pragma once
#include "AMateria.hpp"

class Cure : public AMateria
{
private:
public:
	Cure(void);
	Cure(Cure &cpy);
	Cure	&operator=(Cure &cpy);
	~Cure(void);

	void use(ICharacter& target);

} ;