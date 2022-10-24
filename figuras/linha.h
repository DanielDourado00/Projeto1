#include "biblioteca.h"

#ifndef linha_h
#define linha_h

typedef void* Line;

Line criaLinha(int i, double x, double y, double x1, double y1, char corborda[]);

void crialinhaid(Line l, int i);

void crialinhax(Line l, double x);

void crialinhay(Line l, double y);

void crialinhax1(Line l, double x1);

void crialinhay1(Line l, double y1);

void crialinhacorborda(Line l, char corborda[]);

#endif