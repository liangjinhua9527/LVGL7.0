#include "test_conf.h"

lv_obj_t* obj;


void test_obj_start()
{
    obj = lv_obj_create(lv_scr_act(),NULL);

    lv_obj_set_width(obj, 100);
    lv_obj_set_height(obj,100);
}
