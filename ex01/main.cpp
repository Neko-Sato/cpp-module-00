/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hshimizu <hshimizu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 17:29:32 by hshimizu          #+#    #+#             */
/*   Updated: 2024/03/26 01:11:13 by hshimizu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include <PhoneBook.hpp>
#include <Contact.hpp>

int main(void)
{
	PhoneBook book;

	book.run();
	return (EXIT_SUCCESS);
}