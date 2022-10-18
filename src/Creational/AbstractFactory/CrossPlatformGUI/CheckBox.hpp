/**
 * @file CheckBox.hpp
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

class CheckBox {
public:
    virtual void paint() = 0;
    virtual ~CheckBox()  = default;

    [[nodiscard]] virtual std::string return_type() const = 0;
};

class WinCheckBox : public CheckBox {
public:
    ~WinCheckBox() override {
        std::cout << "Removed => WinCheckBox" << std::endl;
        std::cout << std::endl;
    }

    void paint() override {
        std::cout << "Painted => WinCheckBox" << std::endl;
        std::cout << std::endl;
    }
    [[nodiscard]] std::string return_type() const override {
        return "WinCheckBox";
    }
};

class MacCheckBox : public CheckBox {
public:
    ~MacCheckBox() override {
        std::cout << "Removed => MacCheckBox" << std::endl;
        std::cout << std::endl;
    }

    void paint() override {
        std::cout << "Painted => MacCheckBox" << std::endl;
        std::cout << std::endl;
    }
    [[nodiscard]] std::string return_type() const override {
        return "MacCheckBox";
    }
};

} // namespace GUI