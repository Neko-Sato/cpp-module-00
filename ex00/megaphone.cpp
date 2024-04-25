/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hshimizu <hshimizu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 17:29:32 by hshimizu          #+#    #+#             */
/*   Updated: 2024/04/25 17:28:26 by hshimizu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int argc, char *argv[]) {
  std::string s;

  if (1 < argc) {
    for (int i = 1; i < argc; i++) {
      s = argv[i];
      for (std::string::iterator c = s.begin(); c != s.end(); c++)
        *c = std::toupper(*c);
      std::cout << s;
    }
  } else
    std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
  std::cout << std::endl;
  return (0);
}
