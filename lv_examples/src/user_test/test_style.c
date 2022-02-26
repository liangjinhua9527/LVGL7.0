#include "test_conf.h"

static lv_style_t style1;

 static lv_obj_t* obj ;

void test_style_start()
{
    obj= lv_scr_act();

    //初始化样式

    lv_style_init(&style1);
    lv_style_set_size(&style1, LV_STATE_DEFAULT, 4);
    lv_style_set_bg_opa(&style1, LV_STATE_DEFAULT, LV_OPA_COVER); //透明度
    lv_style_set_bg_color(&style1, LV_STATE_DEFAULT, lv_color_hex3(0xeee));
    lv_style_set_radius(&style1, LV_STATE_DEFAULT, LV_RADIUS_CIRCLE);
    lv_style_set_pad_right(&style1, LV_STATE_DEFAULT, 4);
    lv_style_set_text_color(&style1, LV_STATE_DEFAULT, LV_COLOR_BLUE);


    lv_obj_t *label = lv_label_create(obj,NULL);
    lv_obj_add_style(label,LV_LABEL_PART_MAIN,&style1);

     lv_label_set_text(label, "1234");


}


//
//
//    //外部位图片显示
//    lv_obj_t * img1 = lv_img_create(obj, NULL);
//    lv_img_set_src(img1, &tool);
//    lv_obj_align(img1, NULL, LV_ALIGN_IN_TOP_LEFT, 0, 0);
//    lv_img_set_zoom(img1, 100);
//    lv_img_set_angle(img1, 450);
//
//
//    //外部字体引用
//    lv_obj_t *label = lv_label_create(obj,NULL);
//    lv_obj_set_style_local_text_font(label,0,0,&font1);
//    lv_label_set_text(label, "东欧");
