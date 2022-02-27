#include "test_conf.h"

LV_FONT_DECLARE(font1); //声明字体

LV_IMG_DECLARE(tool);

LV_IMG_DECLARE(lv_img_die);

LV_IMG_DECLARE(lv_img_rw);

lv_obj_t  *obj;

#define MY_USB_SYMBOL "\x30"

void test_font1_start()
{
    obj = lv_scr_act();

    //测试UTF-8  ，字符正确则是
//    lv_obj_t * label1 = lv_label_create(obj, NULL);
//    lv_label_set_text(label1, LV_SYMBOL_VIDEO);
//
    lv_obj_t * label2 = lv_label_create(obj, NULL);
    lv_obj_set_pos(label2,0,50);
    lv_label_set_text(label2, MY_USB_SYMBOL);


//    //外部位图片显示
//    lv_obj_t * img1 = lv_img_create(obj, NULL);
//    lv_img_set_src(img1, &tool);
//    lv_obj_align(img1, NULL, LV_ALIGN_IN_TOP_LEFT, 0, 0);
//    lv_img_set_zoom(img1, 100);
//    lv_img_set_angle(img1, 450); //旋转
//


//
//    //外部字体引用
//    lv_obj_t *label = lv_label_create(obj,NULL);
//    lv_obj_set_style_local_text_font(label,0,0,&font1);
//    lv_label_set_text(label, "东欧");


}


