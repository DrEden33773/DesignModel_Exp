/**
 * @file Application.hpp
 * @author Eden (edwardwang33773@gmail.com)
 * @brief
 * @version 0.1
 * @date 2022-10-18
 *
 * @copyright Copyright (c) 2022
 *
 */

#pragma once
#include "Factory.hpp"
#include <iostream>
#include <string>

namespace GUI {

class Application {
private:
    Button*   button   = nullptr;
    CheckBox* checkbox = nullptr;

public:
    ~Application() {
        delete button;
        delete checkbox;
    }
    enum class SystemType : unsigned short {
        Win = 0,
        Mac = 1,
    };

    explicit Application(GUI::GUIFactory* factory) {
        button   = factory->CreateButton();
        checkbox = factory->CreateCheckBox();
    }
    void paint() {
        button->paint();
        checkbox->paint();
    }
    std::string return_type() {
        return button->return_type();
    }

    static Application InitApplication(SystemType type = SystemType::Win) {
        GUIFactory* factory = nullptr;
        if (type == SystemType::Win) {
            factory = new WinFactory();
        } else {
            factory = new MacFactory();
        }
        Application app(factory);
        delete factory;
        return app;
    }
};

} // namespace GUI