#include "test_conf.h"

lv_obj_t* par;
static void my_event_cb(lv_obj_t* obj,lv_event_t event);

void test_event_start()
{


    lv_obj_t * scr2 = lv_obj_create(lv_scr_act(),NULL); //===1


    lv_obj_set_width(scr2, 400);
    lv_obj_set_height(scr2,400);
    lv_obj_set_pos(scr2, 100, 100);


    lv_obj_t * btn1 = lv_btn_create(scr2, NULL);         /*Create a button on the screen*/
    lv_btn_set_fit(btn1, true);                   /*自适应*/
    lv_obj_set_pos(btn1, 60, 40);                                   /*Set the position of the button*/


    lv_obj_t * label1 = lv_label_create(btn1, NULL);        /*Create a label on the first button*/
    lv_label_set_text(label1, "Button -----1-----");                  /*Set the text of the label*/


    lv_obj_set_event_cb(btn1, my_event_cb);

    lv_obj_set_top(btn1,true);     //点击图层设到前台(foreground)展示


}

static void my_event_cb(lv_obj_t* obj,lv_event_t event)
{
     switch(event) {
                    case LV_EVENT_PRESSED:              /* 对象被按下 */
                            printf("Pressed\n");
                            break;

                    case LV_EVENT_SHORT_CLICKED:        /* 对象被点击 */
                            printf("Short clicked\n");
                            break;

                    case LV_EVENT_CLICKED:              /* 对象被短点击 */
                            printf("Clicked\n");
                            break;

                    case LV_EVENT_LONG_PRESSED:         /* 对象被长按 */
                            printf("Long press\n");
                            break;

                    case LV_EVENT_LONG_PRESSED_REPEAT:  /* 对象被重复长按 */
                            printf("Long press repeat\n");
                            break;

                    case LV_EVENT_RELEASED:             /* 对象被释放 */
                            printf("Released\n");
                            break;
            }


}
