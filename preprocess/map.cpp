#include <iostream>
#include <fstream>
#include <string>
#include <set>
#include <vector>
#include <unordered_map>

int main()
{
    std::string line;
    std::ifstream myfile ("utf8");

    std::set<std::string> utfset;
    std::vector<std::string> uwu;
    // Read file in
    if (myfile.is_open())
    {
        // Create set to hold unique words and vector to hold file lines
        while (getline(myfile, line))
        {
            uwu.push_back(line);
            utfset.insert(line);
        }
        myfile.close();
    }
    else
    {
        std::cout << "Unable to open file";
        exit(1);
    }

    // Index all the words in the set (Fast lookup)
    std::unordered_map<std::string, int> utfindex;
    int index = 0;
    for (auto utf : utfset)
    {
        std::cout << utf << std::endl;
        utfindex[utf] = index;
        index++;
    }

    // Find index of all words in order in the file
    for (auto utf : uwu)
    {
        int index = utfindex.at(utf);
        std::cout << index << std::endl;
    }


    return 0;
}
