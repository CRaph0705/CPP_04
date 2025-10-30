/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcochran <rcochran@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 10:54:52 by rcochran          #+#    #+#             */
/*   Updated: 2025/10/30 13:17:40 by rcochran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
private:
	Brain	*_brain;
public:
	// default
	Cat( void );
	// overloaded
	Cat(Cat &cpy);
	// copy
	Cat	&operator=(Cat &cpy);
	// destructor
	~Cat(void);

	void	setBrain(Brain *brain);
	Brain	*getBrain(void);
	
	void setIdea(int i, const std::string input);
	std::string getIdea(int i);
} ;