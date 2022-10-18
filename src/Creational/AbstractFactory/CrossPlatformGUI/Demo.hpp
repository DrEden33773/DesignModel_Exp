/**
 * @file Demo.hpp
 * @author Eden (edwardwang33773@gmail.com)
 * @brief Demo
 * @version 0.1
 * @date 2022-10-18
 *
 * @copyright Copyright (c) 2022
 *
 */

#pragma once
#include "Application.hpp"

namespace GUI {

void Demo() {
    Application running_app = Application::InitApplication();
    running_app.paint();
}

} // namespace GUI