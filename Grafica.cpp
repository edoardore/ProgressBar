//
// Created by Edoardo Re on 12/03/17.
//

#include "Grafica.h"
#include <iostream>


Grafica::~Grafica() {
    detach();
}

void Grafica::disegna() {

}

void Grafica::attach() {
    //dovrà iscrivere il soggetto
}

void Grafica::detach() {
    //dovrà disiscrivere il soggetto
}

void Grafica::update(int bitUpdate, int filesUpdate, std::string fileName) {
    bUpdate = bitUpdate;
    fUpdate = filesUpdate;
    currentName = fileName;
    disegna();
}

int Grafica::getBUp() const {
    return bUpdate;
}

void Grafica::setBUp(int bUpdate) {
    Grafica::bUpdate = bUpdate;
}

int Grafica::getFUp() const {
    return fUpdate;
}

void Grafica::setFUp(int fUpdate) {
    Grafica::fUpdate = fUpdate;
}

void Grafica::setCurrentName(const std::string &currentName) {
    Grafica::currentName = currentName;
}

const std::string &Grafica::getCurrentName() const {
    return currentName;
}