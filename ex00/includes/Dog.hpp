/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcochran <rcochran@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 10:55:24 by rcochran          #+#    #+#             */
/*   Updated: 2025/10/29 11:48:32 by rcochran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Animal.hpp"

class	Dog : public Animal
{
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