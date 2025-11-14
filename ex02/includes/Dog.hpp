/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcochran <rcochran@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 10:55:24 by rcochran          #+#    #+#             */
/*   Updated: 2025/11/14 18:42:47 by rcochran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "AAnimal.hpp"
#include "Brain.hpp"

class	Dog : public AAnimal
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

	void	setBrain(Brain *brain);
	Brain	*getBrain(void);

	void setIdea(int i, const std::string input);
	std::string getIdea(int i);

	void	makeSound() const;
} ;