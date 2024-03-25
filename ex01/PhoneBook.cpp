/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hshimizu <hshimizu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 20:50:24 by hshimizu          #+#    #+#             */
/*   Updated: 2024/03/26 01:53:40 by hshimizu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iomanip>
#include <iostream>
#include <cstdlib>

PhoneBook::PhoneBook(void)
{
	this->_index = 0;
}

void PhoneBook::run(void)
{
	std::string str;

	std::cerr << "Welcom PhoneBook!" << std::endl;
	try
	{
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
	catch (std::exception &e)
	{
		std::cerr << std::endl;
	}
	std::cerr << "Bye!" << std::endl;
}

void PhoneBook::add(void)
{
	this->_contacts[this->_index % this->_size].init();
	this->_index++;
}

static std::string truncate10(std::string str)
{
	if (10 < str.length())
	{
		str.resize(9);
		str += ".";
	}
	return (str);
}

void PhoneBook::print(void)
{
	int len;

	len = this->_index > this->_size ? this->_size : this->_index;
	if (!len)
	{
		std::cerr << "No contacts" << std::endl;
		return;
	}
	std::cout << std::setw(10) << "Index" << "|";
	std::cout << std::setw(10) << "First Name" << "|";
	std::cout << std::setw(10) << "Last Name" << "|";
	std::cout << std::setw(10) << "Nickname" << "|";
	std::cout << std::endl;
	for (int i = 0; i < len; i++)
	{
		Contact &contact = this->_contacts[i];
		std::cout << std::right << std::setw(10) << i << "|";
		std::cout << std::right << std::setw(10) << truncate10(contact.get_first_name()) << "|";
		std::cout << std::right << std::setw(10) << truncate10(contact.get_last_name()) << "|";
		std::cout << std::right << std::setw(10) << truncate10(contact.get_nickname()) << "|";
		std::cout << std::endl;
	}
}

void PhoneBook::search(void)
{
	std::string str;
	char *end;
	int i;
	int len;

	len = this->_index > this->_size ? this->_size : this->_index;
	this->print();
	if (!len)
		return;
	std::cerr << "index> ";
	if (!std::getline(std::cin, str))
		throw std::runtime_error("EOF");
	i = std::strtol(str.c_str(), &end, 10);
	if (*end || i < 0 || i >= len)
		std::cerr << "Invalid input" << std::endl;
	else
		this->_contacts[i].print();
}
