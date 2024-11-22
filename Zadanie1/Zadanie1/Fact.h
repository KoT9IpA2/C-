#pragma once
#ifndef FACTL_H
#define FACTL_H

// Определите тип данных здесь
#define USE_FLOAT

#ifdef USE_FLOAT
typedef float FactorialType;
#else
typedef int FactorialType;
#endif

FactorialType factorial(int n);

#endif