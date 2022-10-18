/**
 * @file Table.hpp
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

class Table {
public:
    virtual std::string getStyle() = 0;
    virtual std::string getType()  = 0;
    virtual void        hasLegs()  = 0;
    virtual void        putOn()    = 0;
    virtual ~Table()               = default;
};

class NonStyleTable : public Table {
public:
    std::string getStyle() override = 0;

    std::string getType() override {
        return "Table: ";
    }
    void hasLegs() override {
        std::cout << "Has 2 legs " << std::endl;
        std::cout << std::endl;
    }
    void putOn() override {
        std::cout << "Could put things on it " << std::endl;
        std::cout << std::endl;
    }
};

class ModernTable : public NonStyleTable {
public:
    std::string getStyle() override {
        return "Modern ";
    }
};

class VictorianTable : public NonStyleTable {
public:
    std::string getStyle() override {
        return "Victorian ";
    }
};

} // namespace Furniture