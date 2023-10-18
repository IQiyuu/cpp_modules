#include <iostream>
#include <fstream>
#include <string>

std::string ft_replace(std::string line, char *to_rem, char *to_add)
{
    std::string ret;
    int         i;
    int         n;

    if (line.find(to_rem) != (long long unsigned int)-1)
    {
        n = 0;
        while (line[n])
        {
            i = 0;
            if (line[n] == to_rem[i])
                while (line[n + i] && to_rem[i] && line[n + i] == to_rem[i])
                    i++;
            if (!to_rem[i])
            {
                n += i;
                i = 0;
                while (to_add[i])
                    ret.push_back(to_add[i++]);
            }
            else
                ret.push_back(line[n++]);
        }
    }
    else
        ret = line;
    return ret;
}

int main(int ac, char *av[])
{
    std::ifstream in(av[1]);

    if (ac != 4)
        std::cout << "Arguments number" << std::endl;
    else if (!in)
        std::cout << "Error during file opening" << std::endl;
    else
    {
        std::string n = (const char *)av[1];
        std::ofstream out(n + ".replace");
        std::string line;
        while(std::getline(in, line))
            out << ft_replace(line, av[2], av[3]) << std::endl;
    }
}