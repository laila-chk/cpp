/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchokri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 13:01:31 by lchokri           #+#    #+#             */
/*   Updated: 2023/03/25 14:24:12 by lchokri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//       ..        stacks            ..         //
#include "BitcoinExchange.hpp"

/*
#include <stack>
#include <iostream>
#include <fstream>
#include <map>
#include <sstream>
#include <string>
#include  <cctype>

int check_date(std::string& date, int ky)
{
	std::string::iterator it = date.end() - 1;
	while (*it == ' ' || *it == '\t')
		date.erase(it--);
	if ((date.length() != 10 || date.compare(5,2, "12") > 0 || date.compare(8,2, "31") > 0 ||
				date.compare(5,2, "00") <= 0 || date.compare(8,2, "00") <= 0))
	{
		if (ky)
		{
			std::cout<< date << "Error: Wrong date format in data file!" << std::endl;
			exit(0) ;
		}
		else
		{
			if (date.length())
				std::cout << "Error: bad input => " << date<< std::endl; 
			else
				std::cout << "Error: date is missing!" << std::endl;
			return 0;
		}
	}
	return (1);
}

bool is_header(std::string line)
{
	int i;
	int n = line.length();
	for (i = 0; i < n; i++)
	{
		if (isdigit(line[i]))
			break;
	}
	return (n == i);
}

void ft_parse_data(std::map<int, float>& data)
{
	int first_line = 1;
	std::string line;
	std::string date;
	std::string value;
	std::ifstream data_file("data.csv");
	if (data_file.fail()) { std::cout << "Error: couldn't open file to get data, exiting.." << std::endl; exit(0) ;}

	while (getline(data_file, line))
	{
		if (first_line && is_header(line))
			first_line = 0;
		else
		{
			value = "";
			std::stringstream buff(line);
			getline(buff, date, ',');
			getline(buff, value, ',');

			if (check_date(date, 1))
			{
				int mkey = 0;
				if (value.length())
				{
					float mval = std::stof(value);
					date.erase(std::remove(date.begin(), date.end(), '-'), date.end());
					std::stringstream key(date);
					key >> mkey;
					data[mkey] = mval;
				}
			}
		}
	}
}

std::string key_to_date(int key)
{
	std::ostringstream oss;
	oss << key;
	std::string ret = oss.str();
	ret.insert(4, "-");
	ret.insert(7, "-");
	return ret;
}

void	find_and_calc(std::map<int, float> data, int key, std::string val)
{
	std::string date;
	date = key_to_date(key);
	if (!val.length())
	{
		std::cout << "Error: value should be submitted." << std::endl;
		return;
	}
	int value = stof(val);
	if (value < 0)
		std::cout << "Error: value not a positive number." << std::endl;
	else if ( value > 1000)
		std::cout << "Error: value too large. " << std::endl;
	else
	{
		std::map<int, float>::iterator it = data.end();
		it = data.lower_bound(key);
		if (it != data.end())
			std::cout << date <<" => " << value <<" = "<< it->second *  value << std::endl;
	}
}

void	ft_parse_file(std::string input, std::map<int, float> data)
{
	std::string line;
	std::string date;
	std::string val;
	std::ifstream file(input);
	int first_line = 1;
	while (getline(file, line) )
	{
		if (first_line && is_header(line))
			first_line = 0;
		else
		{
			std::stringstream redir(line);
			getline(redir, date, '|');
			getline(redir, val, '|');
			if (check_date(date, 0) )
			{
				int mkey;
				date.erase(std::remove(date.begin(), date.end(), '-'), date.end());
				std::stringstream key(date);
				key >> mkey;
				find_and_calc(data, mkey, val);
			}
		}
	}
}

*/
int main(int ac, char **av)
{
	std::map<int, float> data;
	if (ac !=  2)
	{
		std::cout << "Error: couldn't open file " << std::endl;
		return 1;
	}
	ft_parse_data (data);
	ft_parse_file(av[1], data);
} 

