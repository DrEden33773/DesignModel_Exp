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
#include "Sofa.hpp"
#include "Table.hpp"
#include <iostream>
#include <string>

namespace Furniture {

class Factory {
public:
    virtual ~Factory() = default;

    virtual Sofa*  createSofa()  = 0;
    virtual Table* createTable() = 0;
};

class ModernFactory : public Factory {
    Sofa* createSofa() override {
        return new ModernSofa();
    }
    Table* createTable() override {
        return new ModernTable();
    }
};

class VictorianFactory : public Factory {
    Sofa* createSofa() override {
        return new VictorianSofa();
    }
    Table* createTable() override {
        return new VictorianTable();
    }
};

} // namespace Furniture