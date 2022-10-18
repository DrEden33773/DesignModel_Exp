/**
 * @file DemoName.hpp
 * @author Eden (edwardwang33773@gmail.com)
 * @brief show DemoName
 * @version 0.1
 * @date 2022-10-18
 *
 * @copyright Copyright (c) 2022
 *
 */

#pragma once
#include <iostream>

namespace Tool {

void show_demo_name_title(const char* name) {
    std::cout << "========== `" << name << "` demo ==========" << std::endl;
    std::cout << std::endl;
}

void show_demo_name_end(const char* name) {
    std::cout << "========== end of `" << name << "` demo ==========" << std::endl;
    std::cout << std::endl;
}

} // namespace Tool