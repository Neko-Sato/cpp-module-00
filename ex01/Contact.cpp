/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hshimizu <hshimizu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 20:50:24 by hshimizu          #+#    #+#             */
/*   Updated: 2024/03/26 01:10:16 by hshimizu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Contact.hpp>
#include <iostream>
#include <limits>

void Contact::init(void)
{
	this->_first_name = "";
	while (this->_first_name.empty())
	{
		std::cerr << "First name: ";
		if (!std::getline(std::cin, this->_first_name))
			throw std::runtime_error("EOF");
	}

	this->_last_name = "";
	while (this->_last_name.empty())
	{
		std::cerr << "Last name: ";
		if (!std::getline(std::cin, this->_last_name))
			throw std::runtime_error("EOF");
	}

	this->_nickname = "";
	while (this->_nickname.empty())
	{
		std::cerr << "Nickname: ";
		if (!std::getline(std::cin, this->_nickname))
			throw std::runtime_error("EOF");
	}

	this->_phone_number = "";
	while (this->_phone_number.empty())
	{
		std::cerr << "Phone Number: ";
		if (!std::getline(std::cin, this->_phone_number))
			throw std::runtime_error("EOF");
	}

	this->_darkest_secret = "";
	while (this->_darkest_secret.empty())
	{
		std::cerr << "Darkest Secret: ";
		if (!std::getline(std::cin, this->_darkest_secret))
			throw std::runtime_error("EOF");
	}
}

void Contact::print(void)
{
	std::cout << "First name: " << this->_first_name << std::endl;
	std::cout << "Last name: " << this->_last_name << std::endl;
	std::cout << "Nickname: " << this->_nickname << std::endl;
	std::cout << "Phone Number: " << this->_phone_number << std::endl;
	std::cout << "Darkest Secret: " << this->_darkest_secret << std::endl;
}

std::string Contact::get_first_name(void)
{
	return (this->_first_name);
}

std::string Contact::get_last_name(void)
{
	return (this->_last_name);
}

std::string Contact::get_nickname(void)
{
	return (this->_nickname);
}

std::string Contact::get_phone_number(void)
{
	return this->get_phone_number();
}

std::string Contact::get_darkest_secret(void)
{
	return this->get_darkest_secret();
}
