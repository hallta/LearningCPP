#include "val_ref_ptr.h"

namespace val_ref_ptr {
    void pass_by_val(int val) {
        val += 5;
    }

    void pass_by_ref(int& ref) {
        ref += 5;
    }

    void pass_by_ptr(int* ref) {
        *ref += 5;
    }
}