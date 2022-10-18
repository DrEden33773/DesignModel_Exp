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
    };

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

    /**
     * @brief @b InitApplication @p => @b must_return_ptr
     * @note
            @b Why should we @p return @b pointer
            @b Because @e MSVC @p doesn't @p impl @e RVO_protocol
            @b then you have to face @b double_deleting
                @b exapmle:
                    @p return @b app: Application
                    @e this will @p cause @b deleting @e app
     * @param type
     * @return Application*
     */
    static Application* InitApplication(SystemType type = SystemType::Win) {
        GUIFactory*  factory = nullptr;
        Application* app     = nullptr;
        if (type == SystemType::Win) {
            factory = new WinFactory();
        } else {
            factory = new MacFactory();
        }
        app = new Application(factory);
        delete factory;
        return app;
    }
};

} // namespace GUI