/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hshimizu <hshimizu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 17:29:32 by hshimizu          #+#    #+#             */
/*   Updated: 2024/04/25 17:28:41 by hshimizu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include <iostream>

#include "Contact.hpp"
#include "PhoneBook.hpp"

int main(void) {
  PhoneBook book;

  book.run();
  return (EXIT_SUCCESS);
}
