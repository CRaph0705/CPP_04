/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcochran <rcochran@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 10:54:52 by rcochran          #+#    #+#             */
/*   Updated: 2025/10/29 14:52:25 by rcochran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Animal.hpp"

class Cat : public Animal
{
public:
	// default
	Cat( void );
	// overloaded
	Cat(Cat &cpy);
	// copy
	Cat	&operator=(Cat &cpy);
	// destructor
	~Cat(void);

	void	makeSound() const;
} ;