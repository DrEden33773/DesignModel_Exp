/**
 * @file Factory.hpp
 * @author Eden (edwardwang33773@gmail.com)
 * @brief
 * @version 0.1
 * @date 2022-10-18
 *
 * @copyright Copyright (c) 2022
 *
 */

#pragma once
#include "Button.hpp"
#include "CheckBox.hpp"
#include <iostream>
#include <string>

namespace GUI {

class GUIFactory {
public:
    virtual ~GUIFactory() = default;

    [[nodiscard]] virtual GUI::Button*   CreateButton() const   = 0;
    [[nodiscard]] virtual GUI::CheckBox* CreateCheckBox() const = 0;
};

class WinFactory : public GUIFactory {
public:
    [[nodiscard]] GUI::Button* CreateButton() const override {
        Button* res = new WinButton();
        return res;
    }
    [[nodiscard]] GUI::CheckBox* CreateCheckBox() const override {
        CheckBox* res = new WinCheckBox();
        return res;
    }
};

class MacFactory : public GUIFactory {
public:
    [[nodiscard]] GUI::Button* CreateButton() const override {
        Button* res = new MacButton();
        return res;
    }
    [[nodiscard]] GUI::CheckBox* CreateCheckBox() const override {
        CheckBox* res = new MacCheckBox();
        return res;
    }
};

} // namespace GUI