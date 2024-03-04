#include "testTemplateSpecialization.hpp"

template<>
int factorial<0>() {
    return 1;
}