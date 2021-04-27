/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrhirha <hrhirha@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 15:07:25 by hrhirha           #+#    #+#             */
/*   Updated: 2021/04/27 15:07:58 by hrhirha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void	fill_field(std::string s)
{
	if (s.size() >= 10)
		std::cout << s.substr(0, 9) << ".|";
	else
		std::cout << std::string(10 - s.size(), ' ') << s << "|";

}

int	search(Contact *contacts)
{
	std::cout << "     index|first name| last name|  nickname|\n";
	if (contacts[0].get("first_name").empty()
		|| contacts[0].get("last_name").empty()
		|| contacts[0].get("phone_number").empty())
		return (0);
	for (int i = 0; i < 8; i++)
	{
		if (contacts[i].get("first_name").empty()
			|| contacts[i].get("last_name").empty()
			|| contacts[i].get("phone_number").empty())
			break ;
		std::cout << "         " << i << "|";
		fill_field(contacts[i].get("first_name"));
		fill_field(contacts[i].get("last_name"));
		fill_field(contacts[i].get("nickname"));
		std::cout << "\n";
	}
	return (1);
}

int	main(void)
{
	Contact	contacts[8];
	int		i;
	int		index;
	std::string	command;

	i = 0;
	while (1)
	{
		std::cout << "Enter a command (ADD, SEARCH, EXIT): ";
		std::getline(std::cin, command);
		if (command == "EXIT")
			break;
		else if (command == "ADD")
		{
			if (i == 8)
			{
				std::cout << "PhoneBook is full, you can't add any more contacts\n";
				continue ;
			}
			contacts[i].add();
			if (!contacts[i].get("first_name").empty()
				&& !contacts[i].get("last_name").empty()
				&& !contacts[i].get("phone_number").empty())
				i++;
		}
		else if (command == "SEARCH")
		{
			if (!search(contacts)) continue ;
			while (1)
			{
				std::cout << "Enter index for more info: ";
				index = std::cin.get();
				if (index == '\n') break ;
				index -= 48;
				if (index < 0 || index >= i)
					std::cout << "No entry found, try a different index\n";
				else
					contacts[index].info();
				std::cin.ignore(INT_MAX,'\n');
			}
		}
	}
}
