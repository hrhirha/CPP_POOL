/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrhirha <hrhirha@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 15:07:25 by hrhirha           #+#    #+#             */
/*   Updated: 2021/04/28 10:24:07 by hrhirha          ###   ########.fr       */
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
	std::cout << "|     index|first name| last name|  nickname|\n";
	std::cout << "|––––––––––|––––––––––|––––––––––|––––––––––|\n";
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
		std::cout << "|         " << i << "|";
		fill_field(contacts[i].get("first_name"));
		fill_field(contacts[i].get("last_name"));
		fill_field(contacts[i].get("nickname"));
		std::cout << "\n";
	}
	return (1);
}

int		valid_index(std::string s)
{
	int i = 0;
	if (s[i] == '-' || s[i] == '+') i++;
	for (; s[i]; i++)
	{
		if (s[i] < '0' || s[i] > '9')
		{
			std::cout << "Only numeric vlaues allowed.\n";
			return (0);
		}
	}
	return (1);
}

void	get_contact_info(Contact *contacts, int i)
{
	std::string	s_index;
	int			index;
	
	while (1)
	{
		std::cout << "Enter index for more info: ";
		std::getline(std::cin, s_index);
		if (!std::cin || s_index.empty()) break ;
		if (!valid_index(s_index)) continue ;
		if (s_index.size() > 9)
		{
			std::cout << "Too many degits!!\n";
			continue ;
		}
		index = std::stoi(s_index);
		if (index < 0 || index >= i)
		{
			std::cout << "Invalid index, try again.\n";
			continue ;
		}
		else
			contacts[index].info();
	}
}

int	add_contact(Contact *contacts, int *i)
{
	if (*i == 8)
	{
		std::cout << "PhoneBook is full, you can't add any more contacts\n";
		return (1);
	}
	contacts[*i].add();
	if (!contacts[*i].get("first_name").empty()
			&& !contacts[*i].get("last_name").empty()
			&& !contacts[*i].get("phone_number").empty())
		*i += 1;
	return (0);
}

int	main(void)
{
	Contact	contacts[8];
	int		i;
	std::string	command;

	i = 0;
	while (1)
	{
		std::cout << "Enter a command (ADD, SEARCH, EXIT): ";
		std::getline(std::cin, command);
		if (!std::cin)
		{
			std::cout << "\n";
			break ;
		}
		if (command == "EXIT")
			break;
		else if (command == "ADD")
		{
			if (!add_contact(contacts, &i))
				continue ;
		}
		else if (command == "SEARCH")
		{
			if (!search(contacts)) continue ;
			get_contact_info(contacts, i);
		}
	}
}
