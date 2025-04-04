// LVGL version: 8.3.5
// Project name: phoneui

#include "ui.h"
#include "ui_helpers.h"

///////////////////// 变量 ////////////////////
void moveleft_Animation(lv_obj_t *TargetObject, int delay);
void moveright_Animation(lv_obj_t *TargetObject, int delay);
void moveup_Animation(lv_obj_t *TargetObject, int delay);
void movedown_Animation(lv_obj_t *TargetObject, int delay);
void suo_Animation(lv_obj_t *TargetObject, int delay);
lv_obj_t *ui_home;
void ui_event_header(lv_event_t *e);
lv_obj_t *ui_header;
lv_obj_t *ui_body;
lv_obj_t *ui_home1;
lv_obj_t *ui_camera;
lv_obj_t *ui_cameratext;
lv_obj_t *ui_clock;
lv_obj_t *ui_clocktext;
lv_obj_t *ui_gallery;
lv_obj_t *ui_gallerytext;
lv_obj_t *ui_music;
lv_obj_t *ui_musictext;
void ui_event_settings(lv_event_t *e);
lv_obj_t *ui_settings;
lv_obj_t *ui_settingstext;
lv_obj_t *ui_notes;
lv_obj_t *ui_notestext;
lv_obj_t *ui_weather;
lv_obj_t *ui_weathertext;
lv_obj_t *ui_contacts;
lv_obj_t *ui_contactstext;
lv_obj_t *ui_caculator;
lv_obj_t *ui_caculatortext;
lv_obj_t *ui_filemanager;
lv_obj_t *ui_filemanagertext;
lv_obj_t *ui_video;
lv_obj_t *ui_videotext;
lv_obj_t *ui_car;
lv_obj_t *ui_cartext;
lv_obj_t *ui_home2;
lv_obj_t *ui_jionet;
lv_obj_t *ui_jionettext;
lv_obj_t *ui_qrbarcode;
lv_obj_t *ui_qrbarcodetext;
lv_obj_t *ui_bluetoothcontrl;
lv_obj_t *ui_bluetoothcontrltext;
lv_obj_t *ui_miremote;
lv_obj_t *ui_miremotetext;
lv_obj_t *ui_footer;
lv_obj_t *ui_phone;
lv_obj_t *ui_phonet;
lv_obj_t *ui_email;
lv_obj_t *ui_emailt;
lv_obj_t *ui_browser;
lv_obj_t *ui_message;
lv_obj_t *ui_browsert;
lv_obj_t *ui_messages;
lv_obj_t *ui_mobile;
lv_obj_t *ui_wifi;
lv_obj_t *ui_battery;
lv_obj_t *ui_time;
lv_obj_t *ui_batteryp;
void ui_event_menudown(lv_event_t *e);
lv_obj_t *ui_menudown;
lv_obj_t *ui_menudowntop;
void ui_event_wifibtn(lv_event_t *e);
lv_obj_t *ui_wifibtn;
lv_obj_t *ui_wifilabel;
void ui_event_bluebtn(lv_event_t *e);
lv_obj_t *ui_bluebtn;
lv_obj_t *ui_bluelabel;
void ui_event_bellbtn(lv_event_t *e);
lv_obj_t *ui_bellbtn;
lv_obj_t *ui_belllabel;
void ui_event_gpsbtn(lv_event_t *e);
lv_obj_t *ui_gpsbtn;
lv_obj_t *ui_mutelabel1;
lv_obj_t *ui_menudownlight;
void ui_event_lightslider(lv_event_t *e);
lv_obj_t *ui_lightslider;
lv_obj_t *ui_lighttext;
lv_obj_t *ui_menudownvolume;
void ui_event_volumeslider(lv_event_t *e);
lv_obj_t *ui_volumeslider;
lv_obj_t *ui_volumetext;
lv_obj_t *ui_menudownfoot;
void ui_event_setting(lv_event_t *e);
lv_obj_t *ui_setting;
lv_obj_t *ui_settingheader;
lv_obj_t *ui_settingmobile;
lv_obj_t *ui_settingwifi;
lv_obj_t *ui_settingbattery;
lv_obj_t *ui_settingtime;
lv_obj_t *ui_settingbatteryp;
lv_obj_t *ui_settingtext;
lv_obj_t *ui_setpannel;
void ui_event_aboutpannel(lv_event_t *e);
lv_obj_t *ui_aboutpannel;
lv_obj_t *ui_aboutlabel;
lv_obj_t *ui_aboutlabel1;
lv_obj_t *ui_aboutlabel2;
void ui_event_aboutpannel1(lv_event_t *e);
lv_obj_t *ui_aboutpannel1;
lv_obj_t *ui_aboutlabel19;
lv_obj_t *ui_aboutlabel21;
void ui_event_wifipanel(lv_event_t *e);
lv_obj_t *ui_wifipanel;
lv_obj_t *ui_wifitext;
lv_obj_t *ui_wifionlabel;
lv_obj_t *ui_wifionlabel1;
void ui_event_wifipanel1(lv_event_t *e);
lv_obj_t *ui_wifipanel1;
lv_obj_t *ui_wifitext1;
lv_obj_t *ui_wifionlabel2;
lv_obj_t *ui_wifionlabel3;
void ui_event_wifiset(lv_event_t *e);
lv_obj_t *ui_wifiset;
lv_obj_t *ui_wlanheader;
lv_obj_t *ui_wlanmobile;
lv_obj_t *ui_wlanwifi;
lv_obj_t *ui_wlanbattery;
lv_obj_t *ui_wlantime;
lv_obj_t *ui_wlanbatteryp;
lv_obj_t *ui_wlantitle;
void ui_event_headerbackico(lv_event_t *e);
lv_obj_t *ui_headerbackico;
lv_obj_t *ui_wlansetpannel;
lv_obj_t *ui_wlanswitchpanel;
lv_obj_t *ui_wlansetlabel;
void ui_event_wlanswitch(lv_event_t *e);
lv_obj_t *ui_wlanswitch;
lv_obj_t *ui_wificonnect;
lv_obj_t *ui_wifisymbol;
lv_obj_t *ui_wifiname;
lv_obj_t *ui_wifistats;
lv_obj_t *ui_wificlock;
lv_obj_t *ui_wificonright;
lv_obj_t *ui_wifiscan;
lv_obj_t *ui_wifiselecttitle;
void ui_event_wifirefresh(lv_event_t *e);
lv_obj_t *ui_wifirefresh;
lv_obj_t *ui_wifilist;
lv_obj_t *ui_wifisymbol1;
void ui_event_wifilistname(lv_event_t *e);
lv_obj_t *ui_wifilistname;
lv_obj_t *ui_wifilock;
lv_obj_t *ui_wifilistright;
lv_obj_t *ui_enterwifipass;
lv_obj_t *ui_passpannel;
lv_obj_t *ui_wifinamelabel;
void ui_event_wifipassinput(lv_event_t *e);
lv_obj_t *ui_wifipassinput;
void ui_event_connectbtn(lv_event_t *e);
lv_obj_t *ui_connectbtn;
lv_obj_t *ui_connecttext;
void ui_event_canceltbtn(lv_event_t *e);
lv_obj_t *ui_canceltbtn;
lv_obj_t *ui_canceltext;
lv_obj_t *ui_keypannel;
lv_obj_t *ui_Keyboard;
void ui_event_aboutui(lv_event_t *e);
lv_obj_t *ui_aboutui;
lv_obj_t *ui_aboutheader;
lv_obj_t *ui_aboutmobile;
lv_obj_t *ui_aboutwifi;
lv_obj_t *ui_aboutbattery;
lv_obj_t *ui_abouttime;
lv_obj_t *ui_aboutbatteryp;
lv_obj_t *ui_abouttitle;
lv_obj_t *ui_aboutbody;
lv_obj_t *ui_aboutpanel1;
lv_obj_t *ui_aboutlabel3;
lv_obj_t *ui_aboutlabel4;
lv_obj_t *ui_aboutpanel2;
lv_obj_t *ui_aboutlabel5;
lv_obj_t *ui_aboutlabel6;
lv_obj_t *ui_aboutpanel3;
lv_obj_t *ui_aboutlabel7;
lv_obj_t *ui_aboutlabel8;
lv_obj_t *ui_aboutpanel4;
lv_obj_t *ui_aboutlabel9;
lv_obj_t *ui_aboutlabel10;
lv_obj_t *ui_aboutpanel5;
lv_obj_t *ui_aboutlabel11;
lv_obj_t *ui_aboutlabel12;
lv_obj_t *ui_aboutpanel6;
lv_obj_t *ui_aboutlabel13;
lv_obj_t *ui_aboutlabel14;
lv_obj_t *ui_aboutpanel7;
lv_obj_t *ui_aboutlabel15;
lv_obj_t *ui_aboutlabel16;
lv_obj_t *ui_aboutpanel8;
lv_obj_t *ui_aboutlabel17;
lv_obj_t *ui_aboutlabel18;
void ui_event_datetimeui(lv_event_t *e);
lv_obj_t *ui_datetimeui;
lv_obj_t *ui_datetimeheader;
lv_obj_t *ui_datetimemobile;
lv_obj_t *ui_datetimewifi;
lv_obj_t *ui_datetimebattery;
lv_obj_t *ui_datetimetime;
lv_obj_t *ui_datetimebatteryp;
lv_obj_t *ui_datetimetitle;
lv_obj_t *ui_datetimebody;
lv_obj_t *ui_datetimepanel;
lv_obj_t *ui_autodatetimelabel1;
lv_obj_t *ui_autodatetimeswitch1;
lv_obj_t *ui_datetimepanel1;
lv_obj_t *ui_autodatetimelabel;
void ui_event_autodatetimeswitch(lv_event_t *e);
lv_obj_t *ui_autodatetimeswitch;
void ui_event_setdate(lv_event_t *e);
lv_obj_t *ui_setdate;
lv_obj_t *ui_date;
lv_obj_t *ui_dateright;
lv_obj_t *ui_settime;
lv_obj_t *ui_time1;
lv_obj_t *ui_timeright;
lv_obj_t *ui_datetimecountry;
lv_obj_t *ui_datetimecountrylabel;
lv_obj_t *ui_datetimelabel1;
void ui_event_calendar(lv_event_t *e);
lv_obj_t *ui_calendar;
void ui_event_bluetoothset(lv_event_t *e);
lv_obj_t *ui_bluetoothset;
lv_obj_t *ui_bluetoothheader;
lv_obj_t *ui_bluetoothmobile;
lv_obj_t *ui_bluetoothwifi;
lv_obj_t *ui_bluetoothbattery;
lv_obj_t *ui_bluetoothtime;
lv_obj_t *ui_bluetoothbatteryp;
lv_obj_t *ui_bluetoothtitle;
void ui_event_bluetoothbackico(lv_event_t *e);
lv_obj_t *ui_bluetoothbackico;
lv_obj_t *ui_bluetoothpannel;
lv_obj_t *ui_bluetoothwitchpanel;
lv_obj_t *ui_bluetoothsetlabel;
void ui_event_bluetoothswitch(lv_event_t *e);
lv_obj_t *ui_bluetoothswitch;
lv_obj_t *ui_bluetoothconnect;
lv_obj_t *ui_bluetoothsymbol;
lv_obj_t *ui_bluetoothname;
lv_obj_t *ui_bluetoothstats;
lv_obj_t *ui_bluetoothconright;
lv_obj_t *ui_bluetoothscan;
lv_obj_t *ui_bluetoothselecttitle;
void ui_event_bluetoohtrefresh(lv_event_t *e);
lv_obj_t *ui_bluetoohtrefresh;
void ui_event_bluetoothlist(lv_event_t *e);
lv_obj_t *ui_bluetoothlist;
lv_obj_t *ui_bluetoothsymbol1;
void ui_event_bluetoothlistname(lv_event_t *e);
lv_obj_t *ui_bluetoothlistname;
lv_obj_t *ui_bluetoothlistright;
lv_obj_t *ui_blacklistpanel;
lv_obj_t *ui_bluetoothblacklist;
lv_obj_t *ui_blacklistright;
lv_obj_t *ui_enterbluetooth;
lv_obj_t *ui_enterbluetooth1;
lv_obj_t *ui_bluetoothnamelabel;
void ui_event_blacklist(lv_event_t *e);
lv_obj_t *ui_blacklist;
lv_obj_t *ui_blacklisttext;
void ui_event_canceltbtn1(lv_event_t *e);
lv_obj_t *ui_canceltbtn1;
lv_obj_t *ui_canceltext1;
void ui_event_connectbtn1(lv_event_t *e);
lv_obj_t *ui_connectbtn1;
lv_obj_t *ui_connecttext1;
lv_obj_t *ui_keypannel1;
lv_obj_t *ui_Keyboard1;
lv_obj_t *ui_initial_actions0;


void moveleft_Animation(lv_obj_t *TargetObject, int delay)
{
    ui_anim_user_data_t *PropertyAnimation_0_user_data = lv_mem_alloc(sizeof(ui_anim_user_data_t));
    PropertyAnimation_0_user_data->target = TargetObject;
    PropertyAnimation_0_user_data->val = -1;
    lv_anim_t PropertyAnimation_0;
    lv_anim_init(&PropertyAnimation_0);
    lv_anim_set_time(&PropertyAnimation_0, 200);
    lv_anim_set_user_data(&PropertyAnimation_0, PropertyAnimation_0_user_data);
    lv_anim_set_custom_exec_cb(&PropertyAnimation_0, _ui_anim_callback_set_x);
    lv_anim_set_values(&PropertyAnimation_0, 0, -320);
    lv_anim_set_path_cb(&PropertyAnimation_0, lv_anim_path_linear);
    lv_anim_set_delay(&PropertyAnimation_0, delay + 0);
    lv_anim_set_deleted_cb(&PropertyAnimation_0, _ui_anim_callback_free_user_data);
    lv_anim_set_playback_time(&PropertyAnimation_0, 0);
    lv_anim_set_playback_delay(&PropertyAnimation_0, 0);
    lv_anim_set_repeat_count(&PropertyAnimation_0, 0);
    lv_anim_set_repeat_delay(&PropertyAnimation_0, 0);
    lv_anim_set_early_apply(&PropertyAnimation_0, false);
    lv_anim_set_get_value_cb(&PropertyAnimation_0, &_ui_anim_callback_get_x);
    lv_anim_start(&PropertyAnimation_0);
}
void moveright_Animation(lv_obj_t *TargetObject, int delay)
{
    ui_anim_user_data_t *PropertyAnimation_0_user_data = lv_mem_alloc(sizeof(ui_anim_user_data_t));
    PropertyAnimation_0_user_data->target = TargetObject;
    PropertyAnimation_0_user_data->val = -1;
    lv_anim_t PropertyAnimation_0;
    lv_anim_init(&PropertyAnimation_0);
    lv_anim_set_time(&PropertyAnimation_0, 200);
    lv_anim_set_user_data(&PropertyAnimation_0, PropertyAnimation_0_user_data);
    lv_anim_set_custom_exec_cb(&PropertyAnimation_0, _ui_anim_callback_set_x);
    lv_anim_set_values(&PropertyAnimation_0, 0, 320);
    lv_anim_set_path_cb(&PropertyAnimation_0, lv_anim_path_linear);
    lv_anim_set_delay(&PropertyAnimation_0, delay + 0);
    lv_anim_set_deleted_cb(&PropertyAnimation_0, _ui_anim_callback_free_user_data);
    lv_anim_set_playback_time(&PropertyAnimation_0, 0);
    lv_anim_set_playback_delay(&PropertyAnimation_0, 0);
    lv_anim_set_repeat_count(&PropertyAnimation_0, 0);
    lv_anim_set_repeat_delay(&PropertyAnimation_0, 0);
    lv_anim_set_early_apply(&PropertyAnimation_0, false);
    lv_anim_set_get_value_cb(&PropertyAnimation_0, &_ui_anim_callback_get_x);
    lv_anim_start(&PropertyAnimation_0);
}
void moveup_Animation(lv_obj_t *TargetObject, int delay)
{
    ui_anim_user_data_t *PropertyAnimation_0_user_data = lv_mem_alloc(sizeof(ui_anim_user_data_t));
    PropertyAnimation_0_user_data->target = TargetObject;
    PropertyAnimation_0_user_data->val = -1;
    lv_anim_t PropertyAnimation_0;
    lv_anim_init(&PropertyAnimation_0);
    lv_anim_set_time(&PropertyAnimation_0, 200);
    lv_anim_set_user_data(&PropertyAnimation_0, PropertyAnimation_0_user_data);
    lv_anim_set_custom_exec_cb(&PropertyAnimation_0, _ui_anim_callback_set_y);
    lv_anim_set_values(&PropertyAnimation_0, 0, -480);
    lv_anim_set_path_cb(&PropertyAnimation_0, lv_anim_path_linear);
    lv_anim_set_delay(&PropertyAnimation_0, delay + 0);
    lv_anim_set_deleted_cb(&PropertyAnimation_0, _ui_anim_callback_free_user_data);
    lv_anim_set_playback_time(&PropertyAnimation_0, 0);
    lv_anim_set_playback_delay(&PropertyAnimation_0, 0);
    lv_anim_set_repeat_count(&PropertyAnimation_0, 0);
    lv_anim_set_repeat_delay(&PropertyAnimation_0, 0);
    lv_anim_set_early_apply(&PropertyAnimation_0, false);
    lv_anim_set_get_value_cb(&PropertyAnimation_0, &_ui_anim_callback_get_y);
    lv_anim_start(&PropertyAnimation_0);
}
void movedown_Animation(lv_obj_t *TargetObject, int delay)
{
    ui_anim_user_data_t *PropertyAnimation_0_user_data = lv_mem_alloc(sizeof(ui_anim_user_data_t));
    PropertyAnimation_0_user_data->target = TargetObject;
    PropertyAnimation_0_user_data->val = -1;
    lv_anim_t PropertyAnimation_0;
    lv_anim_init(&PropertyAnimation_0);
    lv_anim_set_time(&PropertyAnimation_0, 200);
    lv_anim_set_user_data(&PropertyAnimation_0, PropertyAnimation_0_user_data);
    lv_anim_set_custom_exec_cb(&PropertyAnimation_0, _ui_anim_callback_set_y);
    lv_anim_set_values(&PropertyAnimation_0, 0, 480);
    lv_anim_set_path_cb(&PropertyAnimation_0, lv_anim_path_linear);
    lv_anim_set_delay(&PropertyAnimation_0, delay + 0);
    lv_anim_set_deleted_cb(&PropertyAnimation_0, _ui_anim_callback_free_user_data);
    lv_anim_set_playback_time(&PropertyAnimation_0, 0);
    lv_anim_set_playback_delay(&PropertyAnimation_0, 0);
    lv_anim_set_repeat_count(&PropertyAnimation_0, 0);
    lv_anim_set_repeat_delay(&PropertyAnimation_0, 0);
    lv_anim_set_early_apply(&PropertyAnimation_0, false);
    lv_anim_set_get_value_cb(&PropertyAnimation_0, &_ui_anim_callback_get_y);
    lv_anim_start(&PropertyAnimation_0);
}
void suo_Animation(lv_obj_t *TargetObject, int delay)
{
    ui_anim_user_data_t *PropertyAnimation_0_user_data = lv_mem_alloc(sizeof(ui_anim_user_data_t));
    PropertyAnimation_0_user_data->target = TargetObject;
    PropertyAnimation_0_user_data->val = -1;
    lv_anim_t PropertyAnimation_0;
    lv_anim_init(&PropertyAnimation_0);
    lv_anim_set_time(&PropertyAnimation_0, 1000);
    lv_anim_set_user_data(&PropertyAnimation_0, PropertyAnimation_0_user_data);
    lv_anim_set_custom_exec_cb(&PropertyAnimation_0, _ui_anim_callback_set_image_angle);
    lv_anim_set_values(&PropertyAnimation_0, 0, 3600);
    lv_anim_set_path_cb(&PropertyAnimation_0, lv_anim_path_linear);
    lv_anim_set_delay(&PropertyAnimation_0, delay + 0);
    lv_anim_set_deleted_cb(&PropertyAnimation_0, _ui_anim_callback_free_user_data);
    lv_anim_set_playback_time(&PropertyAnimation_0, 0);
    lv_anim_set_playback_delay(&PropertyAnimation_0, 0);
    lv_anim_set_repeat_count(&PropertyAnimation_0, 0);
    lv_anim_set_repeat_delay(&PropertyAnimation_0, 0);
    lv_anim_set_early_apply(&PropertyAnimation_0, false);
    lv_anim_set_get_value_cb(&PropertyAnimation_0, &_ui_anim_callback_get_image_angle);
    lv_anim_start(&PropertyAnimation_0);
}

