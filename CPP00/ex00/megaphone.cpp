#include <iostream>

int main(int arc,  char **arv)
{
    if (arc < 2)
        std::cout<<"* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    else {
        for (int i = 1; arv[i]; i++)
			for (int c = 0; arv[i][c]; c++)
                std::cout<<(char)toupper(arv[i][c]);
    }
    std::cout << std::endl;
    return (0);
}