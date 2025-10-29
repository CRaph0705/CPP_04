/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcochran <rcochran@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 10:55:24 by rcochran          #+#    #+#             */
/*   Updated: 2025/10/29 15:22:49 by rcochran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Animal.hpp"
#include "Brain.hpp"

class	Dog : public Animal
{
private:
	Brain	*_brain;
public:
	// default
	Dog( void );
	// copy
	Dog(Dog &cpy);
	// assignation
	Dog	&operator=(Dog &cpy);
	// destructor
	~Dog(void);
} ;