/**
 * @file GUI_Demo.hpp
 * @author Eden (edwardwang33773@gmail.com)
 * @brief GUI_Demo
 * @version 0.1
 * @date 2022-10-18
 *
 * @copyright Copyright (c) 2022
 *
 */

#pragma once
#include "../Creational/AbstractFactory/CrossPlatformGUI/Application.hpp"
#include "../tools/DemoName.hpp"

namespace GUI {

void Demo() {
    Tool::show_demo_name_title("GUI");

    auto running_app = Application::InitApplication();
    running_app->paint();
    delete running_app;

    Tool::show_demo_name_end("GUI");
}

} // namespace GUI