/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hshimizu <hshimizu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 20:50:24 by hshimizu          #+#    #+#             */
/*   Updated: 2024/03/25 02:09:27 by hshimizu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iomanip>

PhoneBook::PhoneBook(void)
{
	this->_index = 0;
}

void PhoneBook::run(void)
{
	std::string str;

	while (true)
	{
		std::cerr << "PhoneBook> ";
		if (!std::getline(std::cin, str))
			throw std::runtime_error("EOF");
		if (str == "ADD")
			this->add();
		else if (str == "SEARCH")
			this->search();
		else if (str == "EXIT")
			break;
		else if (str != "")
			std::cerr << "ADD, SEARCH, EXIT" << std::endl;
	}
}

void PhoneBook::add(void)
{
	this->_contacts[this->_index % this->_size].init();
	this->_index++;
}

void PhoneBook::search(void)
{
	int i;

	for (i = 0; i < (this->_index < this->_size ? this->_index : this->_size); i++)
	{
		std::cout << std::setw(10) << this->_contacts[i].get_first_name() << "|";
		std::cout << std::setw(10) << this->_contacts[i].get_last_name() << "|";
		std::cout << std::setw(10) << this->_contacts[i].get_nickname() << "|" << std::endl;
	}
	std::cerr << "index> ";
	std::cin >> i;
	std::cin.clear();
	this->_contacts[i].print();
}
