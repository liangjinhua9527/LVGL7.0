#include "test_conf.h"

lv_task_t* task1;

void task1_cb(lv_task_t*task)
{
    static uint16_t cnt = 0;
    cnt++;
    printf("cnt = %d\n",cnt);

}
void btn1_event_cb(lv_obj_t*obj,lv_event_t event)
{
    if(event == LV_EVENT_PRESSED){
        printf("The key is pressed !!\n");
        lv_task_del(task1);
    }
}

void test_task_start()
{
//    task1 = lv_task_create(task1_cb,1000,LV_TASK_PRIO_HIGH,NULL);
//
//    lv_obj_t * btn1 = lv_btn_create(lv_scr_act(),NULL);  //创建按键
//    lv_obj_set_pos(btn1,100,100);   //按键位置
//    lv_obj_set_event_cb(btn1,btn1_event_cb);  //时间回调函数
}
