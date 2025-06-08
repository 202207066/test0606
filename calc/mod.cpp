//
//  mod.cpp
//  0513
//
//  Created by 정명근 on 5/13/25.
//

#include "mod.h"
#include "basic.h"
int mod(int a, int b) {
    if (b == 0) return 0; 

    int result = a;
  
    while (result >= b) {
        result = sub(result, b);
    }

    return result;
}

