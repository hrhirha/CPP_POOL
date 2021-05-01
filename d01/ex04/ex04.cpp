/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrhirha <hrhirha@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/29 16:13:32 by hrhirha           #+#    #+#             */
/*   Updated: 2021/04/29 16:17:56 by hrhirha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(void)
{
	std::string	str("HI THIS IS BRAIN");
	std::string	*ptr = &str;
	std::string	&ref = str;

	std::cout << "str: " << str << "\n";
	std::cout << "ptr: " << *ptr << "\n";
	std::cout << "ref: " << ref << "\n";
}
