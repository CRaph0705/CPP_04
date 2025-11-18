/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcochran <rcochran@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 10:10:55 by rcochran          #+#    #+#             */
/*   Updated: 2025/11/18 10:57:34 by rcochran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

int main()
{
	AAnimal *animals[4];
	animals[0] = new Dog;
	animals[1] = new Cat;
	animals[2] = new Dog;
	animals[3] = new Cat;
	std::cout << std::endl;
	std::cout << "animal[0] adress : " << &animals[0] << std::endl;
	
	std::cout << std::endl;
	std::cout << "Tests :" <<std::endl;
	Dog doggo;
	Dog	doggo2(doggo);
	doggo.setIdea(0, "I want a bone");
	doggo2.setIdea(0, "I want to play");
	std::cout << std::endl;
	std::cout << "doggo idea[0] : " << doggo.getIdea(0) << std::endl;
	std::cout << "doggo2 idea[0] : " << doggo2.getIdea(0) << std::endl;
	std::cout << std::endl;
	
	std::cout << "Delete array :" << std::endl;

	for (int i = 0; i < 4; i++)
		delete animals[i];

	std::cout << "Array deleted." << std::endl;
	return (0);
}
