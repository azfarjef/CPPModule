/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahmad-j <mahmad-j@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 11:05:24 by mahmad-j          #+#    #+#             */
/*   Updated: 2022/12/22 12:43:07 by mahmad-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Array.hpp"
#include <ctime>
#include <cstdlib>

// int	main()
// {
// 	unsigned int		n = 5;
// 	Array<int>			int_arr1;
// 	Array<int>			int_arr2(n);
// 	Array<std::string>	str_arr(5);

// 	// EMPTY
// 	try
// 	{
// 		std::cout << "Trying to access element 0 of int_arr1: " << int_arr1[0] << std::endl;
// 	}
// 	catch(const std::exception& e)
// 	{
// 		std::cerr << e.what() << "\n";
// 	}
// 	try
// 	{
// 		std::cout << "Trying to assign element 2 of int_arr1: ";
// 		int_arr1[2] = 2;
// 	}
// 	catch(const std::exception& e)
// 	{
// 		std::cerr << e.what() << "\n\n";
// 	}
	
	
// 	//INT ARRAY
// 	std::cout << "Initializing int_arr2" << std::endl;
// 	std::cout << "int_arr2:\n" << int_arr2 << std::endl;

// 	for (unsigned int i = 0; i < n; i++)
// 		int_arr2[i] = i;

// 	std::cout << "After assigning values to int_arr2" << std::endl;
// 	std::cout << "int_arr2:\n" << int_arr2 << std::endl;
	
// 	//STRING ARRAY
// 	std::string	a[5] = {"A", "B", "C", "D", "E"};

// 	std::cout << "str_arr2:\n" << str_arr << std::endl;
// 	for (unsigned int i = 0; i < n; i++)
// 		str_arr[i] = a[i] + " string";
// 	std::cout << "str_arr2:\n" << str_arr << std::endl;

// 	return 0;
// }

#define MAX_VAL 750

int main()
{
    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }
    //SCOPE
    {
        Array<int> tmp = numbers;
        Array<int> test(tmp);
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();
    }
    delete [] mirror;//
    return 0;
}
