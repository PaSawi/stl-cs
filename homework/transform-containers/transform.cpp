#include "transform.hpp"
#include <algorithm>
#include <iostream>
#include <iterator>
#include <type_traits>

std::map<int, std::string> removeDuplicateAndTranformToMap(std::list<std::string> list, std::deque<int> deque) {
    std::map<int, std::string> map{};
    auto dist_deque = std::distance(deque.begin(), deque.end());
    auto dist_list = std::distance(list.begin(), list.end());
    auto dist = std::min(dist_deque, dist_list);
    int diff = static_cast<int>(abs(dist_deque - dist_list));
    if (dist_deque >= dist_list) {
        for (int i = 0; i < diff; i++) {
            list.push_back("empty");
        }
    } else {
        for (int i = 0; i < diff; i++) {
            deque.push_back(0);
        }
    }

    std::transform(begin(deque),
                   end(deque),
                   begin(list),
                   std::inserter(map, map.begin()),
                   [index = 0, dist](int first, std::string& second) mutable {
                       return std::make_pair(first, second);
                   });
    auto result = map;

    return result;
}