///////////////////// 函数 ////////////////////
void ui_event_header(lv_event_t *e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t *target = lv_event_get_target(e);
    if (event_code == LV_EVENT_GESTURE && lv_indev_get_gesture_dir(lv_indev_get_act()) == LV_DIR_BOTTOM)
    {
        movedown_Animation(ui_menudown, 0);
    }
}
void ui_event_settings(lv_event_t *e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t *target = lv_event_get_target(e);
    if (event_code == LV_EVENT_CLICKED)
    {
        _ui_screen_change(ui_setting, LV_SCR_LOAD_ANIM_FADE_ON, 200, 0);
    }
}
void ui_event_menudown(lv_event_t *e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t *target = lv_event_get_target(e);
    if (event_code == LV_EVENT_GESTURE && lv_indev_get_gesture_dir(lv_indev_get_act()) == LV_DIR_TOP)
    {
        moveup_Animation(ui_menudown, 0);
    }
}
void ui_event_wifibtn(lv_event_t *e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t *target = lv_event_get_target(e);
    if (event_code == LV_EVENT_CLICKED)
    {
        _ui_state_modify(ui_wifibtn, LV_STATE_CHECKED, _UI_MODIFY_STATE_TOGGLE);
    }
    if (event_code == LV_EVENT_LONG_PRESSED)
    {
        _ui_screen_change(ui_wifiset, LV_SCR_LOAD_ANIM_FADE_ON, 200, 0);
        moveup_Animation(ui_menudown, 0);
    }
}
void ui_event_bluebtn(lv_event_t *e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t *target = lv_event_get_target(e);
    if (event_code == LV_EVENT_CLICKED)
    {
        _ui_state_modify(ui_bluebtn, LV_STATE_CHECKED, _UI_MODIFY_STATE_TOGGLE);
    }
}
void ui_event_bellbtn(lv_event_t *e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t *target = lv_event_get_target(e);
    if (event_code == LV_EVENT_CLICKED)
    {
        _ui_state_modify(ui_bellbtn, LV_STATE_CHECKED, _UI_MODIFY_STATE_TOGGLE);
    }
}
void ui_event_gpsbtn(lv_event_t *e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t *target = lv_event_get_target(e);
    if (event_code == LV_EVENT_CLICKED)
    {
        _ui_state_modify(ui_gpsbtn, LV_STATE_CHECKED, _UI_MODIFY_STATE_TOGGLE);
    }
}
void ui_event_lightslider(lv_event_t *e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t *target = lv_event_get_target(e);
    if (event_code == LV_EVENT_VALUE_CHANGED)
    {
        backlight(e);
    }
}
void ui_event_volumeslider(lv_event_t *e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t *target = lv_event_get_target(e);
    if (event_code == LV_EVENT_VALUE_CHANGED)
    {
        volumesetting(e);
    }
}
void ui_event_setting(lv_event_t *e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t *target = lv_event_get_target(e);
    if (event_code == LV_EVENT_GESTURE && lv_indev_get_gesture_dir(lv_indev_get_act()) == LV_DIR_RIGHT)
    {
        _ui_screen_change(ui_home, LV_SCR_LOAD_ANIM_FADE_ON, 200, 0);
    }
}
void ui_event_aboutpannel(lv_event_t *e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t *target = lv_event_get_target(e);
    if (event_code == LV_EVENT_CLICKED)
    {
        _ui_screen_change(ui_aboutui, LV_SCR_LOAD_ANIM_MOVE_LEFT, 200, 0);
    }
}
void ui_event_aboutpannel1(lv_event_t *e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t *target = lv_event_get_target(e);
    if (event_code == LV_EVENT_CLICKED)
    {
        _ui_screen_change(ui_datetimeui, LV_SCR_LOAD_ANIM_MOVE_LEFT, 200, 0);
    }
}
void ui_event_wifipanel(lv_event_t *e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t *target = lv_event_get_target(e);
    if (event_code == LV_EVENT_CLICKED)
    {
        _ui_screen_change(ui_wifiset, LV_SCR_LOAD_ANIM_MOVE_LEFT, 200, 0);
    }
}
void ui_event_wifipanel1(lv_event_t *e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t *target = lv_event_get_target(e);
    if (event_code == LV_EVENT_CLICKED)
    {
        _ui_screen_change(ui_bluetoothset, LV_SCR_LOAD_ANIM_MOVE_LEFT, 200, 0);
    }
}
void ui_event_wifiset(lv_event_t *e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t *target = lv_event_get_target(e);
    if (event_code == LV_EVENT_GESTURE && lv_indev_get_gesture_dir(lv_indev_get_act()) == LV_DIR_RIGHT)
    {
        _ui_screen_change(ui_setting, LV_SCR_LOAD_ANIM_MOVE_RIGHT, 200, 0);
    }
    if (event_code == LV_EVENT_SCREEN_LOADED)
    {
        wifiscanf(e);
    }
}
void ui_event_headerbackico(lv_event_t *e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t *target = lv_event_get_target(e);
    if (event_code == LV_EVENT_CLICKED)
    {
        _ui_screen_change(ui_setting, LV_SCR_LOAD_ANIM_OVER_RIGHT, 200, 0);
    }
}
void ui_event_wlanswitch(lv_event_t *e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t *target = lv_event_get_target(e);
    if (event_code == LV_EVENT_VALUE_CHANGED && lv_obj_has_state(target, LV_STATE_CHECKED))
    {
        wifistart(e);
        _ui_flag_modify(ui_wificonnect, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_REMOVE);
        _ui_flag_modify(ui_wifiscan, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_REMOVE);
        _ui_flag_modify(ui_wifilist, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_REMOVE);
    }
    if (event_code == LV_EVENT_VALUE_CHANGED && !lv_obj_has_state(target, LV_STATE_CHECKED))
    {
        wificlose(e);
        _ui_flag_modify(ui_wificonnect, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_ADD);
        _ui_flag_modify(ui_wifiscan, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_ADD);
        _ui_flag_modify(ui_wifilist, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_ADD);
    }
}
void ui_event_wifirefresh(lv_event_t *e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t *target = lv_event_get_target(e);
    if (event_code == LV_EVENT_CLICKED)
    {
        wifisanf(e);
    }
}
void ui_event_wifilistname(lv_event_t *e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t *target = lv_event_get_target(e);
    if (event_code == LV_EVENT_CLICKED)
    {
        connectwifi(e);
        moveup_Animation(ui_enterwifipass, 0);
    }
}
void ui_event_wifipassinput(lv_event_t *e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t *target = lv_event_get_target(e);
    if (event_code == LV_EVENT_DEFOCUSED)
    {
        movedown_Animation(ui_enterwifipass, 0);
    }
}
void ui_event_connectbtn(lv_event_t *e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t *target = lv_event_get_target(e);
    if (event_code == LV_EVENT_CLICKED)
    {
        connectwifi(e);
    }
}
void ui_event_canceltbtn(lv_event_t *e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t *target = lv_event_get_target(e);
    if (event_code == LV_EVENT_CLICKED)
    {
        movedown_Animation(ui_enterwifipass, 0);
    }
}
void ui_event_aboutui(lv_event_t *e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t *target = lv_event_get_target(e);
    if (event_code == LV_EVENT_GESTURE && lv_indev_get_gesture_dir(lv_indev_get_act()) == LV_DIR_RIGHT)
    {
        _ui_screen_change(ui_setting, LV_SCR_LOAD_ANIM_MOVE_RIGHT, 200, 0);
    }
}
void ui_event_datetimeui(lv_event_t *e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t *target = lv_event_get_target(e);
    if (event_code == LV_EVENT_GESTURE && lv_indev_get_gesture_dir(lv_indev_get_act()) == LV_DIR_RIGHT)
    {
        _ui_screen_change(ui_setting, LV_SCR_LOAD_ANIM_MOVE_RIGHT, 200, 0);
    }
}
void ui_event_autodatetimeswitch(lv_event_t *e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t *target = lv_event_get_target(e);
    if (event_code == LV_EVENT_VALUE_CHANGED && !lv_obj_has_state(target, LV_STATE_CHECKED))
    {
        _ui_flag_modify(ui_setdate, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_REMOVE);
        _ui_flag_modify(ui_settime, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_REMOVE);
    }
    if (event_code == LV_EVENT_VALUE_CHANGED && lv_obj_has_state(target, LV_STATE_CHECKED))
    {
        _ui_flag_modify(ui_setdate, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_ADD);
        _ui_flag_modify(ui_settime, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_ADD);
    }
}
void ui_event_setdate(lv_event_t *e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t *target = lv_event_get_target(e);
    if (event_code == LV_EVENT_CLICKED)
    {
        _ui_flag_modify(ui_calendar, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_TOGGLE);
    }
}
void ui_event_calendar(lv_event_t *e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t *target = lv_event_get_current_target(e);
    char buf[_UI_TEMPORARY_STRING_BUFFER_SIZE];
    if (event_code == LV_EVENT_VALUE_CHANGED)
    {
        lv_calendar_date_t date;
        if (lv_calendar_get_pressed_date(target, &date))
        {
            lv_snprintf(buf, sizeof(buf), "日期  %d年%02d月%02d日", date.year, date.month, date.day);
        }
        _ui_checked_set_text_value(ui_date, target, "", buf);
    }
}
void ui_event_bluetoothset(lv_event_t *e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t *target = lv_event_get_target(e);
    if (event_code == LV_EVENT_GESTURE && lv_indev_get_gesture_dir(lv_indev_get_act()) == LV_DIR_RIGHT)
    {
        _ui_screen_change(ui_setting, LV_SCR_LOAD_ANIM_MOVE_RIGHT, 200, 0);
    }
    if (event_code == LV_EVENT_SCREEN_LOADED)
    {
        bluetoothscanf(e);
    }
}
void ui_event_bluetoothbackico(lv_event_t *e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t *target = lv_event_get_target(e);
    if (event_code == LV_EVENT_CLICKED)
    {
        _ui_screen_change(ui_setting, LV_SCR_LOAD_ANIM_OVER_RIGHT, 200, 0);
    }
}
void ui_event_bluetoothswitch(lv_event_t *e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t *target = lv_event_get_target(e);
    if (event_code == LV_EVENT_VALUE_CHANGED && lv_obj_has_state(target, LV_STATE_CHECKED))
    {
        bluetoothstart(e);
        _ui_flag_modify(ui_bluetoothconnect, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_REMOVE);
        _ui_flag_modify(ui_bluetoothscan, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_REMOVE);
        _ui_flag_modify(ui_bluetoothlist, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_REMOVE);
    }
    if (event_code == LV_EVENT_VALUE_CHANGED && !lv_obj_has_state(target, LV_STATE_CHECKED))
    {
        bluetoothclose(e);
        _ui_flag_modify(ui_bluetoothconnect, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_ADD);
        _ui_flag_modify(ui_bluetoothscan, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_ADD);
        _ui_flag_modify(ui_bluetoothlist, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_ADD);
    }
}
void ui_event_bluetoohtrefresh(lv_event_t *e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t *target = lv_event_get_target(e);
    if (event_code == LV_EVENT_CLICKED)
    {
        bluetoothsanf(e);
    }
}
void ui_event_bluetoothlist(lv_event_t *e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t *target = lv_event_get_target(e);
    if (event_code == LV_EVENT_CLICKED)
    {
        moveup_Animation(ui_enterbluetooth, 0);
    }
}
void ui_event_bluetoothlistname(lv_event_t *e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t *target = lv_event_get_target(e);
    if (event_code == LV_EVENT_CLICKED)
    {
        connectwifi(e);
        moveup_Animation(ui_enterbluetooth, 0);
    }
}
void ui_event_blacklist(lv_event_t *e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t *target = lv_event_get_target(e);
    if (event_code == LV_EVENT_CLICKED)
    {
        movedown_Animation(ui_enterbluetooth, 0);
    }
}
void ui_event_canceltbtn1(lv_event_t *e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t *target = lv_event_get_target(e);
    if (event_code == LV_EVENT_CLICKED)
    {
        movedown_Animation(ui_enterbluetooth, 0);
    }
}
void ui_event_connectbtn1(lv_event_t *e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t *target = lv_event_get_target(e);
    if (event_code == LV_EVENT_CLICKED)
    {
        connectwifi(e);
    }
}

