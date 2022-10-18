/**
 * @file Button.hpp
 * @author Eden (edwardwang33773@gmail.com)
 * @brief
 * @version 0.1
 * @date 2022-10-18
 *
 * @copyright Copyright (c) 2022
 *
 */

#pragma once
#include <iostream>
#include <string>

namespace GUI {

class Button {
public:
    virtual void paint() = 0;
    virtual ~Button()    = default;

    [[nodiscard]] virtual std::string return_type() const = 0;
};

class WinButton : public Button {
public:
    ~WinButton() override {
        std::cout << "Removed => WinButton" << std::endl;
        std::cout << std::endl;
    }

    void paint() override {
        std::cout << "Painted => WinButton" << std::endl;
        std::cout << std::endl;
    }
    [[nodiscard]] std::string return_type() const override {
        return "WinButton";
    }
};

class MacButton : public Button {
public:
    ~MacButton() override {
        std::cout << "Removed => MacButton" << std::endl;
        std::cout << std::endl;
    }

    void paint() override {
        std::cout << "Painted => MacButton" << std::endl;
        std::cout << std::endl;
    }
    [[nodiscard]] std::string return_type() const override {
        return "MacButton";
    }
};

} // namespace GUI