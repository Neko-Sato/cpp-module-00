/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hshimizu <hshimizu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 20:50:24 by hshimizu          #+#    #+#             */
/*   Updated: 2024/04/25 17:28:31 by hshimizu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

#include <iostream>

void Contact::init(void) {
  _first_name = "";
  while (_first_name.empty()) {
    if (std::cin.eof()) throw std::runtime_error("EOF");
    std::cerr << "First name: ";
    std::getline(std::cin, _first_name);
  }

  _last_name = "";
  while (_last_name.empty()) {
    if (std::cin.eof()) throw std::runtime_error("EOF");
    std::cerr << "Last name: ";
    std::getline(std::cin, _last_name);
  }

  _nickname = "";
  while (_nickname.empty()) {
    if (std::cin.eof()) throw std::runtime_error("EOF");
    std::cerr << "Nickname: ";
    std::getline(std::cin, _nickname);
  }

  _phone_number = "";
  while (_phone_number.empty()) {
    if (std::cin.eof()) throw std::runtime_error("EOF");
    std::cerr << "Phone Number: ";
    std::getline(std::cin, _phone_number);
  }

  _darkest_secret = "";
  while (_darkest_secret.empty()) {
    if (std::cin.eof()) throw std::runtime_error("EOF");
    std::cerr << "Darkest Secret: ";
    std::getline(std::cin, _darkest_secret);
  }
}

void Contact::print(void) {
  std::cout << "First name: " << _first_name << std::endl;
  std::cout << "Last name: " << _last_name << std::endl;
  std::cout << "Nickname: " << _nickname << std::endl;
  std::cout << "Phone Number: " << _phone_number << std::endl;
  std::cout << "Darkest Secret: " << _darkest_secret << std::endl;
}

std::string Contact::get_first_name(void) { return _first_name; }

std::string Contact::get_last_name(void) { return _last_name; }

std::string Contact::get_nickname(void) { return _nickname; }

std::string Contact::get_phone_number(void) { return _phone_number; }

std::string Contact::get_darkest_secret(void) { return _darkest_secret; }