///////////////////// 屏幕 ////////////////////
void ui_home_screen_init(void)
{
    ui_home = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_home, LV_OBJ_FLAG_SCROLLABLE); /// Flags
    lv_obj_set_style_bg_img_src(ui_home, &ui_img_bg_png, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_home, &ui_font_misans16, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_header = lv_obj_create(ui_home);
    lv_obj_set_width(ui_header, 320);
    lv_obj_set_height(ui_header, 30);
    lv_obj_set_align(ui_header, LV_ALIGN_TOP_MID);
    lv_obj_clear_flag(ui_header, LV_OBJ_FLAG_GESTURE_BUBBLE | LV_OBJ_FLAG_SCROLLABLE); /// Flags
    lv_obj_set_style_radius(ui_header, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_header, lv_color_hex(0x141414), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_header, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_header, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_blend_mode(ui_header, LV_BLEND_MODE_NORMAL, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_opa(ui_header, 20, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_body = lv_obj_create(ui_home);
    lv_obj_set_width(ui_body, 320);
    lv_obj_set_height(ui_body, 360);
    lv_obj_set_x(ui_body, 0);
    lv_obj_set_y(ui_body, -30);
    lv_obj_set_align(ui_body, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_body, LV_OBJ_FLAG_SCROLL_ONE);                                                        /// Flags
    lv_obj_clear_flag(ui_body, LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_PRESS_LOCK | LV_OBJ_FLAG_GESTURE_BUBBLE); /// Flags
    lv_obj_set_scrollbar_mode(ui_body, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_scroll_snap_x(ui_body, LV_SCROLL_SNAP_CENTER);
    lv_obj_set_scroll_dir(ui_body, LV_DIR_HOR);
    lv_obj_set_style_radius(ui_body, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_body, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_body, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_body, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui_body, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui_body, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui_body, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui_body, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_set_style_border_width(ui_body, 0, LV_PART_SCROLLBAR | LV_STATE_DEFAULT);

    ui_home1 = lv_obj_create(ui_body);
    lv_obj_set_width(ui_home1, 320);
    lv_obj_set_height(ui_home1, 360);
    lv_obj_set_align(ui_home1, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_home1, LV_OBJ_FLAG_PRESS_LOCK | LV_OBJ_FLAG_GESTURE_BUBBLE |
                                    LV_OBJ_FLAG_SCROLLABLE); /// Flags
    lv_obj_set_style_radius(ui_home1, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_home1, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_home1, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_home1, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui_home1, 20, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui_home1, 20, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui_home1, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui_home1, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui_home1, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_home1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_camera = lv_img_create(ui_home1);
    lv_img_set_src(ui_camera, &ui_img_camera_png);
    lv_obj_set_width(ui_camera, LV_SIZE_CONTENT);  /// 1
    lv_obj_set_height(ui_camera, LV_SIZE_CONTENT); /// 1
    lv_obj_set_x(ui_camera, -111);
    lv_obj_set_y(ui_camera, -130);
    lv_obj_set_align(ui_camera, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_camera, LV_OBJ_FLAG_PRESS_LOCK | LV_OBJ_FLAG_CLICK_FOCUSABLE | LV_OBJ_FLAG_GESTURE_BUBBLE |
                                     LV_OBJ_FLAG_SCROLLABLE | LV_OBJ_FLAG_SCROLL_ELASTIC | LV_OBJ_FLAG_SCROLL_MOMENTUM |
                                     LV_OBJ_FLAG_SCROLL_CHAIN); /// Flags

    ui_cameratext = lv_label_create(ui_home1);
    lv_obj_set_width(ui_cameratext, LV_SIZE_CONTENT);  /// 1
    lv_obj_set_height(ui_cameratext, LV_SIZE_CONTENT); /// 1
    lv_obj_set_x(ui_cameratext, -111);
    lv_obj_set_y(ui_cameratext, -90);
    lv_obj_set_align(ui_cameratext, LV_ALIGN_CENTER);
    lv_label_set_text(ui_cameratext, "相机");
    lv_obj_clear_flag(ui_cameratext, LV_OBJ_FLAG_PRESS_LOCK | LV_OBJ_FLAG_GESTURE_BUBBLE | LV_OBJ_FLAG_SCROLLABLE |
                                         LV_OBJ_FLAG_SCROLL_ELASTIC | LV_OBJ_FLAG_SCROLL_MOMENTUM | LV_OBJ_FLAG_SCROLL_CHAIN); /// Flags

    ui_clock = lv_img_create(ui_home1);
    lv_img_set_src(ui_clock, &ui_img_clock_png);
    lv_obj_set_width(ui_clock, LV_SIZE_CONTENT);  /// 1
    lv_obj_set_height(ui_clock, LV_SIZE_CONTENT); /// 1
    lv_obj_set_x(ui_clock, -37);
    lv_obj_set_y(ui_clock, -130);
    lv_obj_set_align(ui_clock, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_clock, LV_OBJ_FLAG_ADV_HITTEST); /// Flags
    lv_obj_clear_flag(ui_clock, LV_OBJ_FLAG_SCROLLABLE | LV_OBJ_FLAG_SCROLL_ELASTIC | LV_OBJ_FLAG_SCROLL_MOMENTUM |
                                    LV_OBJ_FLAG_SCROLL_CHAIN); /// Flags

    ui_clocktext = lv_label_create(ui_home1);
    lv_obj_set_width(ui_clocktext, LV_SIZE_CONTENT);  /// 1
    lv_obj_set_height(ui_clocktext, LV_SIZE_CONTENT); /// 1
    lv_obj_set_x(ui_clocktext, -37);
    lv_obj_set_y(ui_clocktext, -90);
    lv_obj_set_align(ui_clocktext, LV_ALIGN_CENTER);
    lv_label_set_text(ui_clocktext, "时钟");
    lv_obj_clear_flag(ui_clocktext, LV_OBJ_FLAG_SCROLLABLE | LV_OBJ_FLAG_SCROLL_ELASTIC | LV_OBJ_FLAG_SCROLL_MOMENTUM |
                                        LV_OBJ_FLAG_SCROLL_CHAIN); /// Flags

    ui_gallery = lv_img_create(ui_home1);
    lv_img_set_src(ui_gallery, &ui_img_gallery_png);
    lv_obj_set_width(ui_gallery, LV_SIZE_CONTENT);  /// 1
    lv_obj_set_height(ui_gallery, LV_SIZE_CONTENT); /// 1
    lv_obj_set_x(ui_gallery, 37);
    lv_obj_set_y(ui_gallery, -130);
    lv_obj_set_align(ui_gallery, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_gallery, LV_OBJ_FLAG_ADV_HITTEST); /// Flags
    lv_obj_clear_flag(ui_gallery, LV_OBJ_FLAG_SCROLLABLE | LV_OBJ_FLAG_SCROLL_ELASTIC | LV_OBJ_FLAG_SCROLL_MOMENTUM |
                                      LV_OBJ_FLAG_SCROLL_CHAIN); /// Flags

    ui_gallerytext = lv_label_create(ui_home1);
    lv_obj_set_width(ui_gallerytext, LV_SIZE_CONTENT);  /// 1
    lv_obj_set_height(ui_gallerytext, LV_SIZE_CONTENT); /// 1
    lv_obj_set_x(ui_gallerytext, 37);
    lv_obj_set_y(ui_gallerytext, -90);
    lv_obj_set_align(ui_gallerytext, LV_ALIGN_CENTER);
    lv_label_set_text(ui_gallerytext, "相册");
    lv_obj_clear_flag(ui_gallerytext, LV_OBJ_FLAG_SCROLLABLE | LV_OBJ_FLAG_SCROLL_ELASTIC | LV_OBJ_FLAG_SCROLL_MOMENTUM |
                                          LV_OBJ_FLAG_SCROLL_CHAIN); /// Flags

    ui_music = lv_img_create(ui_home1);
    lv_img_set_src(ui_music, &ui_img_music_png);
    lv_obj_set_width(ui_music, LV_SIZE_CONTENT);  /// 1
    lv_obj_set_height(ui_music, LV_SIZE_CONTENT); /// 1
    lv_obj_set_x(ui_music, 111);
    lv_obj_set_y(ui_music, -130);
    lv_obj_set_align(ui_music, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_music, LV_OBJ_FLAG_ADV_HITTEST); /// Flags
    lv_obj_clear_flag(ui_music, LV_OBJ_FLAG_SCROLLABLE | LV_OBJ_FLAG_SCROLL_ELASTIC | LV_OBJ_FLAG_SCROLL_MOMENTUM |
                                    LV_OBJ_FLAG_SCROLL_CHAIN); /// Flags

    ui_musictext = lv_label_create(ui_home1);
    lv_obj_set_width(ui_musictext, LV_SIZE_CONTENT);  /// 1
    lv_obj_set_height(ui_musictext, LV_SIZE_CONTENT); /// 1
    lv_obj_set_x(ui_musictext, 111);
    lv_obj_set_y(ui_musictext, -90);
    lv_obj_set_align(ui_musictext, LV_ALIGN_CENTER);
    lv_label_set_text(ui_musictext, "音乐");
    lv_obj_clear_flag(ui_musictext, LV_OBJ_FLAG_SCROLLABLE | LV_OBJ_FLAG_SCROLL_ELASTIC | LV_OBJ_FLAG_SCROLL_MOMENTUM |
                                        LV_OBJ_FLAG_SCROLL_CHAIN); /// Flags

    ui_settings = lv_img_create(ui_home1);
    lv_img_set_src(ui_settings, &ui_img_settings_png);
    lv_obj_set_width(ui_settings, LV_SIZE_CONTENT);  /// 1
    lv_obj_set_height(ui_settings, LV_SIZE_CONTENT); /// 1
    lv_obj_set_x(ui_settings, -111);
    lv_obj_set_y(ui_settings, -30);
    lv_obj_set_align(ui_settings, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_settings, LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_ADV_HITTEST); /// Flags
    lv_obj_clear_flag(ui_settings, LV_OBJ_FLAG_PRESS_LOCK | LV_OBJ_FLAG_SCROLLABLE | LV_OBJ_FLAG_SCROLL_ELASTIC |
                                       LV_OBJ_FLAG_SCROLL_MOMENTUM | LV_OBJ_FLAG_SCROLL_CHAIN); /// Flags

    ui_settingstext = lv_label_create(ui_home1);
    lv_obj_set_width(ui_settingstext, LV_SIZE_CONTENT);  /// 1
    lv_obj_set_height(ui_settingstext, LV_SIZE_CONTENT); /// 1
    lv_obj_set_x(ui_settingstext, -111);
    lv_obj_set_y(ui_settingstext, 10);
    lv_obj_set_align(ui_settingstext, LV_ALIGN_CENTER);
    lv_label_set_text(ui_settingstext, "设置");
    lv_obj_clear_flag(ui_settingstext, LV_OBJ_FLAG_SCROLLABLE | LV_OBJ_FLAG_SCROLL_ELASTIC | LV_OBJ_FLAG_SCROLL_MOMENTUM |
                                           LV_OBJ_FLAG_SCROLL_CHAIN); /// Flags

    ui_notes = lv_img_create(ui_home1);
    lv_img_set_src(ui_notes, &ui_img_notes_png);
    lv_obj_set_width(ui_notes, LV_SIZE_CONTENT);  /// 1
    lv_obj_set_height(ui_notes, LV_SIZE_CONTENT); /// 1
    lv_obj_set_x(ui_notes, -37);
    lv_obj_set_y(ui_notes, -30);
    lv_obj_set_align(ui_notes, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_notes, LV_OBJ_FLAG_ADV_HITTEST); /// Flags
    lv_obj_clear_flag(ui_notes, LV_OBJ_FLAG_SCROLLABLE | LV_OBJ_FLAG_SCROLL_ELASTIC | LV_OBJ_FLAG_SCROLL_MOMENTUM |
                                    LV_OBJ_FLAG_SCROLL_CHAIN); /// Flags

    ui_notestext = lv_label_create(ui_home1);
    lv_obj_set_width(ui_notestext, LV_SIZE_CONTENT);  /// 1
    lv_obj_set_height(ui_notestext, LV_SIZE_CONTENT); /// 1
    lv_obj_set_x(ui_notestext, -37);
    lv_obj_set_y(ui_notestext, 10);
    lv_obj_set_align(ui_notestext, LV_ALIGN_CENTER);
    lv_label_set_text(ui_notestext, "备忘录");
    lv_obj_clear_flag(ui_notestext, LV_OBJ_FLAG_SCROLLABLE | LV_OBJ_FLAG_SCROLL_ELASTIC | LV_OBJ_FLAG_SCROLL_MOMENTUM |
                                        LV_OBJ_FLAG_SCROLL_CHAIN); /// Flags

    ui_weather = lv_img_create(ui_home1);
    lv_img_set_src(ui_weather, &ui_img_weather_png);
    lv_obj_set_width(ui_weather, LV_SIZE_CONTENT);  /// 1
    lv_obj_set_height(ui_weather, LV_SIZE_CONTENT); /// 1
    lv_obj_set_x(ui_weather, 37);
    lv_obj_set_y(ui_weather, -30);
    lv_obj_set_align(ui_weather, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_weather, LV_OBJ_FLAG_ADV_HITTEST); /// Flags
    lv_obj_clear_flag(ui_weather, LV_OBJ_FLAG_SCROLLABLE | LV_OBJ_FLAG_SCROLL_ELASTIC | LV_OBJ_FLAG_SCROLL_MOMENTUM |
                                      LV_OBJ_FLAG_SCROLL_CHAIN); /// Flags

    ui_weathertext = lv_label_create(ui_home1);
    lv_obj_set_width(ui_weathertext, LV_SIZE_CONTENT);  /// 1
    lv_obj_set_height(ui_weathertext, LV_SIZE_CONTENT); /// 1
    lv_obj_set_x(ui_weathertext, 37);
    lv_obj_set_y(ui_weathertext, 10);
    lv_obj_set_align(ui_weathertext, LV_ALIGN_CENTER);
    lv_label_set_text(ui_weathertext, "天气");
    lv_obj_clear_flag(ui_weathertext, LV_OBJ_FLAG_SCROLLABLE | LV_OBJ_FLAG_SCROLL_ELASTIC | LV_OBJ_FLAG_SCROLL_MOMENTUM |
                                          LV_OBJ_FLAG_SCROLL_CHAIN); /// Flags

    ui_contacts = lv_img_create(ui_home1);
    lv_img_set_src(ui_contacts, &ui_img_contacts_png);
    lv_obj_set_width(ui_contacts, LV_SIZE_CONTENT);  /// 1
    lv_obj_set_height(ui_contacts, LV_SIZE_CONTENT); /// 1
    lv_obj_set_x(ui_contacts, 111);
    lv_obj_set_y(ui_contacts, -30);
    lv_obj_set_align(ui_contacts, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_contacts, LV_OBJ_FLAG_ADV_HITTEST); /// Flags
    lv_obj_clear_flag(ui_contacts, LV_OBJ_FLAG_SCROLLABLE | LV_OBJ_FLAG_SCROLL_ELASTIC | LV_OBJ_FLAG_SCROLL_MOMENTUM |
                                       LV_OBJ_FLAG_SCROLL_CHAIN); /// Flags

    ui_contactstext = lv_label_create(ui_home1);
    lv_obj_set_width(ui_contactstext, LV_SIZE_CONTENT);  /// 1
    lv_obj_set_height(ui_contactstext, LV_SIZE_CONTENT); /// 1
    lv_obj_set_x(ui_contactstext, 111);
    lv_obj_set_y(ui_contactstext, 10);
    lv_obj_set_align(ui_contactstext, LV_ALIGN_CENTER);
    lv_label_set_text(ui_contactstext, "通讯录");
    lv_obj_clear_flag(ui_contactstext, LV_OBJ_FLAG_SCROLLABLE | LV_OBJ_FLAG_SCROLL_ELASTIC | LV_OBJ_FLAG_SCROLL_MOMENTUM |
                                           LV_OBJ_FLAG_SCROLL_CHAIN); /// Flags

    ui_caculator = lv_img_create(ui_home1);
    lv_img_set_src(ui_caculator, &ui_img_calculator_png);
    lv_obj_set_width(ui_caculator, LV_SIZE_CONTENT);  /// 1
    lv_obj_set_height(ui_caculator, LV_SIZE_CONTENT); /// 1
    lv_obj_set_x(ui_caculator, -111);
    lv_obj_set_y(ui_caculator, 70);
    lv_obj_set_align(ui_caculator, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_caculator, LV_OBJ_FLAG_ADV_HITTEST); /// Flags
    lv_obj_clear_flag(ui_caculator, LV_OBJ_FLAG_SCROLLABLE | LV_OBJ_FLAG_SCROLL_ELASTIC | LV_OBJ_FLAG_SCROLL_MOMENTUM |
                                        LV_OBJ_FLAG_SCROLL_CHAIN); /// Flags

    ui_caculatortext = lv_label_create(ui_home1);
    lv_obj_set_width(ui_caculatortext, LV_SIZE_CONTENT);  /// 1
    lv_obj_set_height(ui_caculatortext, LV_SIZE_CONTENT); /// 1
    lv_obj_set_x(ui_caculatortext, -111);
    lv_obj_set_y(ui_caculatortext, 110);
    lv_obj_set_align(ui_caculatortext, LV_ALIGN_CENTER);
    lv_label_set_text(ui_caculatortext, "计算器");
    lv_obj_clear_flag(ui_caculatortext, LV_OBJ_FLAG_SCROLLABLE | LV_OBJ_FLAG_SCROLL_ELASTIC | LV_OBJ_FLAG_SCROLL_MOMENTUM |
                                            LV_OBJ_FLAG_SCROLL_CHAIN); /// Flags

    ui_filemanager = lv_img_create(ui_home1);
    lv_img_set_src(ui_filemanager, &ui_img_filemanager_png);
    lv_obj_set_width(ui_filemanager, LV_SIZE_CONTENT);  /// 1
    lv_obj_set_height(ui_filemanager, LV_SIZE_CONTENT); /// 1
    lv_obj_set_x(ui_filemanager, -37);
    lv_obj_set_y(ui_filemanager, 70);
    lv_obj_set_align(ui_filemanager, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_filemanager, LV_OBJ_FLAG_ADV_HITTEST); /// Flags
    lv_obj_clear_flag(ui_filemanager, LV_OBJ_FLAG_SCROLLABLE | LV_OBJ_FLAG_SCROLL_ELASTIC | LV_OBJ_FLAG_SCROLL_MOMENTUM |
                                          LV_OBJ_FLAG_SCROLL_CHAIN); /// Flags

    ui_filemanagertext = lv_label_create(ui_home1);
    lv_obj_set_width(ui_filemanagertext, LV_SIZE_CONTENT);  /// 1
    lv_obj_set_height(ui_filemanagertext, LV_SIZE_CONTENT); /// 1
    lv_obj_set_x(ui_filemanagertext, -37);
    lv_obj_set_y(ui_filemanagertext, 110);
    lv_obj_set_align(ui_filemanagertext, LV_ALIGN_CENTER);
    lv_label_set_text(ui_filemanagertext, "文件");
    lv_obj_clear_flag(ui_filemanagertext,
                      LV_OBJ_FLAG_SCROLLABLE | LV_OBJ_FLAG_SCROLL_ELASTIC | LV_OBJ_FLAG_SCROLL_MOMENTUM |
                          LV_OBJ_FLAG_SCROLL_CHAIN); /// Flags

    ui_video = lv_img_create(ui_home1);
    lv_img_set_src(ui_video, &ui_img_videos_png);
    lv_obj_set_width(ui_video, LV_SIZE_CONTENT);  /// 1
    lv_obj_set_height(ui_video, LV_SIZE_CONTENT); /// 1
    lv_obj_set_x(ui_video, 37);
    lv_obj_set_y(ui_video, 70);
    lv_obj_set_align(ui_video, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_video, LV_OBJ_FLAG_ADV_HITTEST); /// Flags
    lv_obj_clear_flag(ui_video, LV_OBJ_FLAG_SCROLLABLE | LV_OBJ_FLAG_SCROLL_ELASTIC | LV_OBJ_FLAG_SCROLL_MOMENTUM |
                                    LV_OBJ_FLAG_SCROLL_CHAIN); /// Flags

    ui_videotext = lv_label_create(ui_home1);
    lv_obj_set_width(ui_videotext, LV_SIZE_CONTENT);  /// 1
    lv_obj_set_height(ui_videotext, LV_SIZE_CONTENT); /// 1
    lv_obj_set_x(ui_videotext, 37);
    lv_obj_set_y(ui_videotext, 110);
    lv_obj_set_align(ui_videotext, LV_ALIGN_CENTER);
    lv_label_set_text(ui_videotext, "视频");
    lv_obj_clear_flag(ui_videotext, LV_OBJ_FLAG_SCROLLABLE | LV_OBJ_FLAG_SCROLL_ELASTIC | LV_OBJ_FLAG_SCROLL_MOMENTUM |
                                        LV_OBJ_FLAG_SCROLL_CHAIN); /// Flags

    ui_car = lv_img_create(ui_home1);
    lv_img_set_src(ui_car, &ui_img_car_png);
    lv_obj_set_width(ui_car, LV_SIZE_CONTENT);  /// 1
    lv_obj_set_height(ui_car, LV_SIZE_CONTENT); /// 1
    lv_obj_set_x(ui_car, 111);
    lv_obj_set_y(ui_car, 70);
    lv_obj_set_align(ui_car, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_car, LV_OBJ_FLAG_ADV_HITTEST); /// Flags
    lv_obj_clear_flag(ui_car, LV_OBJ_FLAG_SCROLLABLE | LV_OBJ_FLAG_SCROLL_ELASTIC | LV_OBJ_FLAG_SCROLL_MOMENTUM |
                                  LV_OBJ_FLAG_SCROLL_CHAIN); /// Flags

    ui_cartext = lv_label_create(ui_home1);
    lv_obj_set_width(ui_cartext, LV_SIZE_CONTENT);  /// 1
    lv_obj_set_height(ui_cartext, LV_SIZE_CONTENT); /// 1
    lv_obj_set_x(ui_cartext, 111);
    lv_obj_set_y(ui_cartext, 110);
    lv_obj_set_align(ui_cartext, LV_ALIGN_CENTER);
    lv_label_set_text(ui_cartext, "遥控车");
    lv_obj_clear_flag(ui_cartext, LV_OBJ_FLAG_SCROLLABLE | LV_OBJ_FLAG_SCROLL_ELASTIC | LV_OBJ_FLAG_SCROLL_MOMENTUM |
                                      LV_OBJ_FLAG_SCROLL_CHAIN); /// Flags

    ui_home2 = lv_obj_create(ui_body);
    lv_obj_set_width(ui_home2, 320);
    lv_obj_set_height(ui_home2, 360);
    lv_obj_set_x(ui_home2, 320);
    lv_obj_set_y(ui_home2, 0);
    lv_obj_set_align(ui_home2, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_home2, LV_OBJ_FLAG_PRESS_LOCK | LV_OBJ_FLAG_GESTURE_BUBBLE |
                                    LV_OBJ_FLAG_SCROLLABLE); /// Flags
    lv_obj_set_style_radius(ui_home2, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_home2, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_home2, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_home2, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui_home2, 20, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui_home2, 20, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui_home2, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui_home2, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui_home2, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_home2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_jionet = lv_img_create(ui_home2);
    lv_img_set_src(ui_jionet, &ui_img_jionet_png);
    lv_obj_set_width(ui_jionet, LV_SIZE_CONTENT);  /// 1
    lv_obj_set_height(ui_jionet, LV_SIZE_CONTENT); /// 1
    lv_obj_set_x(ui_jionet, -111);
    lv_obj_set_y(ui_jionet, -130);
    lv_obj_set_align(ui_jionet, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_jionet, LV_OBJ_FLAG_ADV_HITTEST); /// Flags
    lv_obj_clear_flag(ui_jionet, LV_OBJ_FLAG_SCROLLABLE | LV_OBJ_FLAG_SCROLL_ELASTIC | LV_OBJ_FLAG_SCROLL_MOMENTUM |
                                     LV_OBJ_FLAG_SCROLL_CHAIN); /// Flags

    ui_jionettext = lv_label_create(ui_home2);
    lv_obj_set_width(ui_jionettext, LV_SIZE_CONTENT);  /// 1
    lv_obj_set_height(ui_jionettext, LV_SIZE_CONTENT); /// 1
    lv_obj_set_x(ui_jionettext, -111);
    lv_obj_set_y(ui_jionettext, -90);
    lv_obj_set_align(ui_jionettext, LV_ALIGN_CENTER);
    lv_label_set_text(ui_jionettext, "WIFI");
    lv_obj_clear_flag(ui_jionettext, LV_OBJ_FLAG_SCROLLABLE | LV_OBJ_FLAG_SCROLL_ELASTIC | LV_OBJ_FLAG_SCROLL_MOMENTUM |
                                         LV_OBJ_FLAG_SCROLL_CHAIN); /// Flags

    ui_qrbarcode = lv_img_create(ui_home2);
    lv_img_set_src(ui_qrbarcode, &ui_img_qrbarcode_png);
    lv_obj_set_width(ui_qrbarcode, LV_SIZE_CONTENT);  /// 1
    lv_obj_set_height(ui_qrbarcode, LV_SIZE_CONTENT); /// 1
    lv_obj_set_x(ui_qrbarcode, -37);
    lv_obj_set_y(ui_qrbarcode, -130);
    lv_obj_set_align(ui_qrbarcode, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_qrbarcode, LV_OBJ_FLAG_ADV_HITTEST); /// Flags
    lv_obj_clear_flag(ui_qrbarcode, LV_OBJ_FLAG_SCROLLABLE | LV_OBJ_FLAG_SCROLL_ELASTIC | LV_OBJ_FLAG_SCROLL_MOMENTUM |
                                        LV_OBJ_FLAG_SCROLL_CHAIN); /// Flags

    ui_qrbarcodetext = lv_label_create(ui_home2);
    lv_obj_set_width(ui_qrbarcodetext, LV_SIZE_CONTENT);  /// 1
    lv_obj_set_height(ui_qrbarcodetext, LV_SIZE_CONTENT); /// 1
    lv_obj_set_x(ui_qrbarcodetext, -37);
    lv_obj_set_y(ui_qrbarcodetext, -90);
    lv_obj_set_align(ui_qrbarcodetext, LV_ALIGN_CENTER);
    lv_label_set_text(ui_qrbarcodetext, "二维码");
    lv_obj_clear_flag(ui_qrbarcodetext, LV_OBJ_FLAG_SCROLLABLE | LV_OBJ_FLAG_SCROLL_ELASTIC | LV_OBJ_FLAG_SCROLL_MOMENTUM |
                                            LV_OBJ_FLAG_SCROLL_CHAIN); /// Flags

    ui_bluetoothcontrl = lv_img_create(ui_home2);
    lv_img_set_src(ui_bluetoothcontrl, &ui_img_bluetoothcontrl_png);
    lv_obj_set_width(ui_bluetoothcontrl, LV_SIZE_CONTENT);  /// 1
    lv_obj_set_height(ui_bluetoothcontrl, LV_SIZE_CONTENT); /// 1
    lv_obj_set_x(ui_bluetoothcontrl, 37);
    lv_obj_set_y(ui_bluetoothcontrl, -130);
    lv_obj_set_align(ui_bluetoothcontrl, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_bluetoothcontrl, LV_OBJ_FLAG_ADV_HITTEST); /// Flags
    lv_obj_clear_flag(ui_bluetoothcontrl,
                      LV_OBJ_FLAG_SCROLLABLE | LV_OBJ_FLAG_SCROLL_ELASTIC | LV_OBJ_FLAG_SCROLL_MOMENTUM |
                          LV_OBJ_FLAG_SCROLL_CHAIN); /// Flags

    ui_bluetoothcontrltext = lv_label_create(ui_home2);
    lv_obj_set_width(ui_bluetoothcontrltext, LV_SIZE_CONTENT);  /// 1
    lv_obj_set_height(ui_bluetoothcontrltext, LV_SIZE_CONTENT); /// 1
    lv_obj_set_x(ui_bluetoothcontrltext, 37);
    lv_obj_set_y(ui_bluetoothcontrltext, -90);
    lv_obj_set_align(ui_bluetoothcontrltext, LV_ALIGN_CENTER);
    lv_label_set_text(ui_bluetoothcontrltext, "蓝牙");
    lv_obj_clear_flag(ui_bluetoothcontrltext,
                      LV_OBJ_FLAG_SCROLLABLE | LV_OBJ_FLAG_SCROLL_ELASTIC | LV_OBJ_FLAG_SCROLL_MOMENTUM |
                          LV_OBJ_FLAG_SCROLL_CHAIN); /// Flags

    ui_miremote = lv_img_create(ui_home2);
    lv_img_set_src(ui_miremote, &ui_img_mi_remote_png);
    lv_obj_set_width(ui_miremote, LV_SIZE_CONTENT);  /// 1
    lv_obj_set_height(ui_miremote, LV_SIZE_CONTENT); /// 1
    lv_obj_set_x(ui_miremote, 111);
    lv_obj_set_y(ui_miremote, -130);
    lv_obj_set_align(ui_miremote, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_miremote, LV_OBJ_FLAG_ADV_HITTEST); /// Flags
    lv_obj_clear_flag(ui_miremote, LV_OBJ_FLAG_SCROLLABLE | LV_OBJ_FLAG_SCROLL_ELASTIC | LV_OBJ_FLAG_SCROLL_MOMENTUM |
                                       LV_OBJ_FLAG_SCROLL_CHAIN); /// Flags

    ui_miremotetext = lv_label_create(ui_home2);
    lv_obj_set_width(ui_miremotetext, LV_SIZE_CONTENT);  /// 1
    lv_obj_set_height(ui_miremotetext, LV_SIZE_CONTENT); /// 1
    lv_obj_set_x(ui_miremotetext, 111);
    lv_obj_set_y(ui_miremotetext, -90);
    lv_obj_set_align(ui_miremotetext, LV_ALIGN_CENTER);
    lv_label_set_text(ui_miremotetext, "遥控器");
    lv_obj_clear_flag(ui_miremotetext, LV_OBJ_FLAG_SCROLLABLE | LV_OBJ_FLAG_SCROLL_ELASTIC | LV_OBJ_FLAG_SCROLL_MOMENTUM |
                                           LV_OBJ_FLAG_SCROLL_CHAIN); /// Flags

    ui_footer = lv_obj_create(ui_home);
    lv_obj_set_width(ui_footer, 320);
    lv_obj_set_height(ui_footer, 90);
    lv_obj_set_align(ui_footer, LV_ALIGN_BOTTOM_MID);
    lv_obj_clear_flag(ui_footer, LV_OBJ_FLAG_SCROLLABLE | LV_OBJ_FLAG_SCROLL_ELASTIC | LV_OBJ_FLAG_SCROLL_MOMENTUM |
                                     LV_OBJ_FLAG_SCROLL_CHAIN); /// Flags
    lv_obj_set_style_radius(ui_footer, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_footer, lv_color_hex(0x141414), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_footer, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_footer, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_blend_mode(ui_footer, LV_BLEND_MODE_NORMAL, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_opa(ui_footer, 20, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_phone = lv_img_create(ui_home);
    lv_img_set_src(ui_phone, &ui_img_phone_png);
    lv_obj_set_width(ui_phone, LV_SIZE_CONTENT);  /// 1
    lv_obj_set_height(ui_phone, LV_SIZE_CONTENT); /// 1
    lv_obj_set_x(ui_phone, -111);
    lv_obj_set_y(ui_phone, -23);
    lv_obj_set_align(ui_phone, LV_ALIGN_BOTTOM_MID);
    lv_obj_add_flag(ui_phone, LV_OBJ_FLAG_ADV_HITTEST); /// Flags
    lv_obj_clear_flag(ui_phone, LV_OBJ_FLAG_SCROLLABLE | LV_OBJ_FLAG_SCROLL_ELASTIC | LV_OBJ_FLAG_SCROLL_MOMENTUM |
                                    LV_OBJ_FLAG_SCROLL_CHAIN); /// Flags

    ui_phonet = lv_label_create(ui_home);
    lv_obj_set_width(ui_phonet, LV_SIZE_CONTENT);  /// 1
    lv_obj_set_height(ui_phonet, LV_SIZE_CONTENT); /// 1
    lv_obj_set_x(ui_phonet, -111);
    lv_obj_set_y(ui_phonet, -2);
    lv_obj_set_align(ui_phonet, LV_ALIGN_BOTTOM_MID);
    lv_label_set_text(ui_phonet, "电话");
    lv_obj_clear_flag(ui_phonet, LV_OBJ_FLAG_SCROLLABLE | LV_OBJ_FLAG_SCROLL_ELASTIC | LV_OBJ_FLAG_SCROLL_MOMENTUM |
                                     LV_OBJ_FLAG_SCROLL_CHAIN); /// Flags
    lv_obj_set_style_text_color(ui_phonet, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_phonet, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_email = lv_img_create(ui_home);
    lv_img_set_src(ui_email, &ui_img_email_png);
    lv_obj_set_width(ui_email, LV_SIZE_CONTENT);  /// 1
    lv_obj_set_height(ui_email, LV_SIZE_CONTENT); /// 1
    lv_obj_set_x(ui_email, -37);
    lv_obj_set_y(ui_email, -23);
    lv_obj_set_align(ui_email, LV_ALIGN_BOTTOM_MID);
    lv_obj_add_flag(ui_email, LV_OBJ_FLAG_ADV_HITTEST); /// Flags
    lv_obj_clear_flag(ui_email, LV_OBJ_FLAG_SCROLLABLE | LV_OBJ_FLAG_SCROLL_ELASTIC | LV_OBJ_FLAG_SCROLL_MOMENTUM |
                                    LV_OBJ_FLAG_SCROLL_CHAIN); /// Flags

    ui_emailt = lv_label_create(ui_home);
    lv_obj_set_width(ui_emailt, LV_SIZE_CONTENT);  /// 1
    lv_obj_set_height(ui_emailt, LV_SIZE_CONTENT); /// 1
    lv_obj_set_x(ui_emailt, -37);
    lv_obj_set_y(ui_emailt, -2);
    lv_obj_set_align(ui_emailt, LV_ALIGN_BOTTOM_MID);
    lv_label_set_text(ui_emailt, "邮件");
    lv_obj_clear_flag(ui_emailt, LV_OBJ_FLAG_SCROLLABLE | LV_OBJ_FLAG_SCROLL_ELASTIC | LV_OBJ_FLAG_SCROLL_MOMENTUM |
                                     LV_OBJ_FLAG_SCROLL_CHAIN); /// Flags
    lv_obj_set_style_text_color(ui_emailt, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_emailt, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_browser = lv_img_create(ui_home);
    lv_img_set_src(ui_browser, &ui_img_browser_png);
    lv_obj_set_width(ui_browser, LV_SIZE_CONTENT);  /// 1
    lv_obj_set_height(ui_browser, LV_SIZE_CONTENT); /// 1
    lv_obj_set_x(ui_browser, 37);
    lv_obj_set_y(ui_browser, -23);
    lv_obj_set_align(ui_browser, LV_ALIGN_BOTTOM_MID);
    lv_obj_add_flag(ui_browser, LV_OBJ_FLAG_ADV_HITTEST); /// Flags
    lv_obj_clear_flag(ui_browser, LV_OBJ_FLAG_SCROLLABLE | LV_OBJ_FLAG_SCROLL_ELASTIC | LV_OBJ_FLAG_SCROLL_MOMENTUM |
                                      LV_OBJ_FLAG_SCROLL_CHAIN); /// Flags

    ui_message = lv_img_create(ui_home);
    lv_img_set_src(ui_message, &ui_img_messaging_png);
    lv_obj_set_width(ui_message, LV_SIZE_CONTENT);  /// 1
    lv_obj_set_height(ui_message, LV_SIZE_CONTENT); /// 1
    lv_obj_set_x(ui_message, 111);
    lv_obj_set_y(ui_message, -23);
    lv_obj_set_align(ui_message, LV_ALIGN_BOTTOM_MID);
    lv_obj_add_flag(ui_message, LV_OBJ_FLAG_ADV_HITTEST); /// Flags
    lv_obj_clear_flag(ui_message, LV_OBJ_FLAG_SCROLLABLE | LV_OBJ_FLAG_SCROLL_ELASTIC | LV_OBJ_FLAG_SCROLL_MOMENTUM |
                                      LV_OBJ_FLAG_SCROLL_CHAIN); /// Flags

    ui_browsert = lv_label_create(ui_home);
    lv_obj_set_width(ui_browsert, LV_SIZE_CONTENT);  /// 1
    lv_obj_set_height(ui_browsert, LV_SIZE_CONTENT); /// 1
    lv_obj_set_x(ui_browsert, 37);
    lv_obj_set_y(ui_browsert, -2);
    lv_obj_set_align(ui_browsert, LV_ALIGN_BOTTOM_MID);
    lv_label_set_text(ui_browsert, "浏览器");
    lv_obj_clear_flag(ui_browsert, LV_OBJ_FLAG_SCROLLABLE | LV_OBJ_FLAG_SCROLL_ELASTIC | LV_OBJ_FLAG_SCROLL_MOMENTUM |
                                       LV_OBJ_FLAG_SCROLL_CHAIN); /// Flags
    lv_obj_set_style_text_color(ui_browsert, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_browsert, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_messages = lv_label_create(ui_home);
    lv_obj_set_width(ui_messages, LV_SIZE_CONTENT);  /// 1
    lv_obj_set_height(ui_messages, LV_SIZE_CONTENT); /// 1
    lv_obj_set_x(ui_messages, 111);
    lv_obj_set_y(ui_messages, -2);
    lv_obj_set_align(ui_messages, LV_ALIGN_BOTTOM_MID);
    lv_label_set_text(ui_messages, "信息");
    lv_obj_clear_flag(ui_messages, LV_OBJ_FLAG_SCROLLABLE | LV_OBJ_FLAG_SCROLL_ELASTIC | LV_OBJ_FLAG_SCROLL_MOMENTUM |
                                       LV_OBJ_FLAG_SCROLL_CHAIN); /// Flags
    lv_obj_set_style_text_color(ui_messages, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_messages, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_mobile = lv_label_create(ui_home);
    lv_obj_set_width(ui_mobile, LV_SIZE_CONTENT);  /// 1
    lv_obj_set_height(ui_mobile, LV_SIZE_CONTENT); /// 1
    lv_obj_set_x(ui_mobile, 10);
    lv_obj_set_y(ui_mobile, 7);
    lv_label_set_text(ui_mobile, "中国移动");
    lv_obj_clear_flag(ui_mobile, LV_OBJ_FLAG_SCROLLABLE | LV_OBJ_FLAG_SCROLL_ELASTIC | LV_OBJ_FLAG_SCROLL_MOMENTUM |
                                     LV_OBJ_FLAG_SCROLL_CHAIN); /// Flags
    lv_obj_set_style_text_color(ui_mobile, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_mobile, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_wifi = lv_label_create(ui_home);
    lv_obj_set_width(ui_wifi, LV_SIZE_CONTENT);  /// 1
    lv_obj_set_height(ui_wifi, LV_SIZE_CONTENT); /// 1
    lv_obj_set_x(ui_wifi, 78);
    lv_obj_set_y(ui_wifi, 7);
    lv_label_set_text(ui_wifi, "");
    lv_obj_clear_flag(ui_wifi, LV_OBJ_FLAG_SCROLLABLE | LV_OBJ_FLAG_SCROLL_ELASTIC | LV_OBJ_FLAG_SCROLL_MOMENTUM |
                                   LV_OBJ_FLAG_SCROLL_CHAIN); /// Flags
    lv_obj_set_style_text_color(ui_wifi, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_wifi, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_wifi, &ui_font_symbols16, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_battery = lv_label_create(ui_home);
    lv_obj_set_width(ui_battery, LV_SIZE_CONTENT);  /// 1
    lv_obj_set_height(ui_battery, LV_SIZE_CONTENT); /// 1
    lv_obj_set_x(ui_battery, -10);
    lv_obj_set_y(ui_battery, 7);
    lv_obj_set_align(ui_battery, LV_ALIGN_TOP_RIGHT);
    lv_label_set_text(ui_battery, "");
    lv_obj_clear_flag(ui_battery, LV_OBJ_FLAG_SCROLLABLE | LV_OBJ_FLAG_SCROLL_ELASTIC | LV_OBJ_FLAG_SCROLL_MOMENTUM |
                                      LV_OBJ_FLAG_SCROLL_CHAIN); /// Flags
    lv_obj_set_style_text_color(ui_battery, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_battery, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_battery, &ui_font_symbols16, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_time = lv_label_create(ui_home);
    lv_obj_set_width(ui_time, LV_SIZE_CONTENT);  /// 1
    lv_obj_set_height(ui_time, LV_SIZE_CONTENT); /// 1
    lv_obj_set_x(ui_time, 0);
    lv_obj_set_y(ui_time, 7);
    lv_obj_set_align(ui_time, LV_ALIGN_TOP_MID);
    lv_label_set_text(ui_time, "12:12");
    lv_obj_clear_flag(ui_time, LV_OBJ_FLAG_SCROLLABLE | LV_OBJ_FLAG_SCROLL_ELASTIC | LV_OBJ_FLAG_SCROLL_MOMENTUM |
                                   LV_OBJ_FLAG_SCROLL_CHAIN); /// Flags
    lv_obj_set_style_text_color(ui_time, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_time, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_batteryp = lv_label_create(ui_home);
    lv_obj_set_width(ui_batteryp, LV_SIZE_CONTENT);  /// 1
    lv_obj_set_height(ui_batteryp, LV_SIZE_CONTENT); /// 1
    lv_obj_set_x(ui_batteryp, -35);
    lv_obj_set_y(ui_batteryp, 7);
    lv_obj_set_align(ui_batteryp, LV_ALIGN_TOP_RIGHT);
    lv_label_set_text(ui_batteryp, "100%");
    lv_obj_clear_flag(ui_batteryp, LV_OBJ_FLAG_SCROLLABLE | LV_OBJ_FLAG_SCROLL_ELASTIC | LV_OBJ_FLAG_SCROLL_MOMENTUM |
                                       LV_OBJ_FLAG_SCROLL_CHAIN); /// Flags
    lv_obj_set_style_text_color(ui_batteryp, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_batteryp, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_menudown = lv_obj_create(ui_home);
    lv_obj_set_width(ui_menudown, 320);
    lv_obj_set_height(ui_menudown, 480);
    lv_obj_set_x(ui_menudown, 0);
    lv_obj_set_y(ui_menudown, -480);
    lv_obj_set_align(ui_menudown, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_menudown, LV_OBJ_FLAG_GESTURE_BUBBLE | LV_OBJ_FLAG_SCROLLABLE); /// Flags
    lv_obj_set_style_radius(ui_menudown, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_menudown, lv_color_hex(0x141414), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_menudown, 250, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_menudown, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_menudowntop = lv_obj_create(ui_menudown);
    lv_obj_set_width(ui_menudowntop, 280);
    lv_obj_set_height(ui_menudowntop, 70);
    lv_obj_set_x(ui_menudowntop, 0);
    lv_obj_set_y(ui_menudowntop, 80);
    lv_obj_set_align(ui_menudowntop, LV_ALIGN_TOP_MID);
    lv_obj_clear_flag(ui_menudowntop, LV_OBJ_FLAG_SCROLLABLE); /// Flags
    lv_obj_set_style_radius(ui_menudowntop, 10, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_menudowntop, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_wifibtn = lv_btn_create(ui_menudowntop);
    lv_obj_set_width(ui_wifibtn, 50);
    lv_obj_set_height(ui_wifibtn, 50);
    lv_obj_set_align(ui_wifibtn, LV_ALIGN_LEFT_MID);
    lv_obj_add_flag(ui_wifibtn, LV_OBJ_FLAG_SCROLL_ON_FOCUS);                       /// Flags
    lv_obj_clear_flag(ui_wifibtn, LV_OBJ_FLAG_PRESS_LOCK | LV_OBJ_FLAG_SCROLLABLE); /// Flags
    lv_obj_set_style_radius(ui_wifibtn, 50, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_wifibtn, lv_color_hex(0xACACAC), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_wifibtn, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_wifibtn, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui_wifibtn, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_spread(ui_wifibtn, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_wifibtn, &ui_font_symbols16, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui_wifibtn, 50, LV_PART_MAIN | LV_STATE_CHECKED);
    lv_obj_set_style_bg_color(ui_wifibtn, lv_color_hex(0x0078F5), LV_PART_MAIN | LV_STATE_CHECKED);
    lv_obj_set_style_bg_opa(ui_wifibtn, 255, LV_PART_MAIN | LV_STATE_CHECKED);
    lv_obj_set_style_border_width(ui_wifibtn, 0, LV_PART_MAIN | LV_STATE_CHECKED);

    ui_wifilabel = lv_label_create(ui_wifibtn);
    lv_obj_set_width(ui_wifilabel, LV_SIZE_CONTENT);  /// 1
    lv_obj_set_height(ui_wifilabel, LV_SIZE_CONTENT); /// 1
    lv_obj_set_align(ui_wifilabel, LV_ALIGN_CENTER);
    lv_label_set_text(ui_wifilabel, "");

    ui_bluebtn = lv_btn_create(ui_menudowntop);
    lv_obj_set_width(ui_bluebtn, 50);
    lv_obj_set_height(ui_bluebtn, 50);
    lv_obj_set_x(ui_bluebtn, 68);
    lv_obj_set_y(ui_bluebtn, 0);
    lv_obj_set_align(ui_bluebtn, LV_ALIGN_LEFT_MID);
    lv_obj_add_flag(ui_bluebtn, LV_OBJ_FLAG_SCROLL_ON_FOCUS);                       /// Flags
    lv_obj_clear_flag(ui_bluebtn, LV_OBJ_FLAG_PRESS_LOCK | LV_OBJ_FLAG_SCROLLABLE); /// Flags
    lv_obj_set_style_radius(ui_bluebtn, 50, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_bluebtn, lv_color_hex(0xACACAC), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_bluebtn, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_bluebtn, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui_bluebtn, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_spread(ui_bluebtn, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_bluebtn, &ui_font_symbols16, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui_bluebtn, 50, LV_PART_MAIN | LV_STATE_CHECKED);
    lv_obj_set_style_bg_color(ui_bluebtn, lv_color_hex(0x0078F5), LV_PART_MAIN | LV_STATE_CHECKED);
    lv_obj_set_style_bg_opa(ui_bluebtn, 255, LV_PART_MAIN | LV_STATE_CHECKED);
    lv_obj_set_style_border_width(ui_bluebtn, 0, LV_PART_MAIN | LV_STATE_CHECKED);

    ui_bluelabel = lv_label_create(ui_bluebtn);
    lv_obj_set_width(ui_bluelabel, LV_SIZE_CONTENT);  /// 1
    lv_obj_set_height(ui_bluelabel, LV_SIZE_CONTENT); /// 1
    lv_obj_set_align(ui_bluelabel, LV_ALIGN_CENTER);
    lv_label_set_text(ui_bluelabel, "");

    ui_bellbtn = lv_btn_create(ui_menudowntop);
    lv_obj_set_width(ui_bellbtn, 50);
    lv_obj_set_height(ui_bellbtn, 50);
    lv_obj_set_align(ui_bellbtn, LV_ALIGN_RIGHT_MID);
    lv_obj_add_flag(ui_bellbtn, LV_OBJ_FLAG_SCROLL_ON_FOCUS);                       /// Flags
    lv_obj_clear_flag(ui_bellbtn, LV_OBJ_FLAG_PRESS_LOCK | LV_OBJ_FLAG_SCROLLABLE); /// Flags
    lv_obj_set_style_radius(ui_bellbtn, 50, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_bellbtn, lv_color_hex(0xACACAC), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_bellbtn, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_bellbtn, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui_bellbtn, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_spread(ui_bellbtn, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_bellbtn, &ui_font_symbols16, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui_bellbtn, 50, LV_PART_MAIN | LV_STATE_CHECKED);
    lv_obj_set_style_bg_color(ui_bellbtn, lv_color_hex(0x0078F5), LV_PART_MAIN | LV_STATE_CHECKED);
    lv_obj_set_style_bg_opa(ui_bellbtn, 255, LV_PART_MAIN | LV_STATE_CHECKED);
    lv_obj_set_style_border_width(ui_bellbtn, 0, LV_PART_MAIN | LV_STATE_CHECKED);

    ui_belllabel = lv_label_create(ui_bellbtn);
    lv_obj_set_width(ui_belllabel, LV_SIZE_CONTENT);  /// 1
    lv_obj_set_height(ui_belllabel, LV_SIZE_CONTENT); /// 1
    lv_obj_set_align(ui_belllabel, LV_ALIGN_CENTER);
    lv_label_set_text(ui_belllabel, "");

    ui_gpsbtn = lv_btn_create(ui_menudowntop);
    lv_obj_set_width(ui_gpsbtn, 50);
    lv_obj_set_height(ui_gpsbtn, 50);
    lv_obj_set_x(ui_gpsbtn, -68);
    lv_obj_set_y(ui_gpsbtn, 0);
    lv_obj_set_align(ui_gpsbtn, LV_ALIGN_RIGHT_MID);
    lv_obj_add_flag(ui_gpsbtn, LV_OBJ_FLAG_SCROLL_ON_FOCUS);                       /// Flags
    lv_obj_clear_flag(ui_gpsbtn, LV_OBJ_FLAG_PRESS_LOCK | LV_OBJ_FLAG_SCROLLABLE); /// Flags
    lv_obj_set_style_radius(ui_gpsbtn, 50, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_gpsbtn, lv_color_hex(0xACACAC), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_gpsbtn, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_gpsbtn, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui_gpsbtn, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_spread(ui_gpsbtn, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_gpsbtn, &ui_font_symbols16, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui_gpsbtn, 50, LV_PART_MAIN | LV_STATE_CHECKED);
    lv_obj_set_style_bg_color(ui_gpsbtn, lv_color_hex(0x0078F5), LV_PART_MAIN | LV_STATE_CHECKED);
    lv_obj_set_style_bg_opa(ui_gpsbtn, 255, LV_PART_MAIN | LV_STATE_CHECKED);
    lv_obj_set_style_border_width(ui_gpsbtn, 0, LV_PART_MAIN | LV_STATE_CHECKED);

    ui_mutelabel1 = lv_label_create(ui_gpsbtn);
    lv_obj_set_width(ui_mutelabel1, LV_SIZE_CONTENT);  /// 1
    lv_obj_set_height(ui_mutelabel1, LV_SIZE_CONTENT); /// 1
    lv_obj_set_align(ui_mutelabel1, LV_ALIGN_CENTER);
    lv_label_set_text(ui_mutelabel1, "");

    ui_menudownlight = lv_obj_create(ui_menudown);
    lv_obj_set_width(ui_menudownlight, 280);
    lv_obj_set_height(ui_menudownlight, 30);
    lv_obj_set_x(ui_menudownlight, 0);
    lv_obj_set_y(ui_menudownlight, 160);
    lv_obj_set_align(ui_menudownlight, LV_ALIGN_TOP_MID);
    lv_obj_clear_flag(ui_menudownlight, LV_OBJ_FLAG_SCROLLABLE); /// Flags
    lv_obj_set_style_radius(ui_menudownlight, 10, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_menudownlight, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_menudownlight, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_menudownlight, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_lightslider = lv_slider_create(ui_menudownlight);
    lv_slider_set_value(ui_lightslider, 100, LV_ANIM_OFF);
    if (lv_slider_get_mode(ui_lightslider) == LV_SLIDER_MODE_RANGE)
        lv_slider_set_left_value(ui_lightslider, 0, LV_ANIM_OFF);
    lv_obj_set_width(ui_lightslider, 280);
    lv_obj_set_height(ui_lightslider, 30);
    lv_obj_set_align(ui_lightslider, LV_ALIGN_CENTER);
    lv_obj_set_style_radius(ui_lightslider, 10, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_lightslider, lv_color_hex(0x2D2D2D), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_lightslider, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_lightslider, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_set_style_radius(ui_lightslider, 0, LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_lightslider, lv_color_hex(0xFFFFFF), LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_lightslider, 255, LV_PART_INDICATOR | LV_STATE_DEFAULT);

    lv_obj_set_style_radius(ui_lightslider, 10, LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_lightslider, lv_color_hex(0xFFFFFF), LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_lightslider, 0, LV_PART_KNOB | LV_STATE_DEFAULT);

    ui_lighttext = lv_label_create(ui_lightslider);
    lv_obj_set_width(ui_lighttext, LV_SIZE_CONTENT);  /// 1
    lv_obj_set_height(ui_lighttext, LV_SIZE_CONTENT); /// 1
    lv_obj_set_x(ui_lighttext, 10);
    lv_obj_set_y(ui_lighttext, 0);
    lv_obj_set_align(ui_lighttext, LV_ALIGN_LEFT_MID);
    lv_label_set_text(ui_lighttext, "");
    lv_obj_set_style_text_color(ui_lighttext, lv_color_hex(0x2D2D2D), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_lighttext, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_lighttext, &ui_font_symbols16, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_menudownvolume = lv_obj_create(ui_menudown);
    lv_obj_set_width(ui_menudownvolume, 280);
    lv_obj_set_height(ui_menudownvolume, 30);
    lv_obj_set_x(ui_menudownvolume, 0);
    lv_obj_set_y(ui_menudownvolume, 200);
    lv_obj_set_align(ui_menudownvolume, LV_ALIGN_TOP_MID);
    lv_obj_clear_flag(ui_menudownvolume, LV_OBJ_FLAG_SCROLLABLE); /// Flags
    lv_obj_set_style_radius(ui_menudownvolume, 10, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_menudownvolume, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_menudownvolume, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_menudownvolume, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_volumeslider = lv_slider_create(ui_menudownvolume);
    lv_slider_set_value(ui_volumeslider, 50, LV_ANIM_OFF);
    if (lv_slider_get_mode(ui_volumeslider) == LV_SLIDER_MODE_RANGE)
        lv_slider_set_left_value(ui_volumeslider, 0,
                                 LV_ANIM_OFF);
    lv_obj_set_width(ui_volumeslider, 280);
    lv_obj_set_height(ui_volumeslider, 30);
    lv_obj_set_align(ui_volumeslider, LV_ALIGN_CENTER);
    lv_obj_set_style_radius(ui_volumeslider, 10, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_volumeslider, lv_color_hex(0x2D2D2D), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_volumeslider, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_volumeslider, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_set_style_radius(ui_volumeslider, 0, LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_volumeslider, lv_color_hex(0xFFFFFF), LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_volumeslider, 255, LV_PART_INDICATOR | LV_STATE_DEFAULT);

    lv_obj_set_style_radius(ui_volumeslider, 10, LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_volumeslider, lv_color_hex(0xFFFFFF), LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_volumeslider, 0, LV_PART_KNOB | LV_STATE_DEFAULT);

    ui_volumetext = lv_label_create(ui_volumeslider);
    lv_obj_set_width(ui_volumetext, LV_SIZE_CONTENT);  /// 1
    lv_obj_set_height(ui_volumetext, LV_SIZE_CONTENT); /// 1
    lv_obj_set_x(ui_volumetext, 10);
    lv_obj_set_y(ui_volumetext, 0);
    lv_obj_set_align(ui_volumetext, LV_ALIGN_LEFT_MID);
    lv_label_set_text(ui_volumetext, "");
    lv_obj_set_style_text_color(ui_volumetext, lv_color_hex(0x2D2D2D), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_volumetext, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_volumetext, &ui_font_symbols16, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_menudownfoot = lv_obj_create(ui_menudown);
    lv_obj_set_width(ui_menudownfoot, 50);
    lv_obj_set_height(ui_menudownfoot, 3);
    lv_obj_set_x(ui_menudownfoot, 0);
    lv_obj_set_y(ui_menudownfoot, 240);
    lv_obj_set_align(ui_menudownfoot, LV_ALIGN_TOP_MID);
    lv_obj_clear_flag(ui_menudownfoot, LV_OBJ_FLAG_SCROLLABLE); /// Flags
    lv_obj_set_style_bg_color(ui_menudownfoot, lv_color_hex(0xE6E6E6), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_menudownfoot, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_menudownfoot, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_add_event_cb(ui_header, ui_event_header, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_settings, ui_event_settings, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_wifibtn, ui_event_wifibtn, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_bluebtn, ui_event_bluebtn, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_bellbtn, ui_event_bellbtn, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_gpsbtn, ui_event_gpsbtn, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_lightslider, ui_event_lightslider, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_volumeslider, ui_event_volumeslider, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_menudown, ui_event_menudown, LV_EVENT_ALL, NULL);
}
void ui_setting_screen_init(void)
{
    ui_setting = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_setting, LV_OBJ_FLAG_SCROLLABLE); /// Flags
    lv_obj_set_style_radius(ui_setting, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_setting, lv_color_hex(0xE6E6E6), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_setting, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_setting, &ui_font_misans16, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_settingheader = lv_obj_create(ui_setting);
    lv_obj_set_width(ui_settingheader, 320);
    lv_obj_set_height(ui_settingheader, 60);
    lv_obj_set_align(ui_settingheader, LV_ALIGN_TOP_MID);
    lv_obj_clear_flag(ui_settingheader, LV_OBJ_FLAG_GESTURE_BUBBLE | LV_OBJ_FLAG_SCROLLABLE); /// Flags
    lv_obj_set_style_radius(ui_settingheader, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_settingheader, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_settingheader, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_settingheader, lv_color_hex(0xB4B4B4), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_settingheader, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_settingheader, 1, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui_settingheader, LV_BORDER_SIDE_BOTTOM, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui_settingheader, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui_settingheader, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui_settingheader, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui_settingheader, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui_settingheader, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_settingheader, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_settingheader, &ui_font_misans16, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_settingmobile = lv_label_create(ui_settingheader);
    lv_obj_set_width(ui_settingmobile, LV_SIZE_CONTENT);  /// 1
    lv_obj_set_height(ui_settingmobile, LV_SIZE_CONTENT); /// 1
    lv_obj_set_x(ui_settingmobile, 10);
    lv_obj_set_y(ui_settingmobile, 7);
    lv_label_set_text(ui_settingmobile, "中国移动");

    ui_settingwifi = lv_label_create(ui_settingheader);
    lv_obj_set_width(ui_settingwifi, LV_SIZE_CONTENT);  /// 1
    lv_obj_set_height(ui_settingwifi, LV_SIZE_CONTENT); /// 1
    lv_obj_set_x(ui_settingwifi, 78);
    lv_obj_set_y(ui_settingwifi, 7);
    lv_label_set_text(ui_settingwifi, "");
    lv_obj_set_style_text_font(ui_settingwifi, &ui_font_symbols16, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_settingbattery = lv_label_create(ui_settingheader);
    lv_obj_set_width(ui_settingbattery, LV_SIZE_CONTENT);  /// 1
    lv_obj_set_height(ui_settingbattery, LV_SIZE_CONTENT); /// 1
    lv_obj_set_x(ui_settingbattery, -10);
    lv_obj_set_y(ui_settingbattery, 7);
    lv_obj_set_align(ui_settingbattery, LV_ALIGN_TOP_RIGHT);
    lv_label_set_text(ui_settingbattery, "");
    lv_obj_set_style_text_font(ui_settingbattery, &ui_font_symbols16, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_settingtime = lv_label_create(ui_settingheader);
    lv_obj_set_width(ui_settingtime, LV_SIZE_CONTENT);  /// 1
    lv_obj_set_height(ui_settingtime, LV_SIZE_CONTENT); /// 1
    lv_obj_set_x(ui_settingtime, 0);
    lv_obj_set_y(ui_settingtime, 7);
    lv_obj_set_align(ui_settingtime, LV_ALIGN_TOP_MID);
    lv_label_set_text(ui_settingtime, "12:12");

    ui_settingbatteryp = lv_label_create(ui_settingheader);
    lv_obj_set_width(ui_settingbatteryp, LV_SIZE_CONTENT);  /// 1
    lv_obj_set_height(ui_settingbatteryp, LV_SIZE_CONTENT); /// 1
    lv_obj_set_x(ui_settingbatteryp, -35);
    lv_obj_set_y(ui_settingbatteryp, 7);
    lv_obj_set_align(ui_settingbatteryp, LV_ALIGN_TOP_RIGHT);
    lv_label_set_text(ui_settingbatteryp, "100%");

    ui_settingtext = lv_label_create(ui_settingheader);
    lv_obj_set_width(ui_settingtext, LV_SIZE_CONTENT);  /// 1
    lv_obj_set_height(ui_settingtext, LV_SIZE_CONTENT); /// 1
    lv_obj_set_x(ui_settingtext, 0);
    lv_obj_set_y(ui_settingtext, -2);
    lv_obj_set_align(ui_settingtext, LV_ALIGN_BOTTOM_MID);
    lv_label_set_text(ui_settingtext, "设置");

    ui_setpannel = lv_obj_create(ui_setting);
    lv_obj_set_width(ui_setpannel, 320);
    lv_obj_set_height(ui_setpannel, 420);
    lv_obj_set_x(ui_setpannel, 0);
    lv_obj_set_y(ui_setpannel, 60);
    lv_obj_set_align(ui_setpannel, LV_ALIGN_TOP_MID);
    lv_obj_set_flex_flow(ui_setpannel, LV_FLEX_FLOW_COLUMN);
    lv_obj_set_flex_align(ui_setpannel, LV_FLEX_ALIGN_START, LV_FLEX_ALIGN_START, LV_FLEX_ALIGN_START);
    lv_obj_clear_flag(ui_setpannel, LV_OBJ_FLAG_PRESS_LOCK | LV_OBJ_FLAG_CLICK_FOCUSABLE |
                                        LV_OBJ_FLAG_SCROLLABLE); /// Flags
    lv_obj_set_style_radius(ui_setpannel, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_setpannel, lv_color_hex(0xE6E6E6), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_setpannel, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_setpannel, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui_setpannel, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui_setpannel, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui_setpannel, 30, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui_setpannel, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_row(ui_setpannel, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_column(ui_setpannel, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_aboutpannel = lv_obj_create(ui_setpannel);
    lv_obj_set_width(ui_aboutpannel, 320);
    lv_obj_set_height(ui_aboutpannel, 40);
    lv_obj_set_align(ui_aboutpannel, LV_ALIGN_TOP_MID);
    lv_obj_clear_flag(ui_aboutpannel, LV_OBJ_FLAG_PRESS_LOCK | LV_OBJ_FLAG_CLICK_FOCUSABLE | LV_OBJ_FLAG_SCROLLABLE |
                                          LV_OBJ_FLAG_SCROLL_ELASTIC | LV_OBJ_FLAG_SCROLL_MOMENTUM | LV_OBJ_FLAG_SCROLL_CHAIN); /// Flags
    lv_obj_set_style_radius(ui_aboutpannel, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_aboutpannel, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_aboutpannel, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_aboutpannel, lv_color_hex(0xB4B4B4), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_aboutpannel, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_aboutpannel, 1, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui_aboutpannel, LV_BORDER_SIDE_BOTTOM, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_aboutlabel = lv_label_create(ui_aboutpannel);
    lv_obj_set_width(ui_aboutlabel, LV_SIZE_CONTENT);  /// 1
    lv_obj_set_height(ui_aboutlabel, LV_SIZE_CONTENT); /// 1
    lv_obj_set_align(ui_aboutlabel, LV_ALIGN_LEFT_MID);
    lv_label_set_text(ui_aboutlabel, "关于本机");
    lv_obj_clear_flag(ui_aboutlabel, LV_OBJ_FLAG_PRESS_LOCK); /// Flags

    ui_aboutlabel2 = lv_label_create(ui_aboutpannel);
    lv_obj_set_width(ui_aboutlabel2, LV_SIZE_CONTENT);  /// 1
    lv_obj_set_height(ui_aboutlabel2, LV_SIZE_CONTENT); /// 1
    lv_obj_set_align(ui_aboutlabel2, LV_ALIGN_RIGHT_MID);
    lv_label_set_text(ui_aboutlabel2, "");
    lv_obj_clear_flag(ui_aboutlabel2, LV_OBJ_FLAG_PRESS_LOCK); /// Flags
    lv_obj_set_style_text_color(ui_aboutlabel2, lv_color_hex(0x787878), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_aboutlabel2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_aboutlabel2, &ui_font_symbols16, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_aboutpannel1 = lv_obj_create(ui_setpannel);
    lv_obj_set_width(ui_aboutpannel1, 320);
    lv_obj_set_height(ui_aboutpannel1, 40);
    lv_obj_set_x(ui_aboutpannel1, 166);
    lv_obj_set_y(ui_aboutpannel1, 2);
    lv_obj_set_align(ui_aboutpannel1, LV_ALIGN_TOP_MID);
    lv_obj_clear_flag(ui_aboutpannel1, LV_OBJ_FLAG_PRESS_LOCK | LV_OBJ_FLAG_CLICK_FOCUSABLE | LV_OBJ_FLAG_SCROLLABLE |
                                           LV_OBJ_FLAG_SCROLL_ELASTIC | LV_OBJ_FLAG_SCROLL_MOMENTUM | LV_OBJ_FLAG_SCROLL_CHAIN); /// Flags
    lv_obj_set_style_radius(ui_aboutpannel1, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_aboutpannel1, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_aboutpannel1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_aboutpannel1, lv_color_hex(0xB4B4B4), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_aboutpannel1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_aboutpannel1, 1, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui_aboutpannel1, LV_BORDER_SIDE_BOTTOM, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_aboutlabel19 = lv_label_create(ui_aboutpannel1);
    lv_obj_set_width(ui_aboutlabel19, LV_SIZE_CONTENT);  /// 1
    lv_obj_set_height(ui_aboutlabel19, LV_SIZE_CONTENT); /// 1
    lv_obj_set_align(ui_aboutlabel19, LV_ALIGN_LEFT_MID);
    lv_label_set_text(ui_aboutlabel19, "日期和时间");
    lv_obj_clear_flag(ui_aboutlabel19, LV_OBJ_FLAG_PRESS_LOCK); /// Flags

    ui_aboutlabel21 = lv_label_create(ui_aboutpannel1);
    lv_obj_set_width(ui_aboutlabel21, LV_SIZE_CONTENT);  /// 1
    lv_obj_set_height(ui_aboutlabel21, LV_SIZE_CONTENT); /// 1
    lv_obj_set_align(ui_aboutlabel21, LV_ALIGN_RIGHT_MID);
    lv_label_set_text(ui_aboutlabel21, "");
    lv_obj_clear_flag(ui_aboutlabel21, LV_OBJ_FLAG_PRESS_LOCK); /// Flags
    lv_obj_set_style_text_color(ui_aboutlabel21, lv_color_hex(0x787878), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_aboutlabel21, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_aboutlabel21, &ui_font_symbols16, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_wifipanel = lv_obj_create(ui_setpannel);
    lv_obj_set_width(ui_wifipanel, 320);
    lv_obj_set_height(ui_wifipanel, 40);
    lv_obj_set_align(ui_wifipanel, LV_ALIGN_TOP_MID);
    lv_obj_clear_flag(ui_wifipanel, LV_OBJ_FLAG_PRESS_LOCK | LV_OBJ_FLAG_SCROLLABLE); /// Flags
    lv_obj_set_style_radius(ui_wifipanel, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_wifipanel, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_wifipanel, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_wifipanel, lv_color_hex(0xB4B4B4), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_wifipanel, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_wifipanel, 1, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui_wifipanel, LV_BORDER_SIDE_BOTTOM, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_wifitext = lv_label_create(ui_wifipanel);
    lv_obj_set_width(ui_wifitext, LV_SIZE_CONTENT);  /// 1
    lv_obj_set_height(ui_wifitext, LV_SIZE_CONTENT); /// 1
    lv_obj_set_align(ui_wifitext, LV_ALIGN_LEFT_MID);
    lv_label_set_text(ui_wifitext, "WIFI");
    lv_obj_clear_flag(ui_wifitext, LV_OBJ_FLAG_PRESS_LOCK); /// Flags

    ui_wifionlabel = lv_label_create(ui_wifipanel);
    lv_obj_set_width(ui_wifionlabel, LV_SIZE_CONTENT);  /// 1
    lv_obj_set_height(ui_wifionlabel, LV_SIZE_CONTENT); /// 1
    lv_obj_set_x(ui_wifionlabel, -20);
    lv_obj_set_y(ui_wifionlabel, 0);
    lv_obj_set_align(ui_wifionlabel, LV_ALIGN_RIGHT_MID);
    lv_label_set_text(ui_wifionlabel, "已关闭");
    lv_obj_clear_flag(ui_wifionlabel, LV_OBJ_FLAG_PRESS_LOCK); /// Flags
    lv_obj_set_style_text_color(ui_wifionlabel, lv_color_hex(0x787878), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_wifionlabel, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_wifionlabel1 = lv_label_create(ui_wifipanel);
    lv_obj_set_width(ui_wifionlabel1, LV_SIZE_CONTENT);  /// 1
    lv_obj_set_height(ui_wifionlabel1, LV_SIZE_CONTENT); /// 1
    lv_obj_set_align(ui_wifionlabel1, LV_ALIGN_RIGHT_MID);
    lv_label_set_text(ui_wifionlabel1, "");
    lv_obj_clear_flag(ui_wifionlabel1, LV_OBJ_FLAG_PRESS_LOCK); /// Flags
    lv_obj_set_style_text_color(ui_wifionlabel1, lv_color_hex(0x787878), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_wifionlabel1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_wifionlabel1, &ui_font_symbols16, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_wifipanel1 = lv_obj_create(ui_setpannel);
    lv_obj_set_width(ui_wifipanel1, 320);
    lv_obj_set_height(ui_wifipanel1, 40);
    lv_obj_set_align(ui_wifipanel1, LV_ALIGN_TOP_MID);
    lv_obj_clear_flag(ui_wifipanel1, LV_OBJ_FLAG_PRESS_LOCK | LV_OBJ_FLAG_SCROLLABLE); /// Flags
    lv_obj_set_style_radius(ui_wifipanel1, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_wifipanel1, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_wifipanel1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_wifipanel1, lv_color_hex(0xB4B4B4), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_wifipanel1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_wifipanel1, 1, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui_wifipanel1, LV_BORDER_SIDE_BOTTOM, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_wifitext1 = lv_label_create(ui_wifipanel1);
    lv_obj_set_width(ui_wifitext1, LV_SIZE_CONTENT);  /// 1
    lv_obj_set_height(ui_wifitext1, LV_SIZE_CONTENT); /// 1
    lv_obj_set_align(ui_wifitext1, LV_ALIGN_LEFT_MID);
    lv_label_set_text(ui_wifitext1, "蓝牙");
    lv_obj_clear_flag(ui_wifitext1, LV_OBJ_FLAG_PRESS_LOCK); /// Flags

    ui_wifionlabel2 = lv_label_create(ui_wifipanel1);
    lv_obj_set_width(ui_wifionlabel2, LV_SIZE_CONTENT);  /// 1
    lv_obj_set_height(ui_wifionlabel2, LV_SIZE_CONTENT); /// 1
    lv_obj_set_x(ui_wifionlabel2, -20);
    lv_obj_set_y(ui_wifionlabel2, 0);
    lv_obj_set_align(ui_wifionlabel2, LV_ALIGN_RIGHT_MID);
    lv_label_set_text(ui_wifionlabel2, "已开启");
    lv_obj_clear_flag(ui_wifionlabel2, LV_OBJ_FLAG_PRESS_LOCK); /// Flags
    lv_obj_set_style_text_color(ui_wifionlabel2, lv_color_hex(0x787878), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_wifionlabel2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_wifionlabel3 = lv_label_create(ui_wifipanel1);
    lv_obj_set_width(ui_wifionlabel3, LV_SIZE_CONTENT);  /// 1
    lv_obj_set_height(ui_wifionlabel3, LV_SIZE_CONTENT); /// 1
    lv_obj_set_align(ui_wifionlabel3, LV_ALIGN_RIGHT_MID);
    lv_label_set_text(ui_wifionlabel3, "");
    lv_obj_clear_flag(ui_wifionlabel3, LV_OBJ_FLAG_PRESS_LOCK); /// Flags
    lv_obj_set_style_text_color(ui_wifionlabel3, lv_color_hex(0x787878), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_wifionlabel3, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_wifionlabel3, &ui_font_symbols16, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_add_event_cb(ui_aboutpannel, ui_event_aboutpannel, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_aboutpannel1, ui_event_aboutpannel1, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_wifipanel, ui_event_wifipanel, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_wifipanel1, ui_event_wifipanel1, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_setting, ui_event_setting, LV_EVENT_ALL, NULL);
}
void ui_wifiset_screen_init(void)
{
    ui_wifiset = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_wifiset, LV_OBJ_FLAG_SCROLLABLE); /// Flags
    lv_obj_set_style_radius(ui_wifiset, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_wifiset, lv_color_hex(0xE6E6E6), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_wifiset, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_wifiset, &ui_font_misans16, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_wlanheader = lv_obj_create(ui_wifiset);
    lv_obj_set_width(ui_wlanheader, 320);
    lv_obj_set_height(ui_wlanheader, 60);
    lv_obj_set_align(ui_wlanheader, LV_ALIGN_TOP_MID);
    lv_obj_clear_flag(ui_wlanheader, LV_OBJ_FLAG_GESTURE_BUBBLE | LV_OBJ_FLAG_SCROLLABLE); /// Flags
    lv_obj_set_style_radius(ui_wlanheader, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_wlanheader, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_wlanheader, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_wlanheader, lv_color_hex(0xB4B4B4), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_wlanheader, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_wlanheader, 1, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui_wlanheader, LV_BORDER_SIDE_BOTTOM, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui_wlanheader, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui_wlanheader, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui_wlanheader, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui_wlanheader, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui_wlanheader, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_wlanheader, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_wlanheader, &ui_font_misans16, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_wlanmobile = lv_label_create(ui_wlanheader);
    lv_obj_set_width(ui_wlanmobile, LV_SIZE_CONTENT);  /// 1
    lv_obj_set_height(ui_wlanmobile, LV_SIZE_CONTENT); /// 1
    lv_obj_set_x(ui_wlanmobile, 10);
    lv_obj_set_y(ui_wlanmobile, 7);
    lv_label_set_text(ui_wlanmobile, "中国移动");

    ui_wlanwifi = lv_label_create(ui_wlanheader);
    lv_obj_set_width(ui_wlanwifi, LV_SIZE_CONTENT);  /// 1
    lv_obj_set_height(ui_wlanwifi, LV_SIZE_CONTENT); /// 1
    lv_obj_set_x(ui_wlanwifi, 78);
    lv_obj_set_y(ui_wlanwifi, 7);
    lv_label_set_text(ui_wlanwifi, "");
    lv_obj_set_style_text_font(ui_wlanwifi, &ui_font_symbols16, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_wlanbattery = lv_label_create(ui_wlanheader);
    lv_obj_set_width(ui_wlanbattery, LV_SIZE_CONTENT);  /// 1
    lv_obj_set_height(ui_wlanbattery, LV_SIZE_CONTENT); /// 1
    lv_obj_set_x(ui_wlanbattery, -10);
    lv_obj_set_y(ui_wlanbattery, 7);
    lv_obj_set_align(ui_wlanbattery, LV_ALIGN_TOP_RIGHT);
    lv_label_set_text(ui_wlanbattery, "");
    lv_obj_set_style_text_font(ui_wlanbattery, &ui_font_symbols16, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_wlantime = lv_label_create(ui_wlanheader);
    lv_obj_set_width(ui_wlantime, LV_SIZE_CONTENT);  /// 1
    lv_obj_set_height(ui_wlantime, LV_SIZE_CONTENT); /// 1
    lv_obj_set_x(ui_wlantime, 0);
    lv_obj_set_y(ui_wlantime, 7);
    lv_obj_set_align(ui_wlantime, LV_ALIGN_TOP_MID);
    lv_label_set_text(ui_wlantime, "12:12");

    ui_wlanbatteryp = lv_label_create(ui_wlanheader);
    lv_obj_set_width(ui_wlanbatteryp, LV_SIZE_CONTENT);  /// 1
    lv_obj_set_height(ui_wlanbatteryp, LV_SIZE_CONTENT); /// 1
    lv_obj_set_x(ui_wlanbatteryp, -35);
    lv_obj_set_y(ui_wlanbatteryp, 7);
    lv_obj_set_align(ui_wlanbatteryp, LV_ALIGN_TOP_RIGHT);
    lv_label_set_text(ui_wlanbatteryp, "100%");

    ui_wlantitle = lv_label_create(ui_wlanheader);
    lv_obj_set_width(ui_wlantitle, LV_SIZE_CONTENT);  /// 1
    lv_obj_set_height(ui_wlantitle, LV_SIZE_CONTENT); /// 1
    lv_obj_set_x(ui_wlantitle, 30);
    lv_obj_set_y(ui_wlantitle, -2);
    lv_obj_set_align(ui_wlantitle, LV_ALIGN_BOTTOM_LEFT);
    lv_label_set_text(ui_wlantitle, "WLAN设置");

    ui_headerbackico = lv_label_create(ui_wlanheader);
    lv_obj_set_width(ui_headerbackico, LV_SIZE_CONTENT);  /// 1
    lv_obj_set_height(ui_headerbackico, LV_SIZE_CONTENT); /// 1
    lv_obj_set_x(ui_headerbackico, 10);
    lv_obj_set_y(ui_headerbackico, -3);
    lv_obj_set_align(ui_headerbackico, LV_ALIGN_BOTTOM_LEFT);
    lv_label_set_text(ui_headerbackico, "");
    lv_obj_add_flag(ui_headerbackico, LV_OBJ_FLAG_CLICKABLE); /// Flags
    lv_obj_set_style_text_font(ui_headerbackico, &ui_font_symbols16, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_wlansetpannel = lv_obj_create(ui_wifiset);
    lv_obj_set_width(ui_wlansetpannel, 320);
    lv_obj_set_height(ui_wlansetpannel, 420);
    lv_obj_set_x(ui_wlansetpannel, 0);
    lv_obj_set_y(ui_wlansetpannel, 60);
    lv_obj_set_align(ui_wlansetpannel, LV_ALIGN_TOP_MID);
    lv_obj_set_flex_flow(ui_wlansetpannel, LV_FLEX_FLOW_COLUMN);
    lv_obj_set_flex_align(ui_wlansetpannel, LV_FLEX_ALIGN_START, LV_FLEX_ALIGN_START, LV_FLEX_ALIGN_CENTER);
    lv_obj_clear_flag(ui_wlansetpannel, LV_OBJ_FLAG_SCROLLABLE); /// Flags
    lv_obj_set_style_radius(ui_wlansetpannel, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_wlansetpannel, lv_color_hex(0xE6E6E6), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_wlansetpannel, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_wlansetpannel, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_wlanswitchpanel = lv_obj_create(ui_wlansetpannel);
    lv_obj_set_width(ui_wlanswitchpanel, 280);
    lv_obj_set_height(ui_wlanswitchpanel, 40);
    lv_obj_set_align(ui_wlanswitchpanel, LV_ALIGN_TOP_MID);
    lv_obj_clear_flag(ui_wlanswitchpanel, LV_OBJ_FLAG_SCROLLABLE); /// Flags
    lv_obj_set_style_radius(ui_wlanswitchpanel, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_wlanswitchpanel, lv_color_hex(0xE6E6E6), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_wlanswitchpanel, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_wlanswitchpanel, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui_wlanswitchpanel, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui_wlanswitchpanel, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui_wlanswitchpanel, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui_wlanswitchpanel, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_wlansetlabel = lv_label_create(ui_wlanswitchpanel);
    lv_obj_set_width(ui_wlansetlabel, LV_SIZE_CONTENT);  /// 1
    lv_obj_set_height(ui_wlansetlabel, LV_SIZE_CONTENT); /// 1
    lv_obj_set_x(ui_wlansetlabel, 0);
    lv_obj_set_y(ui_wlansetlabel, 4);
    lv_label_set_text(ui_wlansetlabel, "WLAN");

    ui_wlanswitch = lv_switch_create(ui_wlanswitchpanel);
    lv_obj_set_width(ui_wlanswitch, 45);
    lv_obj_set_height(ui_wlanswitch, 24);
    lv_obj_set_align(ui_wlanswitch, LV_ALIGN_TOP_RIGHT);

    lv_obj_set_style_bg_color(ui_wlanswitch, lv_color_hex(0xAAAAAA), LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_wlanswitch, 255, LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_wlanswitch, lv_color_hex(0x00D200), LV_PART_INDICATOR | LV_STATE_CHECKED);
    lv_obj_set_style_bg_opa(ui_wlanswitch, 255, LV_PART_INDICATOR | LV_STATE_CHECKED);

    ui_wificonnect = lv_obj_create(ui_wlansetpannel);
    lv_obj_set_width(ui_wificonnect, 280);
    lv_obj_set_height(ui_wificonnect, 70);
    lv_obj_set_x(ui_wificonnect, 0);
    lv_obj_set_y(ui_wificonnect, 45);
    lv_obj_set_align(ui_wificonnect, LV_ALIGN_TOP_MID);
    lv_obj_add_flag(ui_wificonnect, LV_OBJ_FLAG_HIDDEN);       /// Flags
    lv_obj_clear_flag(ui_wificonnect, LV_OBJ_FLAG_SCROLLABLE); /// Flags
    lv_obj_set_style_radius(ui_wificonnect, 10, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_wificonnect, lv_color_hex(0x0078F5), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_wificonnect, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_wificonnect, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_wifisymbol = lv_label_create(ui_wificonnect);
    lv_obj_set_width(ui_wifisymbol, LV_SIZE_CONTENT);  /// 1
    lv_obj_set_height(ui_wifisymbol, LV_SIZE_CONTENT); /// 1
    lv_obj_set_align(ui_wifisymbol, LV_ALIGN_LEFT_MID);
    lv_label_set_text(ui_wifisymbol, "");
    lv_obj_set_style_text_color(ui_wifisymbol, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_wifisymbol, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_wifisymbol, &ui_font_symbols16, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_wifiname = lv_label_create(ui_wificonnect);
    lv_obj_set_width(ui_wifiname, LV_SIZE_CONTENT);  /// 1
    lv_obj_set_height(ui_wifiname, LV_SIZE_CONTENT); /// 1
    lv_obj_set_x(ui_wifiname, 35);
    lv_obj_set_y(ui_wifiname, 0);
    lv_label_set_text(ui_wifiname, "cmcc-4g");
    lv_obj_set_style_text_color(ui_wifiname, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_wifiname, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_wifistats = lv_label_create(ui_wificonnect);
    lv_obj_set_width(ui_wifistats, LV_SIZE_CONTENT);  /// 1
    lv_obj_set_height(ui_wifistats, LV_SIZE_CONTENT); /// 1
    lv_obj_set_x(ui_wifistats, 35);
    lv_obj_set_y(ui_wifistats, 0);
    lv_obj_set_align(ui_wifistats, LV_ALIGN_BOTTOM_LEFT);
    lv_label_set_text(ui_wifistats, "已连接");
    lv_obj_set_style_text_color(ui_wifistats, lv_color_hex(0xB4B4B4), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_wifistats, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_wificlock = lv_label_create(ui_wificonnect);
    lv_obj_set_width(ui_wificlock, LV_SIZE_CONTENT);  /// 1
    lv_obj_set_height(ui_wificlock, LV_SIZE_CONTENT); /// 1
    lv_obj_set_x(ui_wificlock, -20);
    lv_obj_set_y(ui_wificlock, 0);
    lv_obj_set_align(ui_wificlock, LV_ALIGN_RIGHT_MID);
    lv_label_set_text(ui_wificlock, "");
    lv_obj_set_style_text_color(ui_wificlock, lv_color_hex(0xDFDFDF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_wificlock, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_wificlock, &ui_font_symbols16, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_wificonright = lv_label_create(ui_wificonnect);
    lv_obj_set_width(ui_wificonright, LV_SIZE_CONTENT);  /// 1
    lv_obj_set_height(ui_wificonright, LV_SIZE_CONTENT); /// 1
    lv_obj_set_align(ui_wificonright, LV_ALIGN_RIGHT_MID);
    lv_label_set_text(ui_wificonright, "");
    lv_obj_set_style_text_color(ui_wificonright, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_wificonright, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_wificonright, &ui_font_symbols16, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_wifiscan = lv_obj_create(ui_wlansetpannel);
    lv_obj_set_width(ui_wifiscan, 280);
    lv_obj_set_height(ui_wifiscan, 30);
    lv_obj_set_x(ui_wifiscan, 0);
    lv_obj_set_y(ui_wifiscan, 125);
    lv_obj_set_align(ui_wifiscan, LV_ALIGN_LEFT_MID);
    lv_obj_set_flex_flow(ui_wifiscan, LV_FLEX_FLOW_ROW);
    lv_obj_set_flex_align(ui_wifiscan, LV_FLEX_ALIGN_START, LV_FLEX_ALIGN_START, LV_FLEX_ALIGN_START);
    lv_obj_add_flag(ui_wifiscan, LV_OBJ_FLAG_HIDDEN);       /// Flags
    lv_obj_clear_flag(ui_wifiscan, LV_OBJ_FLAG_SCROLLABLE); /// Flags
    lv_obj_set_style_radius(ui_wifiscan, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_wifiscan, lv_color_hex(0xE6E6E6), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_wifiscan, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_wifiscan, lv_color_hex(0xB4B4B4), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_wifiscan, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_wifiscan, 1, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui_wifiscan, LV_BORDER_SIDE_TOP, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui_wifiscan, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui_wifiscan, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui_wifiscan, 10, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui_wifiscan, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_wifiselecttitle = lv_label_create(ui_wifiscan);
    lv_obj_set_height(ui_wifiselecttitle, LV_SIZE_CONTENT); /// 1
    lv_obj_set_flex_grow(ui_wifiselecttitle, 1);
    lv_obj_set_align(ui_wifiselecttitle, LV_ALIGN_LEFT_MID);
    lv_label_set_text(ui_wifiselecttitle, "选取附近的WLAN");
    lv_obj_set_style_text_font(ui_wifiselecttitle, &ui_font_misans16, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_wifiselecttitle, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_wifirefresh = lv_label_create(ui_wifiscan);
    lv_obj_set_width(ui_wifirefresh, LV_SIZE_CONTENT);  /// 1
    lv_obj_set_height(ui_wifirefresh, LV_SIZE_CONTENT); /// 1
    lv_obj_set_align(ui_wifirefresh, LV_ALIGN_RIGHT_MID);
    lv_label_set_text(ui_wifirefresh, "");
    lv_obj_set_style_text_font(ui_wifirefresh, &ui_font_symbols16, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_wifilist = lv_obj_create(ui_wlansetpannel);
    lv_obj_set_width(ui_wifilist, 280);
    lv_obj_set_height(ui_wifilist, 40);
    lv_obj_set_align(ui_wifilist, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_wifilist, LV_OBJ_FLAG_HIDDEN);                                /// Flags
    lv_obj_clear_flag(ui_wifilist, LV_OBJ_FLAG_PRESS_LOCK | LV_OBJ_FLAG_SCROLLABLE); /// Flags
    lv_obj_set_style_radius(ui_wifilist, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_wifilist, lv_color_hex(0xE6E6E6), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_wifilist, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_wifilist, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui_wifilist, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui_wifilist, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui_wifilist, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui_wifilist, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_wifisymbol1 = lv_label_create(ui_wifilist);
    lv_obj_set_width(ui_wifisymbol1, LV_SIZE_CONTENT);  /// 1
    lv_obj_set_height(ui_wifisymbol1, LV_SIZE_CONTENT); /// 1
    lv_obj_set_align(ui_wifisymbol1, LV_ALIGN_LEFT_MID);
    lv_label_set_text(ui_wifisymbol1, "");
    lv_obj_set_style_text_font(ui_wifisymbol1, &ui_font_symbols16, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_wifilistname = lv_label_create(ui_wifilist);
    lv_obj_set_width(ui_wifilistname, 200);
    lv_obj_set_height(ui_wifilistname, LV_SIZE_CONTENT); /// 1
    lv_obj_set_x(ui_wifilistname, 30);
    lv_obj_set_y(ui_wifilistname, 0);
    lv_obj_set_align(ui_wifilistname, LV_ALIGN_LEFT_MID);
    lv_label_set_long_mode(ui_wifilistname, LV_LABEL_LONG_DOT);
    lv_label_set_text(ui_wifilistname, "MAXHUB-433");
    lv_obj_add_flag(ui_wifilistname, LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_CHECKABLE); /// Flags

    ui_wifilock = lv_label_create(ui_wifilist);
    lv_obj_set_width(ui_wifilock, LV_SIZE_CONTENT);  /// 1
    lv_obj_set_height(ui_wifilock, LV_SIZE_CONTENT); /// 1
    lv_obj_set_x(ui_wifilock, -20);
    lv_obj_set_y(ui_wifilock, 0);
    lv_obj_set_align(ui_wifilock, LV_ALIGN_RIGHT_MID);
    lv_label_set_text(ui_wifilock, "");
    lv_obj_set_style_text_font(ui_wifilock, &ui_font_symbols16, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_wifilistright = lv_label_create(ui_wifilist);
    lv_obj_set_width(ui_wifilistright, LV_SIZE_CONTENT);  /// 1
    lv_obj_set_height(ui_wifilistright, LV_SIZE_CONTENT); /// 1
    lv_obj_set_align(ui_wifilistright, LV_ALIGN_RIGHT_MID);
    lv_label_set_text(ui_wifilistright, "");
    lv_obj_set_style_text_font(ui_wifilistright, &ui_font_symbols16, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_enterwifipass = lv_obj_create(ui_wifiset);
    lv_obj_set_width(ui_enterwifipass, 320);
    lv_obj_set_height(ui_enterwifipass, 350);
    lv_obj_set_x(ui_enterwifipass, 0);
    lv_obj_set_y(ui_enterwifipass, 610);
    lv_obj_set_align(ui_enterwifipass, LV_ALIGN_TOP_MID);
    lv_obj_set_flex_flow(ui_enterwifipass, LV_FLEX_FLOW_COLUMN);
    lv_obj_set_flex_align(ui_enterwifipass, LV_FLEX_ALIGN_START, LV_FLEX_ALIGN_CENTER, LV_FLEX_ALIGN_CENTER);
    lv_obj_clear_flag(ui_enterwifipass, LV_OBJ_FLAG_GESTURE_BUBBLE | LV_OBJ_FLAG_SCROLLABLE); /// Flags
    lv_obj_set_style_radius(ui_enterwifipass, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_enterwifipass, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_enterwifipass, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_enterwifipass, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_passpannel = lv_obj_create(ui_enterwifipass);
    lv_obj_set_width(ui_passpannel, 280);
    lv_obj_set_height(ui_passpannel, 170);
    lv_obj_set_align(ui_passpannel, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_passpannel, LV_OBJ_FLAG_SCROLLABLE); /// Flags

    ui_wifinamelabel = lv_label_create(ui_passpannel);
    lv_obj_set_width(ui_wifinamelabel, LV_SIZE_CONTENT);  /// 1
    lv_obj_set_height(ui_wifinamelabel, LV_SIZE_CONTENT); /// 1
    lv_obj_set_align(ui_wifinamelabel, LV_ALIGN_TOP_MID);
    lv_label_set_text(ui_wifinamelabel, "MAXHUB-433");
    lv_obj_set_style_text_font(ui_wifinamelabel, &ui_font_misans16, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_wifipassinput = lv_textarea_create(ui_passpannel);
    lv_obj_set_width(ui_wifipassinput, 260);
    lv_obj_set_height(ui_wifipassinput, LV_SIZE_CONTENT); /// 40
    lv_obj_set_x(ui_wifipassinput, 0);
    lv_obj_set_y(ui_wifipassinput, -10);
    lv_obj_set_align(ui_wifipassinput, LV_ALIGN_CENTER);
    lv_textarea_set_max_length(ui_wifipassinput, 64);
    lv_textarea_set_placeholder_text(ui_wifipassinput, "密码");
    lv_textarea_set_one_line(ui_wifipassinput, true);
    lv_textarea_set_password_mode(ui_wifipassinput, true);
    lv_obj_clear_flag(ui_wifipassinput, LV_OBJ_FLAG_SCROLLABLE | LV_OBJ_FLAG_SCROLL_ELASTIC | LV_OBJ_FLAG_SCROLL_MOMENTUM |
                                            LV_OBJ_FLAG_SCROLL_CHAIN); /// Flags
    lv_obj_set_style_border_color(ui_wifipassinput, lv_color_hex(0x0079F6), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_wifipassinput, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_wifipassinput, 1, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_connectbtn = lv_btn_create(ui_passpannel);
    lv_obj_set_width(ui_connectbtn, 100);
    lv_obj_set_height(ui_connectbtn, 40);
    lv_obj_set_x(ui_connectbtn, 10);
    lv_obj_set_y(ui_connectbtn, 0);
    lv_obj_set_align(ui_connectbtn, LV_ALIGN_BOTTOM_LEFT);
    lv_obj_add_flag(ui_connectbtn, LV_OBJ_FLAG_SCROLL_ON_FOCUS); /// Flags
    lv_obj_clear_flag(ui_connectbtn, LV_OBJ_FLAG_SCROLLABLE);    /// Flags
    lv_obj_set_style_radius(ui_connectbtn, 50, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_connectbtn, lv_color_hex(0xE6E6E6), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_connectbtn, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_connectbtn, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui_connectbtn, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_spread(ui_connectbtn, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui_connectbtn, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_connectbtn, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui_connectbtn, 50, LV_PART_MAIN | LV_STATE_PRESSED);
    lv_obj_set_style_bg_color(ui_connectbtn, lv_color_hex(0x1D87F5), LV_PART_MAIN | LV_STATE_PRESSED);
    lv_obj_set_style_bg_opa(ui_connectbtn, 255, LV_PART_MAIN | LV_STATE_PRESSED);
    lv_obj_set_style_text_color(ui_connectbtn, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_PRESSED);
    lv_obj_set_style_text_opa(ui_connectbtn, 255, LV_PART_MAIN | LV_STATE_PRESSED);
    lv_obj_set_style_radius(ui_connectbtn, 0, LV_PART_MAIN | LV_STATE_CHECKED | LV_STATE_PRESSED);
    lv_obj_set_style_bg_color(ui_connectbtn, lv_color_hex(0x1D87F5), LV_PART_MAIN | LV_STATE_CHECKED | LV_STATE_PRESSED);
    lv_obj_set_style_bg_opa(ui_connectbtn, 255, LV_PART_MAIN | LV_STATE_CHECKED | LV_STATE_PRESSED);
    lv_obj_set_style_text_color(ui_connectbtn, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_CHECKED | LV_STATE_PRESSED);
    lv_obj_set_style_text_opa(ui_connectbtn, 255, LV_PART_MAIN | LV_STATE_CHECKED | LV_STATE_PRESSED);

    ui_connecttext = lv_label_create(ui_connectbtn);
    lv_obj_set_width(ui_connecttext, LV_SIZE_CONTENT);  /// 1
    lv_obj_set_height(ui_connecttext, LV_SIZE_CONTENT); /// 1
    lv_obj_set_align(ui_connecttext, LV_ALIGN_CENTER);
    lv_label_set_text(ui_connecttext, "连接");

    ui_canceltbtn = lv_btn_create(ui_passpannel);
    lv_obj_set_width(ui_canceltbtn, 100);
    lv_obj_set_height(ui_canceltbtn, 40);
    lv_obj_set_x(ui_canceltbtn, -10);
    lv_obj_set_y(ui_canceltbtn, 0);
    lv_obj_set_align(ui_canceltbtn, LV_ALIGN_BOTTOM_RIGHT);
    lv_obj_add_flag(ui_canceltbtn, LV_OBJ_FLAG_SCROLL_ON_FOCUS); /// Flags
    lv_obj_clear_flag(ui_canceltbtn, LV_OBJ_FLAG_SCROLLABLE);    /// Flags
    lv_obj_set_style_radius(ui_canceltbtn, 50, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_canceltbtn, lv_color_hex(0xE6E6E6), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_canceltbtn, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_canceltbtn, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui_canceltbtn, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_spread(ui_canceltbtn, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui_canceltbtn, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_canceltbtn, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui_canceltbtn, 50, LV_PART_MAIN | LV_STATE_PRESSED);
    lv_obj_set_style_bg_color(ui_canceltbtn, lv_color_hex(0x1D87F5), LV_PART_MAIN | LV_STATE_PRESSED);
    lv_obj_set_style_bg_opa(ui_canceltbtn, 255, LV_PART_MAIN | LV_STATE_PRESSED);
    lv_obj_set_style_text_color(ui_canceltbtn, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_PRESSED);
    lv_obj_set_style_text_opa(ui_canceltbtn, 255, LV_PART_MAIN | LV_STATE_PRESSED);
    lv_obj_set_style_radius(ui_canceltbtn, 0, LV_PART_MAIN | LV_STATE_CHECKED | LV_STATE_PRESSED);
    lv_obj_set_style_bg_color(ui_canceltbtn, lv_color_hex(0x1D87F5), LV_PART_MAIN | LV_STATE_CHECKED | LV_STATE_PRESSED);
    lv_obj_set_style_bg_opa(ui_canceltbtn, 255, LV_PART_MAIN | LV_STATE_CHECKED | LV_STATE_PRESSED);
    lv_obj_set_style_text_color(ui_canceltbtn, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_CHECKED | LV_STATE_PRESSED);
    lv_obj_set_style_text_opa(ui_canceltbtn, 255, LV_PART_MAIN | LV_STATE_CHECKED | LV_STATE_PRESSED);

    ui_canceltext = lv_label_create(ui_canceltbtn);
    lv_obj_set_width(ui_canceltext, LV_SIZE_CONTENT);  /// 1
    lv_obj_set_height(ui_canceltext, LV_SIZE_CONTENT); /// 1
    lv_obj_set_align(ui_canceltext, LV_ALIGN_CENTER);
    lv_label_set_text(ui_canceltext, "取消");

    ui_keypannel = lv_obj_create(ui_enterwifipass);
    lv_obj_set_width(ui_keypannel, 320);
    lv_obj_set_height(ui_keypannel, 160);
    lv_obj_set_align(ui_keypannel, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_keypannel, LV_OBJ_FLAG_SCROLLABLE); /// Flags

    ui_Keyboard = lv_keyboard_create(ui_keypannel);
    lv_obj_set_width(ui_Keyboard, 320);
    lv_obj_set_height(ui_Keyboard, 160);
    lv_obj_set_align(ui_Keyboard, LV_ALIGN_CENTER);

    lv_obj_set_style_text_font(ui_Keyboard, &lv_font_montserrat_16, LV_PART_ITEMS | LV_STATE_DEFAULT);

    lv_obj_add_event_cb(ui_headerbackico, ui_event_headerbackico, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_wlanswitch, ui_event_wlanswitch, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_wifirefresh, ui_event_wifirefresh, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_wifilistname, ui_event_wifilistname, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_wifipassinput, ui_event_wifipassinput, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_connectbtn, ui_event_connectbtn, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_canceltbtn, ui_event_canceltbtn, LV_EVENT_ALL, NULL);
    lv_keyboard_set_textarea(ui_Keyboard, ui_wifipassinput);
    lv_obj_add_event_cb(ui_wifiset, ui_event_wifiset, LV_EVENT_ALL, NULL);
}
void ui_aboutui_screen_init(void)
{
    ui_aboutui = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_aboutui, LV_OBJ_FLAG_SCROLLABLE); /// Flags
    lv_obj_set_style_radius(ui_aboutui, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_aboutui, lv_color_hex(0xE6E6E6), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_aboutui, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_aboutui, &ui_font_misans16, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_aboutheader = lv_obj_create(ui_aboutui);
    lv_obj_set_width(ui_aboutheader, 320);
    lv_obj_set_height(ui_aboutheader, 60);
    lv_obj_set_align(ui_aboutheader, LV_ALIGN_TOP_MID);
    lv_obj_clear_flag(ui_aboutheader, LV_OBJ_FLAG_GESTURE_BUBBLE | LV_OBJ_FLAG_SCROLLABLE); /// Flags
    lv_obj_set_style_radius(ui_aboutheader, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_aboutheader, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_aboutheader, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_aboutheader, lv_color_hex(0xB4B4B4), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_aboutheader, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_aboutheader, 1, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui_aboutheader, LV_BORDER_SIDE_BOTTOM, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui_aboutheader, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui_aboutheader, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui_aboutheader, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui_aboutheader, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui_aboutheader, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_aboutheader, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_aboutheader, &ui_font_misans16, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_aboutmobile = lv_label_create(ui_aboutheader);
    lv_obj_set_width(ui_aboutmobile, LV_SIZE_CONTENT);  /// 1
    lv_obj_set_height(ui_aboutmobile, LV_SIZE_CONTENT); /// 1
    lv_obj_set_x(ui_aboutmobile, 10);
    lv_obj_set_y(ui_aboutmobile, 7);
    lv_label_set_text(ui_aboutmobile, "中国移动");

    ui_aboutwifi = lv_label_create(ui_aboutheader);
    lv_obj_set_width(ui_aboutwifi, LV_SIZE_CONTENT);  /// 1
    lv_obj_set_height(ui_aboutwifi, LV_SIZE_CONTENT); /// 1
    lv_obj_set_x(ui_aboutwifi, 78);
    lv_obj_set_y(ui_aboutwifi, 7);
    lv_label_set_text(ui_aboutwifi, "");
    lv_obj_set_style_text_font(ui_aboutwifi, &ui_font_symbols16, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_aboutbattery = lv_label_create(ui_aboutheader);
    lv_obj_set_width(ui_aboutbattery, LV_SIZE_CONTENT);  /// 1
    lv_obj_set_height(ui_aboutbattery, LV_SIZE_CONTENT); /// 1
    lv_obj_set_x(ui_aboutbattery, -10);
    lv_obj_set_y(ui_aboutbattery, 7);
    lv_obj_set_align(ui_aboutbattery, LV_ALIGN_TOP_RIGHT);
    lv_label_set_text(ui_aboutbattery, "");
    lv_obj_set_style_text_font(ui_aboutbattery, &ui_font_symbols16, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_abouttime = lv_label_create(ui_aboutheader);
    lv_obj_set_width(ui_abouttime, LV_SIZE_CONTENT);  /// 1
    lv_obj_set_height(ui_abouttime, LV_SIZE_CONTENT); /// 1
    lv_obj_set_x(ui_abouttime, 0);
    lv_obj_set_y(ui_abouttime, 7);
    lv_obj_set_align(ui_abouttime, LV_ALIGN_TOP_MID);
    lv_label_set_text(ui_abouttime, "12:12");

    ui_aboutbatteryp = lv_label_create(ui_aboutheader);
    lv_obj_set_width(ui_aboutbatteryp, LV_SIZE_CONTENT);  /// 1
    lv_obj_set_height(ui_aboutbatteryp, LV_SIZE_CONTENT); /// 1
    lv_obj_set_x(ui_aboutbatteryp, -35);
    lv_obj_set_y(ui_aboutbatteryp, 7);
    lv_obj_set_align(ui_aboutbatteryp, LV_ALIGN_TOP_RIGHT);
    lv_label_set_text(ui_aboutbatteryp, "100%");

    ui_abouttitle = lv_label_create(ui_aboutheader);
    lv_obj_set_width(ui_abouttitle, LV_SIZE_CONTENT);  /// 1
    lv_obj_set_height(ui_abouttitle, LV_SIZE_CONTENT); /// 1
    lv_obj_set_x(ui_abouttitle, 0);
    lv_obj_set_y(ui_abouttitle, -2);
    lv_obj_set_align(ui_abouttitle, LV_ALIGN_BOTTOM_MID);
    lv_label_set_text(ui_abouttitle, "关于本机");

    ui_aboutbody = lv_obj_create(ui_aboutui);
    lv_obj_set_width(ui_aboutbody, 320);
    lv_obj_set_height(ui_aboutbody, 420);
    lv_obj_set_x(ui_aboutbody, 0);
    lv_obj_set_y(ui_aboutbody, 60);
    lv_obj_set_align(ui_aboutbody, LV_ALIGN_TOP_MID);
    lv_obj_set_flex_flow(ui_aboutbody, LV_FLEX_FLOW_COLUMN);
    lv_obj_set_flex_align(ui_aboutbody, LV_FLEX_ALIGN_START, LV_FLEX_ALIGN_START, LV_FLEX_ALIGN_START);
    lv_obj_clear_flag(ui_aboutbody, LV_OBJ_FLAG_SCROLLABLE); /// Flags
    lv_obj_set_style_radius(ui_aboutbody, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_aboutbody, lv_color_hex(0xE6E6E6), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_aboutbody, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_aboutbody, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui_aboutbody, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui_aboutbody, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui_aboutbody, 30, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui_aboutbody, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_row(ui_aboutbody, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_column(ui_aboutbody, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_aboutpanel1 = lv_obj_create(ui_aboutbody);
    lv_obj_set_width(ui_aboutpanel1, 320);
    lv_obj_set_height(ui_aboutpanel1, 40);
    lv_obj_set_align(ui_aboutpanel1, LV_ALIGN_TOP_MID);
    lv_obj_clear_flag(ui_aboutpanel1, LV_OBJ_FLAG_SCROLLABLE); /// Flags
    lv_obj_set_style_radius(ui_aboutpanel1, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_aboutpanel1, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_aboutpanel1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_aboutpanel1, lv_color_hex(0xB4B4B4), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_aboutpanel1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_aboutpanel1, 1, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui_aboutpanel1, LV_BORDER_SIDE_BOTTOM, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_aboutlabel3 = lv_label_create(ui_aboutpanel1);
    lv_obj_set_width(ui_aboutlabel3, LV_SIZE_CONTENT);  /// 1
    lv_obj_set_height(ui_aboutlabel3, LV_SIZE_CONTENT); /// 1
    lv_obj_set_align(ui_aboutlabel3, LV_ALIGN_LEFT_MID);
    lv_label_set_text(ui_aboutlabel3, "名称");

    ui_aboutlabel4 = lv_label_create(ui_aboutpanel1);
    lv_obj_set_width(ui_aboutlabel4, LV_SIZE_CONTENT);  /// 1
    lv_obj_set_height(ui_aboutlabel4, LV_SIZE_CONTENT); /// 1
    lv_obj_set_align(ui_aboutlabel4, LV_ALIGN_RIGHT_MID);
    lv_label_set_text(ui_aboutlabel4, "界面 1.0.0");
    lv_obj_set_style_text_color(ui_aboutlabel4, lv_color_hex(0x787878), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_aboutlabel4, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_aboutpanel2 = lv_obj_create(ui_aboutbody);
    lv_obj_set_width(ui_aboutpanel2, 320);
    lv_obj_set_height(ui_aboutpanel2, 40);
    lv_obj_set_align(ui_aboutpanel2, LV_ALIGN_TOP_MID);
    lv_obj_clear_flag(ui_aboutpanel2, LV_OBJ_FLAG_SCROLLABLE); /// Flags
    lv_obj_set_style_radius(ui_aboutpanel2, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_aboutpanel2, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_aboutpanel2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_aboutpanel2, lv_color_hex(0xB4B4B4), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_aboutpanel2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_aboutpanel2, 1, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui_aboutpanel2, LV_BORDER_SIDE_BOTTOM, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_aboutlabel5 = lv_label_create(ui_aboutpanel2);
    lv_obj_set_width(ui_aboutlabel5, LV_SIZE_CONTENT);  /// 1
    lv_obj_set_height(ui_aboutlabel5, LV_SIZE_CONTENT); /// 1
    lv_obj_set_align(ui_aboutlabel5, LV_ALIGN_LEFT_MID);
    lv_label_set_text(ui_aboutlabel5, "LVGL版本");

    ui_aboutlabel6 = lv_label_create(ui_aboutpanel2);
    lv_obj_set_width(ui_aboutlabel6, LV_SIZE_CONTENT);  /// 1
    lv_obj_set_height(ui_aboutlabel6, LV_SIZE_CONTENT); /// 1
    lv_obj_set_align(ui_aboutlabel6, LV_ALIGN_RIGHT_MID);
    lv_label_set_text(ui_aboutlabel6, "LVGL8.3.4");
    lv_obj_set_style_text_color(ui_aboutlabel6, lv_color_hex(0x787878), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_aboutlabel6, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_aboutpanel3 = lv_obj_create(ui_aboutbody);
    lv_obj_set_width(ui_aboutpanel3, 320);
    lv_obj_set_height(ui_aboutpanel3, 40);
    lv_obj_set_align(ui_aboutpanel3, LV_ALIGN_TOP_MID);
    lv_obj_clear_flag(ui_aboutpanel3, LV_OBJ_FLAG_SCROLLABLE); /// Flags
    lv_obj_set_style_radius(ui_aboutpanel3, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_aboutpanel3, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_aboutpanel3, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_aboutpanel3, lv_color_hex(0xB4B4B4), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_aboutpanel3, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_aboutpanel3, 1, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui_aboutpanel3, LV_BORDER_SIDE_BOTTOM, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_aboutlabel7 = lv_label_create(ui_aboutpanel3);
    lv_obj_set_width(ui_aboutlabel7, LV_SIZE_CONTENT);  /// 1
    lv_obj_set_height(ui_aboutlabel7, LV_SIZE_CONTENT); /// 1
    lv_obj_set_align(ui_aboutlabel7, LV_ALIGN_LEFT_MID);
    lv_label_set_text(ui_aboutlabel7, "CPU型号");

    ui_aboutlabel8 = lv_label_create(ui_aboutpanel3);
    lv_obj_set_width(ui_aboutlabel8, LV_SIZE_CONTENT);  /// 1
    lv_obj_set_height(ui_aboutlabel8, LV_SIZE_CONTENT); /// 1
    lv_obj_set_align(ui_aboutlabel8, LV_ALIGN_RIGHT_MID);
    lv_label_set_text(ui_aboutlabel8, "ESP32WROOM");
    lv_obj_set_style_text_color(ui_aboutlabel8, lv_color_hex(0x787878), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_aboutlabel8, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_aboutpanel4 = lv_obj_create(ui_aboutbody);
    lv_obj_set_width(ui_aboutpanel4, 320);
    lv_obj_set_height(ui_aboutpanel4, 40);
    lv_obj_set_align(ui_aboutpanel4, LV_ALIGN_TOP_MID);
    lv_obj_clear_flag(ui_aboutpanel4, LV_OBJ_FLAG_SCROLLABLE); /// Flags
    lv_obj_set_style_radius(ui_aboutpanel4, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_aboutpanel4, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_aboutpanel4, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_aboutpanel4, lv_color_hex(0xB4B4B4), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_aboutpanel4, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_aboutpanel4, 1, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui_aboutpanel4, LV_BORDER_SIDE_BOTTOM, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_aboutlabel9 = lv_label_create(ui_aboutpanel4);
    lv_obj_set_width(ui_aboutlabel9, LV_SIZE_CONTENT);  /// 1
    lv_obj_set_height(ui_aboutlabel9, LV_SIZE_CONTENT); /// 1
    lv_obj_set_align(ui_aboutlabel9, LV_ALIGN_LEFT_MID);
    lv_label_set_text(ui_aboutlabel9, "CPU核心数");

    ui_aboutlabel10 = lv_label_create(ui_aboutpanel4);
    lv_obj_set_width(ui_aboutlabel10, LV_SIZE_CONTENT);  /// 1
    lv_obj_set_height(ui_aboutlabel10, LV_SIZE_CONTENT); /// 1
    lv_obj_set_align(ui_aboutlabel10, LV_ALIGN_RIGHT_MID);
    lv_label_set_text(ui_aboutlabel10, "2个");
    lv_obj_set_style_text_color(ui_aboutlabel10, lv_color_hex(0x787878), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_aboutlabel10, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_aboutpanel5 = lv_obj_create(ui_aboutbody);
    lv_obj_set_width(ui_aboutpanel5, 320);
    lv_obj_set_height(ui_aboutpanel5, 40);
    lv_obj_set_align(ui_aboutpanel5, LV_ALIGN_TOP_MID);
    lv_obj_clear_flag(ui_aboutpanel5, LV_OBJ_FLAG_SCROLLABLE); /// Flags
    lv_obj_set_style_radius(ui_aboutpanel5, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_aboutpanel5, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_aboutpanel5, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_aboutpanel5, lv_color_hex(0xB4B4B4), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_aboutpanel5, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_aboutpanel5, 1, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui_aboutpanel5, LV_BORDER_SIDE_BOTTOM, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_aboutlabel11 = lv_label_create(ui_aboutpanel5);
    lv_obj_set_width(ui_aboutlabel11, LV_SIZE_CONTENT);  /// 1
    lv_obj_set_height(ui_aboutlabel11, LV_SIZE_CONTENT); /// 1
    lv_obj_set_align(ui_aboutlabel11, LV_ALIGN_LEFT_MID);
    lv_label_set_text(ui_aboutlabel11, "CPU修订号");

    ui_aboutlabel12 = lv_label_create(ui_aboutpanel5);
    lv_obj_set_width(ui_aboutlabel12, LV_SIZE_CONTENT);  /// 1
    lv_obj_set_height(ui_aboutlabel12, LV_SIZE_CONTENT); /// 1
    lv_obj_set_align(ui_aboutlabel12, LV_ALIGN_RIGHT_MID);
    lv_label_set_text(ui_aboutlabel12, "D0WD-V3");
    lv_obj_set_style_text_color(ui_aboutlabel12, lv_color_hex(0x787878), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_aboutlabel12, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_aboutpanel6 = lv_obj_create(ui_aboutbody);
    lv_obj_set_width(ui_aboutpanel6, 320);
    lv_obj_set_height(ui_aboutpanel6, 40);
    lv_obj_set_align(ui_aboutpanel6, LV_ALIGN_TOP_MID);
    lv_obj_clear_flag(ui_aboutpanel6, LV_OBJ_FLAG_SCROLLABLE); /// Flags
    lv_obj_set_style_radius(ui_aboutpanel6, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_aboutpanel6, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_aboutpanel6, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_aboutpanel6, lv_color_hex(0xB4B4B4), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_aboutpanel6, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_aboutpanel6, 1, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui_aboutpanel6, LV_BORDER_SIDE_BOTTOM, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_aboutlabel13 = lv_label_create(ui_aboutpanel6);
    lv_obj_set_width(ui_aboutlabel13, LV_SIZE_CONTENT);  /// 1
    lv_obj_set_height(ui_aboutlabel13, LV_SIZE_CONTENT); /// 1
    lv_obj_set_align(ui_aboutlabel13, LV_ALIGN_LEFT_MID);
    lv_label_set_text(ui_aboutlabel13, "内存容量");

    ui_aboutlabel14 = lv_label_create(ui_aboutpanel6);
    lv_obj_set_width(ui_aboutlabel14, LV_SIZE_CONTENT);  /// 1
    lv_obj_set_height(ui_aboutlabel14, LV_SIZE_CONTENT); /// 1
    lv_obj_set_align(ui_aboutlabel14, LV_ALIGN_RIGHT_MID);
    lv_label_set_text(ui_aboutlabel14, "4MB");
    lv_obj_set_style_text_color(ui_aboutlabel14, lv_color_hex(0x787878), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_aboutlabel14, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_aboutpanel7 = lv_obj_create(ui_aboutbody);
    lv_obj_set_width(ui_aboutpanel7, 320);
    lv_obj_set_height(ui_aboutpanel7, 40);
    lv_obj_set_align(ui_aboutpanel7, LV_ALIGN_TOP_MID);
    lv_obj_clear_flag(ui_aboutpanel7, LV_OBJ_FLAG_SCROLLABLE); /// Flags
    lv_obj_set_style_radius(ui_aboutpanel7, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_aboutpanel7, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_aboutpanel7, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_aboutpanel7, lv_color_hex(0xB4B4B4), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_aboutpanel7, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_aboutpanel7, 1, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui_aboutpanel7, LV_BORDER_SIDE_BOTTOM, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_aboutlabel15 = lv_label_create(ui_aboutpanel7);
    lv_obj_set_width(ui_aboutlabel15, LV_SIZE_CONTENT);  /// 1
    lv_obj_set_height(ui_aboutlabel15, LV_SIZE_CONTENT); /// 1
    lv_obj_set_align(ui_aboutlabel15, LV_ALIGN_LEFT_MID);
    lv_label_set_text(ui_aboutlabel15, "屏幕尺寸");

    ui_aboutlabel16 = lv_label_create(ui_aboutpanel7);
    lv_obj_set_width(ui_aboutlabel16, LV_SIZE_CONTENT);  /// 1
    lv_obj_set_height(ui_aboutlabel16, LV_SIZE_CONTENT); /// 1
    lv_obj_set_align(ui_aboutlabel16, LV_ALIGN_RIGHT_MID);
    lv_label_set_text(ui_aboutlabel16, "3.5");
    lv_obj_set_style_text_color(ui_aboutlabel16, lv_color_hex(0x787878), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_aboutlabel16, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_aboutpanel8 = lv_obj_create(ui_aboutbody);
    lv_obj_set_width(ui_aboutpanel8, 320);
    lv_obj_set_height(ui_aboutpanel8, 40);
    lv_obj_set_align(ui_aboutpanel8, LV_ALIGN_TOP_MID);
    lv_obj_clear_flag(ui_aboutpanel8, LV_OBJ_FLAG_SCROLLABLE); /// Flags
    lv_obj_set_style_radius(ui_aboutpanel8, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_aboutpanel8, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_aboutpanel8, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_aboutpanel8, lv_color_hex(0xB4B4B4), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_aboutpanel8, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_aboutpanel8, 1, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui_aboutpanel8, LV_BORDER_SIDE_BOTTOM, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_aboutlabel17 = lv_label_create(ui_aboutpanel8);
    lv_obj_set_width(ui_aboutlabel17, LV_SIZE_CONTENT);  /// 1
    lv_obj_set_height(ui_aboutlabel17, LV_SIZE_CONTENT); /// 1
    lv_obj_set_align(ui_aboutlabel17, LV_ALIGN_LEFT_MID);
    lv_label_set_text(ui_aboutlabel17, "MAC地址");

    ui_aboutlabel18 = lv_label_create(ui_aboutpanel8);
    lv_obj_set_width(ui_aboutlabel18, LV_SIZE_CONTENT);  /// 1
    lv_obj_set_height(ui_aboutlabel18, LV_SIZE_CONTENT); /// 1
    lv_obj_set_align(ui_aboutlabel18, LV_ALIGN_RIGHT_MID);
    lv_label_set_text(ui_aboutlabel18, "54:43:b2:44:02:f0");
    lv_obj_set_style_text_color(ui_aboutlabel18, lv_color_hex(0x787878), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_aboutlabel18, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_add_event_cb(ui_aboutui, ui_event_aboutui, LV_EVENT_ALL, NULL);
}
void ui_datetimeui_screen_init(void)
{
    ui_datetimeui = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_datetimeui, LV_OBJ_FLAG_SCROLLABLE); /// Flags
    lv_obj_set_style_radius(ui_datetimeui, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_datetimeui, lv_color_hex(0xE6E6E6), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_datetimeui, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_datetimeui, &ui_font_misans16, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_datetimeheader = lv_obj_create(ui_datetimeui);
    lv_obj_set_width(ui_datetimeheader, 320);
    lv_obj_set_height(ui_datetimeheader, 60);
    lv_obj_set_align(ui_datetimeheader, LV_ALIGN_TOP_MID);
    lv_obj_clear_flag(ui_datetimeheader, LV_OBJ_FLAG_GESTURE_BUBBLE | LV_OBJ_FLAG_SCROLLABLE); /// Flags
    lv_obj_set_style_radius(ui_datetimeheader, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_datetimeheader, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_datetimeheader, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_datetimeheader, lv_color_hex(0xB4B4B4), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_datetimeheader, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_datetimeheader, 1, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui_datetimeheader, LV_BORDER_SIDE_BOTTOM, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui_datetimeheader, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui_datetimeheader, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui_datetimeheader, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui_datetimeheader, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui_datetimeheader, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_datetimeheader, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_datetimeheader, &ui_font_misans16, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_datetimemobile = lv_label_create(ui_datetimeheader);
    lv_obj_set_width(ui_datetimemobile, LV_SIZE_CONTENT);  /// 1
    lv_obj_set_height(ui_datetimemobile, LV_SIZE_CONTENT); /// 1
    lv_obj_set_x(ui_datetimemobile, 10);
    lv_obj_set_y(ui_datetimemobile, 7);
    lv_label_set_text(ui_datetimemobile, "中国移动");

    ui_datetimewifi = lv_label_create(ui_datetimeheader);
    lv_obj_set_width(ui_datetimewifi, LV_SIZE_CONTENT);  /// 1
    lv_obj_set_height(ui_datetimewifi, LV_SIZE_CONTENT); /// 1
    lv_obj_set_x(ui_datetimewifi, 78);
    lv_obj_set_y(ui_datetimewifi, 7);
    lv_label_set_text(ui_datetimewifi, "");
    lv_obj_set_style_text_font(ui_datetimewifi, &ui_font_symbols16, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_datetimebattery = lv_label_create(ui_datetimeheader);
    lv_obj_set_width(ui_datetimebattery, LV_SIZE_CONTENT);  /// 1
    lv_obj_set_height(ui_datetimebattery, LV_SIZE_CONTENT); /// 1
    lv_obj_set_x(ui_datetimebattery, -10);
    lv_obj_set_y(ui_datetimebattery, 7);
    lv_obj_set_align(ui_datetimebattery, LV_ALIGN_TOP_RIGHT);
    lv_label_set_text(ui_datetimebattery, "");
    lv_obj_set_style_text_font(ui_datetimebattery, &ui_font_symbols16, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_datetimetime = lv_label_create(ui_datetimeheader);
    lv_obj_set_width(ui_datetimetime, LV_SIZE_CONTENT);  /// 1
    lv_obj_set_height(ui_datetimetime, LV_SIZE_CONTENT); /// 1
    lv_obj_set_x(ui_datetimetime, 0);
    lv_obj_set_y(ui_datetimetime, 7);
    lv_obj_set_align(ui_datetimetime, LV_ALIGN_TOP_MID);
    lv_label_set_text(ui_datetimetime, "12:12");

    ui_datetimebatteryp = lv_label_create(ui_datetimeheader);
    lv_obj_set_width(ui_datetimebatteryp, LV_SIZE_CONTENT);  /// 1
    lv_obj_set_height(ui_datetimebatteryp, LV_SIZE_CONTENT); /// 1
    lv_obj_set_x(ui_datetimebatteryp, -35);
    lv_obj_set_y(ui_datetimebatteryp, 7);
    lv_obj_set_align(ui_datetimebatteryp, LV_ALIGN_TOP_RIGHT);
    lv_label_set_text(ui_datetimebatteryp, "100%");

    ui_datetimetitle = lv_label_create(ui_datetimeheader);
    lv_obj_set_width(ui_datetimetitle, LV_SIZE_CONTENT);  /// 1
    lv_obj_set_height(ui_datetimetitle, LV_SIZE_CONTENT); /// 1
    lv_obj_set_x(ui_datetimetitle, 0);
    lv_obj_set_y(ui_datetimetitle, -2);
    lv_obj_set_align(ui_datetimetitle, LV_ALIGN_BOTTOM_MID);
    lv_label_set_text(ui_datetimetitle, "日期和时间");

    ui_datetimebody = lv_obj_create(ui_datetimeui);
    lv_obj_set_width(ui_datetimebody, 320);
    lv_obj_set_height(ui_datetimebody, 420);
    lv_obj_set_x(ui_datetimebody, 0);
    lv_obj_set_y(ui_datetimebody, 60);
    lv_obj_set_align(ui_datetimebody, LV_ALIGN_TOP_MID);
    lv_obj_set_flex_flow(ui_datetimebody, LV_FLEX_FLOW_COLUMN);
    lv_obj_set_flex_align(ui_datetimebody, LV_FLEX_ALIGN_START, LV_FLEX_ALIGN_START, LV_FLEX_ALIGN_START);
    lv_obj_set_scrollbar_mode(ui_datetimebody, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_radius(ui_datetimebody, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_datetimebody, lv_color_hex(0xE6E6E6), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_datetimebody, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_datetimebody, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui_datetimebody, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui_datetimebody, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui_datetimebody, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui_datetimebody, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_row(ui_datetimebody, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_column(ui_datetimebody, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_datetimepanel = lv_obj_create(ui_datetimebody);
    lv_obj_set_width(ui_datetimepanel, 320);
    lv_obj_set_height(ui_datetimepanel, 40);
    lv_obj_set_align(ui_datetimepanel, LV_ALIGN_TOP_MID);
    lv_obj_clear_flag(ui_datetimepanel, LV_OBJ_FLAG_SCROLLABLE); /// Flags
    lv_obj_set_style_radius(ui_datetimepanel, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_datetimepanel, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_datetimepanel, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_datetimepanel, lv_color_hex(0xB4B4B4), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_datetimepanel, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_datetimepanel, 1, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui_datetimepanel, LV_BORDER_SIDE_BOTTOM, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_autodatetimelabel1 = lv_label_create(ui_datetimepanel);
    lv_obj_set_width(ui_autodatetimelabel1, LV_SIZE_CONTENT);  /// 1
    lv_obj_set_height(ui_autodatetimelabel1, LV_SIZE_CONTENT); /// 1
    lv_obj_set_align(ui_autodatetimelabel1, LV_ALIGN_LEFT_MID);
    lv_label_set_text(ui_autodatetimelabel1, "24小时制");

    ui_autodatetimeswitch1 = lv_switch_create(ui_datetimepanel);
    lv_obj_set_width(ui_autodatetimeswitch1, 45);
    lv_obj_set_height(ui_autodatetimeswitch1, 24);
    lv_obj_set_align(ui_autodatetimeswitch1, LV_ALIGN_RIGHT_MID);
    lv_obj_add_state(ui_autodatetimeswitch1, LV_STATE_CHECKED); /// States

    lv_obj_set_style_bg_color(ui_autodatetimeswitch1, lv_color_hex(0xAAAAAA), LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_autodatetimeswitch1, 255, LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_autodatetimeswitch1, lv_color_hex(0x00D200), LV_PART_INDICATOR | LV_STATE_CHECKED);
    lv_obj_set_style_bg_opa(ui_autodatetimeswitch1, 255, LV_PART_INDICATOR | LV_STATE_CHECKED);

    ui_datetimepanel1 = lv_obj_create(ui_datetimebody);
    lv_obj_set_width(ui_datetimepanel1, 320);
    lv_obj_set_height(ui_datetimepanel1, 40);
    lv_obj_set_align(ui_datetimepanel1, LV_ALIGN_TOP_MID);
    lv_obj_clear_flag(ui_datetimepanel1, LV_OBJ_FLAG_PRESS_LOCK | LV_OBJ_FLAG_SCROLLABLE); /// Flags
    lv_obj_set_style_radius(ui_datetimepanel1, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_datetimepanel1, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_datetimepanel1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_datetimepanel1, lv_color_hex(0xB4B4B4), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_datetimepanel1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_datetimepanel1, 1, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui_datetimepanel1, LV_BORDER_SIDE_BOTTOM, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_autodatetimelabel = lv_label_create(ui_datetimepanel1);
    lv_obj_set_width(ui_autodatetimelabel, LV_SIZE_CONTENT);  /// 1
    lv_obj_set_height(ui_autodatetimelabel, LV_SIZE_CONTENT); /// 1
    lv_obj_set_align(ui_autodatetimelabel, LV_ALIGN_LEFT_MID);
    lv_label_set_text(ui_autodatetimelabel, "自动设置时间");

    ui_autodatetimeswitch = lv_switch_create(ui_datetimepanel1);
    lv_obj_set_width(ui_autodatetimeswitch, 45);
    lv_obj_set_height(ui_autodatetimeswitch, 24);
    lv_obj_set_align(ui_autodatetimeswitch, LV_ALIGN_RIGHT_MID);
    lv_obj_add_state(ui_autodatetimeswitch, LV_STATE_CHECKED); /// States

    lv_obj_set_style_bg_color(ui_autodatetimeswitch, lv_color_hex(0xAAAAAA), LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_autodatetimeswitch, 255, LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_autodatetimeswitch, lv_color_hex(0x00D200), LV_PART_INDICATOR | LV_STATE_CHECKED);
    lv_obj_set_style_bg_opa(ui_autodatetimeswitch, 255, LV_PART_INDICATOR | LV_STATE_CHECKED);

    ui_setdate = lv_obj_create(ui_datetimebody);
    lv_obj_set_width(ui_setdate, 320);
    lv_obj_set_height(ui_setdate, 40);
    lv_obj_set_align(ui_setdate, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_setdate, LV_OBJ_FLAG_HIDDEN);       /// Flags
    lv_obj_clear_flag(ui_setdate, LV_OBJ_FLAG_SCROLLABLE); /// Flags
    lv_obj_set_style_radius(ui_setdate, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_setdate, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_setdate, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_setdate, 1, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui_setdate, LV_BORDER_SIDE_BOTTOM, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_date = lv_label_create(ui_setdate);
    lv_obj_set_width(ui_date, LV_SIZE_CONTENT);  /// 1
    lv_obj_set_height(ui_date, LV_SIZE_CONTENT); /// 1
    lv_obj_set_align(ui_date, LV_ALIGN_LEFT_MID);
    lv_label_set_text(ui_date, "日期  2023年3月27日");

    ui_dateright = lv_label_create(ui_setdate);
    lv_obj_set_width(ui_dateright, LV_SIZE_CONTENT);  /// 1
    lv_obj_set_height(ui_dateright, LV_SIZE_CONTENT); /// 1
    lv_obj_set_align(ui_dateright, LV_ALIGN_RIGHT_MID);
    lv_label_set_text(ui_dateright, "");
    lv_obj_set_style_text_color(ui_dateright, lv_color_hex(0x787878), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_dateright, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_dateright, &ui_font_symbols16, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_settime = lv_obj_create(ui_datetimebody);
    lv_obj_set_width(ui_settime, 320);
    lv_obj_set_height(ui_settime, 40);
    lv_obj_set_align(ui_settime, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_settime, LV_OBJ_FLAG_HIDDEN);       /// Flags
    lv_obj_clear_flag(ui_settime, LV_OBJ_FLAG_SCROLLABLE); /// Flags
    lv_obj_set_style_radius(ui_settime, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_settime, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_settime, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_settime, 1, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui_settime, LV_BORDER_SIDE_BOTTOM, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_time1 = lv_label_create(ui_settime);
    lv_obj_set_width(ui_time1, LV_SIZE_CONTENT);  /// 1
    lv_obj_set_height(ui_time1, LV_SIZE_CONTENT); /// 1
    lv_obj_set_align(ui_time1, LV_ALIGN_LEFT_MID);
    lv_label_set_text(ui_time1, "时间  22:00");

    ui_timeright = lv_label_create(ui_settime);
    lv_obj_set_width(ui_timeright, LV_SIZE_CONTENT);  /// 1
    lv_obj_set_height(ui_timeright, LV_SIZE_CONTENT); /// 1
    lv_obj_set_align(ui_timeright, LV_ALIGN_RIGHT_MID);
    lv_label_set_text(ui_timeright, "");
    lv_obj_set_style_text_color(ui_timeright, lv_color_hex(0x787878), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_timeright, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_timeright, &ui_font_symbols16, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_datetimecountry = lv_obj_create(ui_datetimebody);
    lv_obj_set_width(ui_datetimecountry, 320);
    lv_obj_set_height(ui_datetimecountry, 40);
    lv_obj_set_align(ui_datetimecountry, LV_ALIGN_TOP_MID);
    lv_obj_clear_flag(ui_datetimecountry, LV_OBJ_FLAG_SCROLLABLE); /// Flags
    lv_obj_set_style_radius(ui_datetimecountry, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_datetimecountry, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_datetimecountry, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_datetimecountry, lv_color_hex(0xB4B4B4), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_datetimecountry, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_datetimecountry, 1, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui_datetimecountry, LV_BORDER_SIDE_BOTTOM, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_datetimecountrylabel = lv_label_create(ui_datetimecountry);
    lv_obj_set_width(ui_datetimecountrylabel, LV_SIZE_CONTENT);  /// 1
    lv_obj_set_height(ui_datetimecountrylabel, LV_SIZE_CONTENT); /// 1
    lv_obj_set_align(ui_datetimecountrylabel, LV_ALIGN_LEFT_MID);
    lv_label_set_text(ui_datetimecountrylabel, "时区");

    ui_datetimelabel1 = lv_label_create(ui_datetimecountry);
    lv_obj_set_width(ui_datetimelabel1, LV_SIZE_CONTENT);  /// 1
    lv_obj_set_height(ui_datetimelabel1, LV_SIZE_CONTENT); /// 1
    lv_obj_set_align(ui_datetimelabel1, LV_ALIGN_RIGHT_MID);
    lv_label_set_text(ui_datetimelabel1, "北京");
    lv_obj_set_style_text_color(ui_datetimelabel1, lv_color_hex(0x787878), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_datetimelabel1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_calendar = lv_calendar_create(ui_datetimebody);
    lv_calendar_set_today_date(ui_calendar, 2023, 3, 27);
    lv_calendar_set_showed_date(ui_calendar, 2023, 3);
    lv_obj_t *ui_calendar_header = lv_calendar_header_arrow_create(ui_calendar);
    lv_obj_set_width(ui_calendar, 320);
    lv_obj_set_height(ui_calendar, 240);
    lv_obj_set_align(ui_calendar, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_calendar, LV_OBJ_FLAG_HIDDEN); /// Flags
    lv_obj_set_style_radius(ui_calendar, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_add_event_cb(ui_autodatetimeswitch, ui_event_autodatetimeswitch, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_setdate, ui_event_setdate, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_calendar, ui_event_calendar, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_datetimeui, ui_event_datetimeui, LV_EVENT_ALL, NULL);
}
void ui_bluetoothset_screen_init(void)
{
    ui_bluetoothset = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_bluetoothset, LV_OBJ_FLAG_SCROLLABLE); /// Flags
    lv_obj_set_style_radius(ui_bluetoothset, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_bluetoothset, lv_color_hex(0xE6E6E6), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_bluetoothset, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_bluetoothset, &ui_font_misans16, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_bluetoothheader = lv_obj_create(ui_bluetoothset);
    lv_obj_set_width(ui_bluetoothheader, 320);
    lv_obj_set_height(ui_bluetoothheader, 60);
    lv_obj_set_align(ui_bluetoothheader, LV_ALIGN_TOP_MID);
    lv_obj_clear_flag(ui_bluetoothheader, LV_OBJ_FLAG_GESTURE_BUBBLE | LV_OBJ_FLAG_SCROLLABLE); /// Flags
    lv_obj_set_style_radius(ui_bluetoothheader, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_bluetoothheader, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_bluetoothheader, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_bluetoothheader, lv_color_hex(0xB4B4B4), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_bluetoothheader, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_bluetoothheader, 1, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui_bluetoothheader, LV_BORDER_SIDE_BOTTOM, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui_bluetoothheader, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui_bluetoothheader, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui_bluetoothheader, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui_bluetoothheader, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui_bluetoothheader, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_bluetoothheader, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_bluetoothheader, &ui_font_misans16, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_bluetoothmobile = lv_label_create(ui_bluetoothheader);
    lv_obj_set_width(ui_bluetoothmobile, LV_SIZE_CONTENT);  /// 1
    lv_obj_set_height(ui_bluetoothmobile, LV_SIZE_CONTENT); /// 1
    lv_obj_set_x(ui_bluetoothmobile, 10);
    lv_obj_set_y(ui_bluetoothmobile, 7);
    lv_label_set_text(ui_bluetoothmobile, "中国移动");

    ui_bluetoothwifi = lv_label_create(ui_bluetoothheader);
    lv_obj_set_width(ui_bluetoothwifi, LV_SIZE_CONTENT);  /// 1
    lv_obj_set_height(ui_bluetoothwifi, LV_SIZE_CONTENT); /// 1
    lv_obj_set_x(ui_bluetoothwifi, 78);
    lv_obj_set_y(ui_bluetoothwifi, 7);
    lv_label_set_text(ui_bluetoothwifi, "");
    lv_obj_set_style_text_font(ui_bluetoothwifi, &ui_font_symbols16, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_bluetoothbattery = lv_label_create(ui_bluetoothheader);
    lv_obj_set_width(ui_bluetoothbattery, LV_SIZE_CONTENT);  /// 1
    lv_obj_set_height(ui_bluetoothbattery, LV_SIZE_CONTENT); /// 1
    lv_obj_set_x(ui_bluetoothbattery, -10);
    lv_obj_set_y(ui_bluetoothbattery, 7);
    lv_obj_set_align(ui_bluetoothbattery, LV_ALIGN_TOP_RIGHT);
    lv_label_set_text(ui_bluetoothbattery, "");
    lv_obj_set_style_text_font(ui_bluetoothbattery, &ui_font_symbols16, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_bluetoothtime = lv_label_create(ui_bluetoothheader);
    lv_obj_set_width(ui_bluetoothtime, LV_SIZE_CONTENT);  /// 1
    lv_obj_set_height(ui_bluetoothtime, LV_SIZE_CONTENT); /// 1
    lv_obj_set_x(ui_bluetoothtime, 0);
    lv_obj_set_y(ui_bluetoothtime, 7);
    lv_obj_set_align(ui_bluetoothtime, LV_ALIGN_TOP_MID);
    lv_label_set_text(ui_bluetoothtime, "12:12");

    ui_bluetoothbatteryp = lv_label_create(ui_bluetoothheader);
    lv_obj_set_width(ui_bluetoothbatteryp, LV_SIZE_CONTENT);  /// 1
    lv_obj_set_height(ui_bluetoothbatteryp, LV_SIZE_CONTENT); /// 1
    lv_obj_set_x(ui_bluetoothbatteryp, -35);
    lv_obj_set_y(ui_bluetoothbatteryp, 7);
    lv_obj_set_align(ui_bluetoothbatteryp, LV_ALIGN_TOP_RIGHT);
    lv_label_set_text(ui_bluetoothbatteryp, "100%");

    ui_bluetoothtitle = lv_label_create(ui_bluetoothheader);
    lv_obj_set_width(ui_bluetoothtitle, LV_SIZE_CONTENT);  /// 1
    lv_obj_set_height(ui_bluetoothtitle, LV_SIZE_CONTENT); /// 1
    lv_obj_set_x(ui_bluetoothtitle, 30);
    lv_obj_set_y(ui_bluetoothtitle, -2);
    lv_obj_set_align(ui_bluetoothtitle, LV_ALIGN_BOTTOM_LEFT);
    lv_label_set_text(ui_bluetoothtitle, "蓝牙设置");

    ui_bluetoothbackico = lv_label_create(ui_bluetoothheader);
    lv_obj_set_width(ui_bluetoothbackico, LV_SIZE_CONTENT);  /// 1
    lv_obj_set_height(ui_bluetoothbackico, LV_SIZE_CONTENT); /// 1
    lv_obj_set_x(ui_bluetoothbackico, 10);
    lv_obj_set_y(ui_bluetoothbackico, -3);
    lv_obj_set_align(ui_bluetoothbackico, LV_ALIGN_BOTTOM_LEFT);
    lv_label_set_text(ui_bluetoothbackico, "");
    lv_obj_add_flag(ui_bluetoothbackico, LV_OBJ_FLAG_CLICKABLE); /// Flags
    lv_obj_set_style_text_font(ui_bluetoothbackico, &ui_font_symbols16, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_bluetoothpannel = lv_obj_create(ui_bluetoothset);
    lv_obj_set_width(ui_bluetoothpannel, 320);
    lv_obj_set_height(ui_bluetoothpannel, 420);
    lv_obj_set_x(ui_bluetoothpannel, 0);
    lv_obj_set_y(ui_bluetoothpannel, 60);
    lv_obj_set_align(ui_bluetoothpannel, LV_ALIGN_TOP_MID);
    lv_obj_set_flex_flow(ui_bluetoothpannel, LV_FLEX_FLOW_COLUMN);
    lv_obj_set_flex_align(ui_bluetoothpannel, LV_FLEX_ALIGN_START, LV_FLEX_ALIGN_START, LV_FLEX_ALIGN_CENTER);
    lv_obj_clear_flag(ui_bluetoothpannel, LV_OBJ_FLAG_SCROLLABLE); /// Flags
    lv_obj_set_style_radius(ui_bluetoothpannel, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_bluetoothpannel, lv_color_hex(0xE6E6E6), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_bluetoothpannel, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_bluetoothpannel, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_bluetoothwitchpanel = lv_obj_create(ui_bluetoothpannel);
    lv_obj_set_width(ui_bluetoothwitchpanel, 280);
    lv_obj_set_height(ui_bluetoothwitchpanel, 40);
    lv_obj_set_align(ui_bluetoothwitchpanel, LV_ALIGN_TOP_MID);
    lv_obj_clear_flag(ui_bluetoothwitchpanel, LV_OBJ_FLAG_SCROLLABLE); /// Flags
    lv_obj_set_style_radius(ui_bluetoothwitchpanel, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_bluetoothwitchpanel, lv_color_hex(0xE6E6E6), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_bluetoothwitchpanel, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_bluetoothwitchpanel, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui_bluetoothwitchpanel, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui_bluetoothwitchpanel, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui_bluetoothwitchpanel, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui_bluetoothwitchpanel, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_bluetoothsetlabel = lv_label_create(ui_bluetoothwitchpanel);
    lv_obj_set_width(ui_bluetoothsetlabel, LV_SIZE_CONTENT);  /// 1
    lv_obj_set_height(ui_bluetoothsetlabel, LV_SIZE_CONTENT); /// 1
    lv_obj_set_x(ui_bluetoothsetlabel, 0);
    lv_obj_set_y(ui_bluetoothsetlabel, 4);
    lv_label_set_text(ui_bluetoothsetlabel, "蓝牙");

    ui_bluetoothswitch = lv_switch_create(ui_bluetoothwitchpanel);
    lv_obj_set_width(ui_bluetoothswitch, 45);
    lv_obj_set_height(ui_bluetoothswitch, 24);
    lv_obj_set_align(ui_bluetoothswitch, LV_ALIGN_TOP_RIGHT);

    lv_obj_set_style_bg_color(ui_bluetoothswitch, lv_color_hex(0xAAAAAA), LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_bluetoothswitch, 255, LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_bluetoothswitch, lv_color_hex(0x00D200), LV_PART_INDICATOR | LV_STATE_CHECKED);
    lv_obj_set_style_bg_opa(ui_bluetoothswitch, 255, LV_PART_INDICATOR | LV_STATE_CHECKED);

    ui_bluetoothconnect = lv_obj_create(ui_bluetoothpannel);
    lv_obj_set_width(ui_bluetoothconnect, 280);
    lv_obj_set_height(ui_bluetoothconnect, 70);
    lv_obj_set_x(ui_bluetoothconnect, 0);
    lv_obj_set_y(ui_bluetoothconnect, 45);
    lv_obj_set_align(ui_bluetoothconnect, LV_ALIGN_TOP_MID);
    lv_obj_add_flag(ui_bluetoothconnect, LV_OBJ_FLAG_HIDDEN);       /// Flags
    lv_obj_clear_flag(ui_bluetoothconnect, LV_OBJ_FLAG_SCROLLABLE); /// Flags
    lv_obj_set_style_radius(ui_bluetoothconnect, 10, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_bluetoothconnect, lv_color_hex(0x0078F5), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_bluetoothconnect, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_bluetoothconnect, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_bluetoothsymbol = lv_label_create(ui_bluetoothconnect);
    lv_obj_set_width(ui_bluetoothsymbol, LV_SIZE_CONTENT);  /// 104
    lv_obj_set_height(ui_bluetoothsymbol, LV_SIZE_CONTENT); /// 1
    lv_obj_set_align(ui_bluetoothsymbol, LV_ALIGN_LEFT_MID);
    lv_label_set_text(ui_bluetoothsymbol, "");
    lv_obj_set_style_text_color(ui_bluetoothsymbol, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_bluetoothsymbol, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_bluetoothsymbol, &ui_font_symbols16, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_bluetoothname = lv_label_create(ui_bluetoothconnect);
    lv_obj_set_width(ui_bluetoothname, LV_SIZE_CONTENT);  /// 1
    lv_obj_set_height(ui_bluetoothname, LV_SIZE_CONTENT); /// 1
    lv_obj_set_x(ui_bluetoothname, 35);
    lv_obj_set_y(ui_bluetoothname, 0);
    lv_label_set_text(ui_bluetoothname, "GV9850");
    lv_obj_set_style_text_color(ui_bluetoothname, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_bluetoothname, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_bluetoothstats = lv_label_create(ui_bluetoothconnect);
    lv_obj_set_width(ui_bluetoothstats, LV_SIZE_CONTENT);  /// 1
    lv_obj_set_height(ui_bluetoothstats, LV_SIZE_CONTENT); /// 1
    lv_obj_set_x(ui_bluetoothstats, 35);
    lv_obj_set_y(ui_bluetoothstats, 0);
    lv_obj_set_align(ui_bluetoothstats, LV_ALIGN_BOTTOM_LEFT);
    lv_label_set_text(ui_bluetoothstats, "已连接 | 使用中");
    lv_obj_set_style_text_color(ui_bluetoothstats, lv_color_hex(0xB4B4B4), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_bluetoothstats, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_bluetoothconright = lv_label_create(ui_bluetoothconnect);
    lv_obj_set_width(ui_bluetoothconright, LV_SIZE_CONTENT);  /// 1
    lv_obj_set_height(ui_bluetoothconright, LV_SIZE_CONTENT); /// 1
    lv_obj_set_align(ui_bluetoothconright, LV_ALIGN_RIGHT_MID);
    lv_label_set_text(ui_bluetoothconright, "");
    lv_obj_set_style_text_color(ui_bluetoothconright, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_bluetoothconright, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_bluetoothconright, &ui_font_symbols16, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_bluetoothscan = lv_obj_create(ui_bluetoothpannel);
    lv_obj_set_width(ui_bluetoothscan, 280);
    lv_obj_set_height(ui_bluetoothscan, 30);
    lv_obj_set_x(ui_bluetoothscan, 0);
    lv_obj_set_y(ui_bluetoothscan, 125);
    lv_obj_set_align(ui_bluetoothscan, LV_ALIGN_LEFT_MID);
    lv_obj_set_flex_flow(ui_bluetoothscan, LV_FLEX_FLOW_ROW);
    lv_obj_set_flex_align(ui_bluetoothscan, LV_FLEX_ALIGN_START, LV_FLEX_ALIGN_START, LV_FLEX_ALIGN_START);
    lv_obj_add_flag(ui_bluetoothscan, LV_OBJ_FLAG_HIDDEN);       /// Flags
    lv_obj_clear_flag(ui_bluetoothscan, LV_OBJ_FLAG_SCROLLABLE); /// Flags
    lv_obj_set_style_radius(ui_bluetoothscan, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_bluetoothscan, lv_color_hex(0xE6E6E6), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_bluetoothscan, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_bluetoothscan, lv_color_hex(0xB4B4B4), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_bluetoothscan, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_bluetoothscan, 1, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui_bluetoothscan, LV_BORDER_SIDE_TOP, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui_bluetoothscan, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui_bluetoothscan, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui_bluetoothscan, 10, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui_bluetoothscan, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_bluetoothselecttitle = lv_label_create(ui_bluetoothscan);
    lv_obj_set_height(ui_bluetoothselecttitle, LV_SIZE_CONTENT); /// 1
    lv_obj_set_flex_grow(ui_bluetoothselecttitle, 1);
    lv_obj_set_align(ui_bluetoothselecttitle, LV_ALIGN_LEFT_MID);
    lv_label_set_text(ui_bluetoothselecttitle, "可用设备");
    lv_obj_set_style_text_font(ui_bluetoothselecttitle, &ui_font_misans16, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_bluetoothselecttitle, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_bluetoohtrefresh = lv_label_create(ui_bluetoothscan);
    lv_obj_set_width(ui_bluetoohtrefresh, LV_SIZE_CONTENT);  /// 1
    lv_obj_set_height(ui_bluetoohtrefresh, LV_SIZE_CONTENT); /// 1
    lv_obj_set_align(ui_bluetoohtrefresh, LV_ALIGN_RIGHT_MID);
    lv_label_set_text(ui_bluetoohtrefresh, "");
    lv_obj_set_style_text_font(ui_bluetoohtrefresh, &ui_font_symbols16, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_bluetoothlist = lv_obj_create(ui_bluetoothpannel);
    lv_obj_set_width(ui_bluetoothlist, 280);
    lv_obj_set_height(ui_bluetoothlist, 40);
    lv_obj_set_align(ui_bluetoothlist, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_bluetoothlist, LV_OBJ_FLAG_HIDDEN);                                /// Flags
    lv_obj_clear_flag(ui_bluetoothlist, LV_OBJ_FLAG_PRESS_LOCK | LV_OBJ_FLAG_SCROLLABLE); /// Flags
    lv_obj_set_style_radius(ui_bluetoothlist, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_bluetoothlist, lv_color_hex(0xE6E6E6), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_bluetoothlist, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_bluetoothlist, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui_bluetoothlist, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui_bluetoothlist, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui_bluetoothlist, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui_bluetoothlist, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_bluetoothsymbol1 = lv_label_create(ui_bluetoothlist);
    lv_obj_set_width(ui_bluetoothsymbol1, LV_SIZE_CONTENT);  /// 1
    lv_obj_set_height(ui_bluetoothsymbol1, LV_SIZE_CONTENT); /// 1
    lv_obj_set_align(ui_bluetoothsymbol1, LV_ALIGN_LEFT_MID);
    lv_label_set_text(ui_bluetoothsymbol1, "");
    lv_obj_set_style_text_font(ui_bluetoothsymbol1, &ui_font_symbols16, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_bluetoothlistname = lv_label_create(ui_bluetoothlist);
    lv_obj_set_width(ui_bluetoothlistname, 200);
    lv_obj_set_height(ui_bluetoothlistname, LV_SIZE_CONTENT); /// 1
    lv_obj_set_x(ui_bluetoothlistname, 30);
    lv_obj_set_y(ui_bluetoothlistname, 0);
    lv_obj_set_align(ui_bluetoothlistname, LV_ALIGN_LEFT_MID);
    lv_label_set_long_mode(ui_bluetoothlistname, LV_LABEL_LONG_DOT);
    lv_label_set_text(ui_bluetoothlistname, "IQiYI");
    lv_obj_add_flag(ui_bluetoothlistname, LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_CHECKABLE); /// Flags

    ui_bluetoothlistright = lv_label_create(ui_bluetoothlist);
    lv_obj_set_width(ui_bluetoothlistright, LV_SIZE_CONTENT);  /// 1
    lv_obj_set_height(ui_bluetoothlistright, LV_SIZE_CONTENT); /// 1
    lv_obj_set_align(ui_bluetoothlistright, LV_ALIGN_RIGHT_MID);
    lv_label_set_text(ui_bluetoothlistright, "");
    lv_obj_set_style_text_font(ui_bluetoothlistright, &ui_font_symbols16, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_blacklistpanel = lv_obj_create(ui_bluetoothpannel);
    lv_obj_set_width(ui_blacklistpanel, 280);
    lv_obj_set_height(ui_blacklistpanel, 30);
    lv_obj_set_x(ui_blacklistpanel, 0);
    lv_obj_set_y(ui_blacklistpanel, 125);
    lv_obj_set_align(ui_blacklistpanel, LV_ALIGN_LEFT_MID);
    lv_obj_set_flex_flow(ui_blacklistpanel, LV_FLEX_FLOW_ROW);
    lv_obj_set_flex_align(ui_blacklistpanel, LV_FLEX_ALIGN_START, LV_FLEX_ALIGN_START, LV_FLEX_ALIGN_START);
    lv_obj_clear_flag(ui_blacklistpanel, LV_OBJ_FLAG_SCROLLABLE); /// Flags
    lv_obj_set_style_radius(ui_blacklistpanel, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_blacklistpanel, lv_color_hex(0xE6E6E6), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_blacklistpanel, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_blacklistpanel, lv_color_hex(0xB4B4B4), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_blacklistpanel, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_blacklistpanel, 1, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui_blacklistpanel, LV_BORDER_SIDE_TOP, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui_blacklistpanel, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui_blacklistpanel, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui_blacklistpanel, 10, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui_blacklistpanel, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_bluetoothblacklist = lv_label_create(ui_blacklistpanel);
    lv_obj_set_height(ui_bluetoothblacklist, LV_SIZE_CONTENT); /// 1
    lv_obj_set_flex_grow(ui_bluetoothblacklist, 1);
    lv_obj_set_align(ui_bluetoothblacklist, LV_ALIGN_LEFT_MID);
    lv_label_set_text(ui_bluetoothblacklist, "蓝牙设备黑名单");
    lv_obj_set_style_text_font(ui_bluetoothblacklist, &ui_font_misans16, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_bluetoothblacklist, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_blacklistright = lv_label_create(ui_blacklistpanel);
    lv_obj_set_width(ui_blacklistright, LV_SIZE_CONTENT);  /// 1
    lv_obj_set_height(ui_blacklistright, LV_SIZE_CONTENT); /// 1
    lv_obj_set_align(ui_blacklistright, LV_ALIGN_RIGHT_MID);
    lv_label_set_text(ui_blacklistright, "");
    lv_obj_set_style_text_font(ui_blacklistright, &ui_font_symbols16, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_enterbluetooth = lv_obj_create(ui_bluetoothset);
    lv_obj_set_width(ui_enterbluetooth, 320);
    lv_obj_set_height(ui_enterbluetooth, 350);
    lv_obj_set_x(ui_enterbluetooth, 0);
    lv_obj_set_y(ui_enterbluetooth, 720);
    lv_obj_set_align(ui_enterbluetooth, LV_ALIGN_TOP_MID);
    lv_obj_set_flex_flow(ui_enterbluetooth, LV_FLEX_FLOW_COLUMN);
    lv_obj_set_flex_align(ui_enterbluetooth, LV_FLEX_ALIGN_START, LV_FLEX_ALIGN_CENTER, LV_FLEX_ALIGN_CENTER);
    lv_obj_clear_flag(ui_enterbluetooth, LV_OBJ_FLAG_GESTURE_BUBBLE | LV_OBJ_FLAG_SCROLLABLE); /// Flags
    lv_obj_set_style_radius(ui_enterbluetooth, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_enterbluetooth, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_enterbluetooth, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_enterbluetooth, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_enterbluetooth1 = lv_obj_create(ui_enterbluetooth);
    lv_obj_set_width(ui_enterbluetooth1, 280);
    lv_obj_set_height(ui_enterbluetooth1, 200);
    lv_obj_set_align(ui_enterbluetooth1, LV_ALIGN_CENTER);
    lv_obj_set_flex_flow(ui_enterbluetooth1, LV_FLEX_FLOW_COLUMN);
    lv_obj_set_flex_align(ui_enterbluetooth1, LV_FLEX_ALIGN_START, LV_FLEX_ALIGN_CENTER, LV_FLEX_ALIGN_CENTER);
    lv_obj_clear_flag(ui_enterbluetooth1, LV_OBJ_FLAG_SCROLLABLE); /// Flags
    lv_obj_set_style_pad_row(ui_enterbluetooth1, 10, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_column(ui_enterbluetooth1, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_bluetoothnamelabel = lv_label_create(ui_enterbluetooth1);
    lv_obj_set_width(ui_bluetoothnamelabel, LV_SIZE_CONTENT);  /// 1
    lv_obj_set_height(ui_bluetoothnamelabel, LV_SIZE_CONTENT); /// 1
    lv_obj_set_align(ui_bluetoothnamelabel, LV_ALIGN_TOP_MID);
    lv_label_set_text(ui_bluetoothnamelabel, "要与IQiYI配对吗？");
    lv_obj_set_style_text_font(ui_bluetoothnamelabel, &ui_font_misans16, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_blacklist = lv_btn_create(ui_enterbluetooth1);
    lv_obj_set_width(ui_blacklist, 200);
    lv_obj_set_height(ui_blacklist, 40);
    lv_obj_set_x(ui_blacklist, -10);
    lv_obj_set_y(ui_blacklist, 0);
    lv_obj_set_align(ui_blacklist, LV_ALIGN_BOTTOM_RIGHT);
    lv_obj_add_flag(ui_blacklist, LV_OBJ_FLAG_SCROLL_ON_FOCUS); /// Flags
    lv_obj_clear_flag(ui_blacklist, LV_OBJ_FLAG_SCROLLABLE);    /// Flags
    lv_obj_set_style_radius(ui_blacklist, 50, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_blacklist, lv_color_hex(0xE6E6E6), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_blacklist, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_blacklist, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui_blacklist, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_spread(ui_blacklist, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui_blacklist, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_blacklist, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui_blacklist, 50, LV_PART_MAIN | LV_STATE_PRESSED);
    lv_obj_set_style_bg_color(ui_blacklist, lv_color_hex(0x1D87F5), LV_PART_MAIN | LV_STATE_PRESSED);
    lv_obj_set_style_bg_opa(ui_blacklist, 255, LV_PART_MAIN | LV_STATE_PRESSED);
    lv_obj_set_style_text_color(ui_blacklist, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_PRESSED);
    lv_obj_set_style_text_opa(ui_blacklist, 255, LV_PART_MAIN | LV_STATE_PRESSED);
    lv_obj_set_style_radius(ui_blacklist, 0, LV_PART_MAIN | LV_STATE_CHECKED | LV_STATE_PRESSED);
    lv_obj_set_style_bg_color(ui_blacklist, lv_color_hex(0x1D87F5), LV_PART_MAIN | LV_STATE_CHECKED | LV_STATE_PRESSED);
    lv_obj_set_style_bg_opa(ui_blacklist, 255, LV_PART_MAIN | LV_STATE_CHECKED | LV_STATE_PRESSED);
    lv_obj_set_style_text_color(ui_blacklist, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_CHECKED | LV_STATE_PRESSED);
    lv_obj_set_style_text_opa(ui_blacklist, 255, LV_PART_MAIN | LV_STATE_CHECKED | LV_STATE_PRESSED);

    ui_blacklisttext = lv_label_create(ui_blacklist);
    lv_obj_set_width(ui_blacklisttext, LV_SIZE_CONTENT);  /// 1
    lv_obj_set_height(ui_blacklisttext, LV_SIZE_CONTENT); /// 1
    lv_obj_set_align(ui_blacklisttext, LV_ALIGN_CENTER);
    lv_label_set_text(ui_blacklisttext, "添加至黑名单");

    ui_canceltbtn1 = lv_btn_create(ui_enterbluetooth1);
    lv_obj_set_width(ui_canceltbtn1, 200);
    lv_obj_set_height(ui_canceltbtn1, 40);
    lv_obj_set_x(ui_canceltbtn1, -10);
    lv_obj_set_y(ui_canceltbtn1, 0);
    lv_obj_set_align(ui_canceltbtn1, LV_ALIGN_BOTTOM_RIGHT);
    lv_obj_add_flag(ui_canceltbtn1, LV_OBJ_FLAG_SCROLL_ON_FOCUS); /// Flags
    lv_obj_clear_flag(ui_canceltbtn1, LV_OBJ_FLAG_SCROLLABLE);    /// Flags
    lv_obj_set_style_radius(ui_canceltbtn1, 50, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_canceltbtn1, lv_color_hex(0xE6E6E6), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_canceltbtn1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_canceltbtn1, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui_canceltbtn1, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_spread(ui_canceltbtn1, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui_canceltbtn1, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_canceltbtn1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui_canceltbtn1, 50, LV_PART_MAIN | LV_STATE_PRESSED);
    lv_obj_set_style_bg_color(ui_canceltbtn1, lv_color_hex(0x1D87F5), LV_PART_MAIN | LV_STATE_PRESSED);
    lv_obj_set_style_bg_opa(ui_canceltbtn1, 255, LV_PART_MAIN | LV_STATE_PRESSED);
    lv_obj_set_style_text_color(ui_canceltbtn1, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_PRESSED);
    lv_obj_set_style_text_opa(ui_canceltbtn1, 255, LV_PART_MAIN | LV_STATE_PRESSED);
    lv_obj_set_style_radius(ui_canceltbtn1, 0, LV_PART_MAIN | LV_STATE_CHECKED | LV_STATE_PRESSED);
    lv_obj_set_style_bg_color(ui_canceltbtn1, lv_color_hex(0x1D87F5), LV_PART_MAIN | LV_STATE_CHECKED | LV_STATE_PRESSED);
    lv_obj_set_style_bg_opa(ui_canceltbtn1, 255, LV_PART_MAIN | LV_STATE_CHECKED | LV_STATE_PRESSED);
    lv_obj_set_style_text_color(ui_canceltbtn1, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_CHECKED | LV_STATE_PRESSED);
    lv_obj_set_style_text_opa(ui_canceltbtn1, 255, LV_PART_MAIN | LV_STATE_CHECKED | LV_STATE_PRESSED);

    ui_canceltext1 = lv_label_create(ui_canceltbtn1);
    lv_obj_set_width(ui_canceltext1, LV_SIZE_CONTENT);  /// 1
    lv_obj_set_height(ui_canceltext1, LV_SIZE_CONTENT); /// 1
    lv_obj_set_align(ui_canceltext1, LV_ALIGN_CENTER);
    lv_label_set_text(ui_canceltext1, "取消");

    ui_connectbtn1 = lv_btn_create(ui_enterbluetooth1);
    lv_obj_set_width(ui_connectbtn1, 200);
    lv_obj_set_height(ui_connectbtn1, 40);
    lv_obj_set_x(ui_connectbtn1, 10);
    lv_obj_set_y(ui_connectbtn1, 0);
    lv_obj_set_align(ui_connectbtn1, LV_ALIGN_BOTTOM_LEFT);
    lv_obj_add_flag(ui_connectbtn1, LV_OBJ_FLAG_SCROLL_ON_FOCUS); /// Flags
    lv_obj_clear_flag(ui_connectbtn1, LV_OBJ_FLAG_SCROLLABLE);    /// Flags
    lv_obj_set_style_radius(ui_connectbtn1, 50, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_connectbtn1, lv_color_hex(0xE6E6E6), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_connectbtn1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_connectbtn1, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui_connectbtn1, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_spread(ui_connectbtn1, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui_connectbtn1, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_connectbtn1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui_connectbtn1, 50, LV_PART_MAIN | LV_STATE_PRESSED);
    lv_obj_set_style_bg_color(ui_connectbtn1, lv_color_hex(0x1D87F5), LV_PART_MAIN | LV_STATE_PRESSED);
    lv_obj_set_style_bg_opa(ui_connectbtn1, 255, LV_PART_MAIN | LV_STATE_PRESSED);
    lv_obj_set_style_text_color(ui_connectbtn1, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_PRESSED);
    lv_obj_set_style_text_opa(ui_connectbtn1, 255, LV_PART_MAIN | LV_STATE_PRESSED);
    lv_obj_set_style_radius(ui_connectbtn1, 0, LV_PART_MAIN | LV_STATE_CHECKED | LV_STATE_PRESSED);
    lv_obj_set_style_bg_color(ui_connectbtn1, lv_color_hex(0x1D87F5), LV_PART_MAIN | LV_STATE_CHECKED | LV_STATE_PRESSED);
    lv_obj_set_style_bg_opa(ui_connectbtn1, 255, LV_PART_MAIN | LV_STATE_CHECKED | LV_STATE_PRESSED);
    lv_obj_set_style_text_color(ui_connectbtn1, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_CHECKED | LV_STATE_PRESSED);
    lv_obj_set_style_text_opa(ui_connectbtn1, 255, LV_PART_MAIN | LV_STATE_CHECKED | LV_STATE_PRESSED);

    ui_connecttext1 = lv_label_create(ui_connectbtn1);
    lv_obj_set_width(ui_connecttext1, LV_SIZE_CONTENT);  /// 1
    lv_obj_set_height(ui_connecttext1, LV_SIZE_CONTENT); /// 1
    lv_obj_set_align(ui_connecttext1, LV_ALIGN_CENTER);
    lv_label_set_text(ui_connecttext1, "配对");

    ui_keypannel1 = lv_obj_create(ui_enterbluetooth);
    lv_obj_set_width(ui_keypannel1, 320);
    lv_obj_set_height(ui_keypannel1, 160);
    lv_obj_set_align(ui_keypannel1, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_keypannel1, LV_OBJ_FLAG_HIDDEN);       /// Flags
    lv_obj_clear_flag(ui_keypannel1, LV_OBJ_FLAG_SCROLLABLE); /// Flags

    ui_Keyboard1 = lv_keyboard_create(ui_keypannel1);
    lv_obj_set_width(ui_Keyboard1, 320);
    lv_obj_set_height(ui_Keyboard1, 160);
    lv_obj_set_align(ui_Keyboard1, LV_ALIGN_CENTER);

    lv_obj_set_style_text_font(ui_Keyboard1, &lv_font_montserrat_16, LV_PART_ITEMS | LV_STATE_DEFAULT);

    lv_obj_add_event_cb(ui_bluetoothbackico, ui_event_bluetoothbackico, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_bluetoothswitch, ui_event_bluetoothswitch, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_bluetoohtrefresh, ui_event_bluetoohtrefresh, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_bluetoothlistname, ui_event_bluetoothlistname, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_bluetoothlist, ui_event_bluetoothlist, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_blacklist, ui_event_blacklist, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_canceltbtn1, ui_event_canceltbtn1, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_connectbtn1, ui_event_connectbtn1, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_bluetoothset, ui_event_bluetoothset, LV_EVENT_ALL, NULL);
}

void ui_init(void)
{
    lv_disp_t *dispp = lv_disp_get_default();
    lv_theme_t *theme = lv_theme_default_init(dispp, lv_palette_main(LV_PALETTE_BLUE), lv_palette_main(LV_PALETTE_RED),
                                              false, LV_FONT_DEFAULT);
    lv_disp_set_theme(dispp, theme);
    ui_home_screen_init();
    ui_setting_screen_init();
    ui_wifiset_screen_init();
    ui_aboutui_screen_init();
    ui_datetimeui_screen_init();
    ui_bluetoothset_screen_init();
    ui_initial_actions0 = lv_obj_create(NULL);
    lv_disp_load_scr(ui_home);
}
