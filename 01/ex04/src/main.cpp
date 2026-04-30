/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sscheini <sscheini@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/12 19:12:47 by sscheini          #+#    #+#             */
/*   Updated: 2026/04/30 18:46:11 by sscheini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <fstream>

void	replaceValues(std::string &line, const std::string str1, const std::string str2)
{
	size_t	i;

	i = 0;
	while ((i = line.find(str1.c_str(), i)) != std::string::npos)
	{
		line.erase(i, str1.size());
		line.insert(i, str2);
		i += str2.size();
	}
}

int		main(int argc, const char **argv)
{
	std::string	filename;
	std::string	str1;
	std::string	str2;
	std::string	line;

	if (argc != 4)
		return (std::cout << "ERROR: number of arguments invalid\n", 1);
	filename = argv[1];
	str1 = argv[2];
	str2 = argv[3];
	if (str1.empty())
		return (std::cout << "ERROR: search string empty\n", 1);
	std::ifstream file(filename.c_str());
	if (!file.is_open())
		return (std::cout << "ERROR: invalid filename\n", 1);
	filename.append(".replace");
	std::ofstream replace(filename.c_str());
	if (!replace.is_open())	
		return (std::cout << "ERROR: unable to create .replace file\n", 1);
	while (!file.eof())
	{
		std::getline(file, line);
		replaceValues(line, str1, str2);
		replace << line;	
		if (!file.eof())
			replace << "\n";
	}
	return (0);
}