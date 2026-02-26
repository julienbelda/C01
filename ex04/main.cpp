/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jul <jul@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/02 10:11:16 by julienbelda       #+#    #+#             */
/*   Updated: 2026/02/23 19:03:37 by jul              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

std::string replace(std::string content, std::string s1, std::string s2)
{
    std::string result;
    size_t position;
    size_t found;

    position = 0;
    if (s1.size() == 0)
        return (content);
    while ((found = content.find(s1, position)) != std::string::npos)
    {
        result += content.substr(position, found - position);
        result += s2;
        position = found + s1.size();
    }
    result += content.substr(position);
    return (result);
}

int main(int argc, char *argv[])
{
    if (argc != 4)
    {
        std::cout << "Program need : <Filename> <s1> <s2>" << std::endl;
        return (1);
    }

    std::string filename = argv[1];
    std::string s1 = argv[2];
    std::string s2 = argv[3];

    std::ifstream input(filename.c_str());
    if (!input)
    {
        std::cout << "Error: cannot open file" << std::endl;
        return (1);
    }

    std::string content;
    std::string line;

    while (std::getline(input, line))
    {
        content += line;
        if (!input.eof())
            content += "\n";
    }
    input.close();

    // on applique le remplacement ici
    std::string result = replace(content, s1, s2);

    std::string outname = filename + ".replace";
    std::ofstream output(outname.c_str());
    if (!output)
    {
        std::cout << "Error: cannot create output file" << std::endl;
        return (1);
    }

    output << result;
    output.close();

    return (0);
}
