/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcochran <rcochran@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 13:57:23 by rcochran          #+#    #+#             */
/*   Updated: 2025/10/29 14:15:15 by rcochran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	//
public:
	// default
	WrongCat( void );
	// overloaded
	WrongCat(WrongCat &cpy);
	// copy
	WrongCat	&operator=(WrongCat &cpy);
	// destructor
	~WrongCat(void);
} ;