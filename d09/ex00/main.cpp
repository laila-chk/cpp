/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchokri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 13:01:31 by lchokri           #+#    #+#             */
/*   Updated: 2023/03/24 14:26:00 by lchokri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//       ..        stacks            ..         //

#include <stack>
#include <iostream>
#include <fstream>
#include <map>
#include <sstream>
#include <string>

	//store vals in map.
	//read from file
	//output result

int check_date(std::string& date)
{
	//XxXx-Xx-Xx
	std::string::iterator it = date.end() - 1;
	while (*it == ' ' || *it == '\t')
		date.erase(it--);
	if (date.length() != 10 || date.compare(5,2, "12") > 0 || date.compare(8,2, "31") > 0 ||
		 date.compare(5,2, "00") <= 0 || date.compare(8,2, "00") <= 0 )
		{
			std::cout << date << "Wrong date format in data file, exiting.." << std::endl;
			exit(0) ;
		}
	return (1);
}

void ft_parse(std::map<int, float>& data)
{
	std::string line;
	std::string date;
	std::string value;
	std::ifstream data_file("tst.csv");
	if (data_file.fail()) { std::cout << "Error: couldn't open file to get data, exiting.." << std::endl; exit(0) ;}

	while (getline(data_file, line)) // line: 2009-02-13,0
	{
		value = "";
		std::stringstream buff(line);
		getline(buff, date, ',');
		getline(buff, value, ',');

		if (check_date(date))
		{
			int mkey = 0;
			float mval = std::stof(value);
			date.erase(std::remove(date.begin(), date.end(), '-'), date.end());
			std::stringstream key(date);
			key >> mkey;
//			std::cout << "mkey is : " << mkey << " and val = " << mval <<  std::endl;
			data[mkey] = mval;


		}
	}
	std::cout << " Printing the Map: " << std::endl;
	for(std::map<int, float >::const_iterator it = data.begin(); it != data.end(); ++it)
	 {
	     std::cout << " key: " << it->first << " value: " << it->second << std::endl;
	 }
}


int main(int ac, char **av)
{
	std::map<int, float> data;
    if (ac !=  2)
    {
        std::cout << "Error: couldn't open file " << std::endl;
        return 1;
    }
   ft_parse (data); // reads from data.csv and store things in map.
} 




/*

	std::string buff; // buffer for getline;
	std::ifstream data(data.csv);
	if (data.fail())
	{
        std::cout << "Error: couldn't open file " << std::endl;
		return ;
	}
	while (std::getline(data, buff))
	{
		stringstream line(buff);
//		getline(line, STACK[], ',');
	}


*/