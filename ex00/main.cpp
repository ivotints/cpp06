/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivotints <ivotints@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 14:11:30 by ivotints          #+#    #+#             */
/*   Updated: 2024/10/08 17:11:54 by ivotints         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main(int, char **av)
{
	if (av[1])
		ScalarConverter::convert(av[1]);
	else
	{
		std::cout << "=== Testing ScalarConverter::convert ===\n";

		std::cout << "\n-- Valid Integer Inputs --\n";
		ScalarConverter::convert("42");
		ScalarConverter::convert("-42");
		ScalarConverter::convert("2147483647"); // Max int
		ScalarConverter::convert("-2147483648"); // Min int

		std::cout << "\n-- Valid Float Inputs --\n";
		ScalarConverter::convert("42.0f");
		ScalarConverter::convert("-42.0f");
		ScalarConverter::convert("3.14159f");
		ScalarConverter::convert("0.0f");
		ScalarConverter::convert("-0.0f");

		std::cout << "\n-- Valid Double Inputs --\n";
		ScalarConverter::convert("42.0");
		ScalarConverter::convert("-42.0");
		ScalarConverter::convert("3.14159");
		ScalarConverter::convert("0.00000123456789");
		ScalarConverter::convert("-1234567890.123456789");

		std::cout << "\n-- Valid Char Inputs --\n";
		ScalarConverter::convert("'a'");
		ScalarConverter::convert("'Z'");
		ScalarConverter::convert("'1'");
		ScalarConverter::convert("'!'");

		std::cout << "\n-- Edge Cases --\n";
		ScalarConverter::convert("nan");  // Not a number
		ScalarConverter::convert("nanf");
		ScalarConverter::convert("inf");  // Positive infinity
		ScalarConverter::convert("-inf"); // Negative infinity
		ScalarConverter::convert("+inf");
		ScalarConverter::convert("inff");
		ScalarConverter::convert("-inff");

		std::cout << "\n-- Invalid Inputs --\n";
		ScalarConverter::convert("abcd"); // Invalid string
		ScalarConverter::convert("42.0ff"); // Invalid float literal
		ScalarConverter::convert("'ab'");  // Invalid char literal
		ScalarConverter::convert("123abc"); // Invalid mixed input
		ScalarConverter::convert("");  // Empty string

		std::cout << "\n=== End of Tests ===\n";
	}
}
