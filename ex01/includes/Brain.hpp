/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcochran <rcochran@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 14:41:03 by rcochran          #+#    #+#             */
/*   Updated: 2025/10/30 11:28:55 by rcochran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class	Brain
{
private:
	std::string	ideas[100];
public:
	Brain(void);
	Brain(const Brain &cpy);
	Brain	&operator=(const Brain &cpy);
	~Brain(void);

	void setIdea(int i, const std::string input);
	std::string	getIdea(int i) const;
} ;