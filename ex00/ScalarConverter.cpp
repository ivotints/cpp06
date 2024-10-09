/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivotints <ivotints@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 13:05:30 by ivotints          #+#    #+#             */
/*   Updated: 2024/09/20 11:34:09 by ivotints         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter() {}

ScalarConverter::ScalarConverter(const ScalarConverter &src) {(void)src;}

ScalarConverter &ScalarConverter::operator=(const ScalarConverter &src) {(void)src; return(*this);}

ScalarConverter::~ScalarConverter() {}

static bool my_stod(const std::string &str, double &result)
{
	std::stringstream	ss(str);
	char				leftover;

	if (str == "-inff" || str == "-inf")
		result = -std::numeric_limits<double>::infinity();
	else if (str == "inff" || str == "inf" || str == "+inff" || str == "+inf")
		result = +std::numeric_limits<double>::infinity();
	else if (str == "nan" || str == "NaN" || str == "nanf" || str == "NaNf")
		result = nan("");
	else
	{
		ss >> result;
		if (ss.fail())
			return (false);
		if (ss >> leftover)
		{
			if (leftover == 'f' || leftover == 'F')
			{
				if (ss >> leftover)
					return (false);
			}
			else
				return (false);
		}
	}
	return (true);
}

static void ft_print(double value, int len)
{
	bool	is_int = (std::floor(value) == value);

	if (is_int && value > 31 && value < 127)
		std::cout << "char: '" << static_cast<char>(value) << "'\n";
	else
		std::cout << "char: Non displayable\n";
	if (value < 2147483648 && value > -2147483649)
		std::cout << "int: " << static_cast<int>(value) << std::endl;
	else
		std::cout << "int: Non displayable\n";
	if (is_int)
		std::cout << std::fixed << std::setprecision(1);
	else if (len > 9)
		std::cout << std::fixed;
	std::cout << "float: " << static_cast<float>(value) << "f\n";
	std::cout << "double: " << value << "\n";
}

void	ScalarConverter::convert(const std::string &str)
{
	double	value;
	int		len = str.length();

	if (len == 3 && str[0] == '\'' && str[2] == '\'')
	{
		value = static_cast<double>(str[1]);
		ft_print(value, len);
		return ;
	}
	if (my_stod(str, value) == false)
		std::cerr << "Wrong input\n";
	else
		ft_print(value, len);
}
