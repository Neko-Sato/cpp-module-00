/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hshimizu <hshimizu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 20:08:04 by hshimizu          #+#    #+#             */
/*   Updated: 2024/03/27 02:21:27 by hshimizu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __PHONEBOOK_H__
#define __PHONEBOOK_H__

#include "Contact.hpp"
#include <iostream>

class PhoneBook
{
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
