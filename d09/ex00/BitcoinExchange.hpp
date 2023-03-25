


#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

#include <stack>
#include <iostream>
#include <fstream>
#include <map>
#include <sstream>
#include <string>
#include  <cctype>

void	ft_parse_file(std::string input, std::map<int, float> data);
void	find_and_calc(std::map<int, float> data, int key, std::string val);
std::string key_to_date(int key);
void ft_parse_data(std::map<int, float>& data);
bool is_header(std::string line);
int check_date(std::string& date, int ky);

#endif 
