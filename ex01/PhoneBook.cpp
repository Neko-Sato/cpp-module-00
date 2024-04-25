/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hshimizu <hshimizu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 20:50:24 by hshimizu          #+#    #+#             */
/*   Updated: 2024/04/25 17:28:43 by hshimizu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

#include <cstdlib>
#include <iomanip>
#include <iostream>

PhoneBook::PhoneBook(void) : _index(0) {}

void PhoneBook::run(void) {
  std::string str;

  std::cerr << "Welcom PhoneBook!" << std::endl;
  try {
    while (true) {
      if (std::cin.eof()) throw std::runtime_error("EOF");
      std::cerr << "PhoneBook> ";
      std::getline(std::cin, str);
      if (str == "ADD")
        add();
      else if (str == "SEARCH")
        search();
      else if (str == "EXIT")
        break;
    }
  } catch (std::exception &e) {
    std::cerr << std::endl;
  }
  std::cerr << "Bye!" << std::endl;
}

void PhoneBook::add(void) { _contacts[_index++ % _size].init(); }

static std::string truncate10(std::string str) {
  if (10 < str.length()) {
    str.resize(9);
    str += ".";
  }
  return (str);
}

void PhoneBook::print(void) {
  int len;

  len = _index > _size ? _size : _index;
  if (!len) {
    std::cerr << "No contacts" << std::endl;
    return;
  }
  std::cout << std::setw(10) << "Index"
            << "|";
  std::cout << std::setw(10) << "First Name"
            << "|";
  std::cout << std::setw(10) << "Last Name"
            << "|";
  std::cout << std::setw(10) << "Nickname"
            << "|";
  std::cout << std::endl;
  for (int i = 0; i < len; i++) {
    Contact &contact = _contacts[i];
    std::cout << std::right << std::setw(10) << i << "|";
    std::cout << std::right << std::setw(10)
              << truncate10(contact.get_first_name()) << "|";
    std::cout << std::right << std::setw(10)
              << truncate10(contact.get_last_name()) << "|";
    std::cout << std::right << std::setw(10)
              << truncate10(contact.get_nickname()) << "|";
    std::cout << std::endl;
  }
}

void PhoneBook::search(void) {
  std::string str;
  char *end;
  int i;
  int len;

  len = _index > _size ? _size : _index;
  print();
  if (!len) return;
  while (str.empty()) {
    if (std::cin.eof()) throw std::runtime_error("EOF");
    std::cerr << "index> ";
    std::getline(std::cin, str);
  }
  i = std::strtol(str.c_str(), &end, 10);
  if (*end || i < 0 || i >= len)
    std::cerr << "Invalid input" << std::endl;
  else
    _contacts[i].print();
}
