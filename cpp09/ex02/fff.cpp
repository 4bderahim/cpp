

#include <iostream>

#include <vector>

#include <algorithm>

int main()
{

    std::vector<std::pair<unsigned int, unsigned int> > vec_pair;

    vec_pair.push_back(std::make_pair(1,88));

    std::swap( vec_pair[0].second , vec_pair[0].first);
    std::cout << vec_pair[0].first << vec_pair[0].second << std::endl;





}