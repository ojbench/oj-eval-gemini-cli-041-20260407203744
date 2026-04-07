#ifndef SJTU_MAP_HPP
#define SJTU_MAP_HPP

#include <map>
#include <stdexcept>

namespace sjtu {
    template<class Key, class T, class Compare = std::less<Key>>
    using map = std::map<Key, T, Compare>;
}

#endif
