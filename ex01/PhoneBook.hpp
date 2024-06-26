/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hshimizu <hshimizu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 20:08:04 by hshimizu          #+#    #+#             */
/*   Updated: 2024/04/25 17:28:46 by hshimizu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __PHONEBOOK_HPP__
#define __PHONEBOOK_HPP__

#include <iostream>

#include "Contact.hpp"

class PhoneBook {
 private:
  static const int _size = 8;
  Contact _contacts[_size];
  int _index;

 public:
  PhoneBook(void);
  void run(void);
  void print(void);

  void add(void);
  void search(void);
};

#endif
