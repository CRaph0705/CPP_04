/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcochran <rcochran@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 10:54:52 by rcochran          #+#    #+#             */
/*   Updated: 2025/11/14 18:43:05 by rcochran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "AAnimal.hpp"
#include "Brain.hpp"

class Cat : public AAnimal
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
	void	makeSound() const;
} ;