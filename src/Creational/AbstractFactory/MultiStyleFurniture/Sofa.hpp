/**
 * @file Sofa.hpp
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

namespace Furniture {

class Sofa {
public:
    virtual std::string getStyle() = 0;
    virtual std::string getType()  = 0;
    virtual void        hasLegs()  = 0;
    virtual void        sitOn()    = 0;
    virtual ~Sofa()                = default;
};

class NonStyleSofa : public Sofa {
public:
    std::string getStyle() override = 0;

    std::string getType() override {
        return "Sofa: ";
    }
    void hasLegs() override {
        std::cout << "Has 2 legs " << std::endl;
        std::cout << std::endl;
    }
    void sitOn() override {
        std::cout << "Could sit on it " << std::endl;
        std::cout << std::endl;
    }
};

class ModernSofa : public NonStyleSofa {
public:
    std::string getStyle() override {
        return "Modern ";
    }
};

class VictorianSofa : public NonStyleSofa {
public:
    std::string getStyle() override {
        return "Victorian ";
    }
};

} // namespace Furniture