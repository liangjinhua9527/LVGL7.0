#include "test_conf.h"

lv_obj_t* par;


void test_obj_start()
{
    #if 1
    lv_obj_t * scr1 = lv_obj_create(NULL, NULL);       //===1
    lv_scr_load(scr1);

    lv_obj_set_width(scr1, 400);
    lv_obj_set_height(scr1,400);
    lv_obj_set_pos(scr1, 100, 100);

    lv_disp_set_bg_color(NULL,LV_COLOR_RED);
    #else
    lv_obj_t * scr2 = lv_obj_create(lv_scr_act(),NULL); //===1


    lv_obj_set_width(scr2, 400);
    lv_obj_set_height(scr2,400);
    lv_obj_set_pos(scr2, 100, 100);

    #if 0
    lv_obj_set_width(scr2, 400);
    lv_obj_set_height(scr2,400);
    lv_obj_set_pos(scr2, 100, 100);

    lv_obj_t * obj1 = lv_obj_create(scr2, NULL);
    lv_obj_set_pos(obj1, 50, 50);

    #else
    lv_obj_t * btn1 = lv_btn_create(scr2, NULL);         /*Create a button on the screen*/
    lv_btn_set_fit(btn1, true);                   /*Enable to automatically set the size according to the content*/
    lv_obj_set_pos(btn1, 60, 40);                                   /*Set the position of the button*/

    lv_obj_t * obj1 = lv_obj_create(scr2, NULL);
    lv_obj_set_pos(obj1, 50, 50);


    lv_obj_t * label1 = lv_label_create(btn1, NULL);        /*Create a label on the first button*/
    lv_label_set_text(label1, "Button 1");                  /*Set the text of the label*/

//    lv_obj_set_top(btn1,true);     //点击图层设到前台(foreground)展示

//    lv_scr_load_anim(obj1,LV_SCR_LOAD_ANIM_OVER_LEFT,6000,0,false);   //加载屏幕动画

//    lv_obj_t * obj2 = lv_obj_create(obj1, NULL);
//    lv_obj_set_pos(obj2, 10, 10);

//    lv_obj_del(par);   //删除对象及其所有子对象。

//    lv_obj_clean(par); //但不会删除对象本身

    #endif

    #endif
}
