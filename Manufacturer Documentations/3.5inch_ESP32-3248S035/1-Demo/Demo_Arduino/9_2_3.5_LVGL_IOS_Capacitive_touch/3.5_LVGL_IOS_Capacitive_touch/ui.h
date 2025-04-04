// LVGL version: 8.3.5
// Project name: phoneui

#ifndef _MP3GUI_UI_H
#define _MP3GUI_UI_H

#ifdef __cplusplus
extern "C" {
#endif

#include "lvgl.h"

#include "ui_events.h"
void moveleft_Animation(lv_obj_t * TargetObject, int delay);
void moveright_Animation(lv_obj_t * TargetObject, int delay);
void moveup_Animation(lv_obj_t * TargetObject, int delay);
void movedown_Animation(lv_obj_t * TargetObject, int delay);
void suo_Animation(lv_obj_t * TargetObject, int delay);
extern lv_obj_t * ui_home;
void ui_event_header(lv_event_t * e);
extern lv_obj_t * ui_header;
extern lv_obj_t * ui_body;
extern lv_obj_t * ui_home1;
extern lv_obj_t * ui_camera;
extern lv_obj_t * ui_cameratext;
extern lv_obj_t * ui_clock;
extern lv_obj_t * ui_clocktext;
extern lv_obj_t * ui_gallery;
extern lv_obj_t * ui_gallerytext;
extern lv_obj_t * ui_music;
extern lv_obj_t * ui_musictext;
void ui_event_settings(lv_event_t * e);
extern lv_obj_t * ui_settings;
extern lv_obj_t * ui_settingstext;
extern lv_obj_t * ui_notes;
extern lv_obj_t * ui_notestext;
extern lv_obj_t * ui_weather;
extern lv_obj_t * ui_weathertext;
extern lv_obj_t * ui_contacts;
extern lv_obj_t * ui_contactstext;
extern lv_obj_t * ui_caculator;
extern lv_obj_t * ui_caculatortext;
extern lv_obj_t * ui_filemanager;
extern lv_obj_t * ui_filemanagertext;
extern lv_obj_t * ui_video;
extern lv_obj_t * ui_videotext;
extern lv_obj_t * ui_car;
extern lv_obj_t * ui_cartext;
extern lv_obj_t * ui_home2;
extern lv_obj_t * ui_jionet;
extern lv_obj_t * ui_jionettext;
extern lv_obj_t * ui_qrbarcode;
extern lv_obj_t * ui_qrbarcodetext;
extern lv_obj_t * ui_bluetoothcontrl;
extern lv_obj_t * ui_bluetoothcontrltext;
extern lv_obj_t * ui_miremote;
extern lv_obj_t * ui_miremotetext;
extern lv_obj_t * ui_footer;
extern lv_obj_t * ui_phone;
extern lv_obj_t * ui_phonet;
extern lv_obj_t * ui_email;
extern lv_obj_t * ui_emailt;
extern lv_obj_t * ui_browser;
extern lv_obj_t * ui_message;
extern lv_obj_t * ui_browsert;
extern lv_obj_t * ui_messages;
extern lv_obj_t * ui_mobile;
extern lv_obj_t * ui_wifi;
extern lv_obj_t * ui_battery;
extern lv_obj_t * ui_time;
extern lv_obj_t * ui_batteryp;
void ui_event_menudown(lv_event_t * e);
extern lv_obj_t * ui_menudown;
extern lv_obj_t * ui_menudowntop;
void ui_event_wifibtn(lv_event_t * e);
extern lv_obj_t * ui_wifibtn;
extern lv_obj_t * ui_wifilabel;
void ui_event_bluebtn(lv_event_t * e);
extern lv_obj_t * ui_bluebtn;
extern lv_obj_t * ui_bluelabel;
void ui_event_bellbtn(lv_event_t * e);
extern lv_obj_t * ui_bellbtn;
extern lv_obj_t * ui_belllabel;
void ui_event_gpsbtn(lv_event_t * e);
extern lv_obj_t * ui_gpsbtn;
extern lv_obj_t * ui_mutelabel1;
extern lv_obj_t * ui_menudownlight;
void ui_event_lightslider(lv_event_t * e);
extern lv_obj_t * ui_lightslider;
extern lv_obj_t * ui_lighttext;
extern lv_obj_t * ui_menudownvolume;
void ui_event_volumeslider(lv_event_t * e);
extern lv_obj_t * ui_volumeslider;
extern lv_obj_t * ui_volumetext;
extern lv_obj_t * ui_menudownfoot;
void ui_event_setting(lv_event_t * e);
extern lv_obj_t * ui_setting;
extern lv_obj_t * ui_settingheader;
extern lv_obj_t * ui_settingmobile;
extern lv_obj_t * ui_settingwifi;
extern lv_obj_t * ui_settingbattery;
extern lv_obj_t * ui_settingtime;
extern lv_obj_t * ui_settingbatteryp;
extern lv_obj_t * ui_settingtext;
extern lv_obj_t * ui_setpannel;
void ui_event_aboutpannel(lv_event_t * e);
extern lv_obj_t * ui_aboutpannel;
extern lv_obj_t * ui_aboutlabel;
extern lv_obj_t * ui_aboutlabel1;
extern lv_obj_t * ui_aboutlabel2;
void ui_event_aboutpannel1(lv_event_t * e);
extern lv_obj_t * ui_aboutpannel1;
extern lv_obj_t * ui_aboutlabel19;
extern lv_obj_t * ui_aboutlabel21;
void ui_event_wifipanel(lv_event_t * e);
extern lv_obj_t * ui_wifipanel;
extern lv_obj_t * ui_wifitext;
extern lv_obj_t * ui_wifionlabel;
extern lv_obj_t * ui_wifionlabel1;
void ui_event_wifipanel1(lv_event_t * e);
extern lv_obj_t * ui_wifipanel1;
extern lv_obj_t * ui_wifitext1;
extern lv_obj_t * ui_wifionlabel2;
extern lv_obj_t * ui_wifionlabel3;
void ui_event_wifiset(lv_event_t * e);
extern lv_obj_t * ui_wifiset;
extern lv_obj_t * ui_wlanheader;
extern lv_obj_t * ui_wlanmobile;
extern lv_obj_t * ui_wlanwifi;
extern lv_obj_t * ui_wlanbattery;
extern lv_obj_t * ui_wlantime;
extern lv_obj_t * ui_wlanbatteryp;
extern lv_obj_t * ui_wlantitle;
void ui_event_headerbackico(lv_event_t * e);
extern lv_obj_t * ui_headerbackico;
extern lv_obj_t * ui_wlansetpannel;
extern lv_obj_t * ui_wlanswitchpanel;
extern lv_obj_t * ui_wlansetlabel;
void ui_event_wlanswitch(lv_event_t * e);
extern lv_obj_t * ui_wlanswitch;
extern lv_obj_t * ui_wificonnect;
extern lv_obj_t * ui_wifisymbol;
extern lv_obj_t * ui_wifiname;
extern lv_obj_t * ui_wifistats;
extern lv_obj_t * ui_wificlock;
extern lv_obj_t * ui_wificonright;
extern lv_obj_t * ui_wifiscan;
extern lv_obj_t * ui_wifiselecttitle;
void ui_event_wifirefresh(lv_event_t * e);
extern lv_obj_t * ui_wifirefresh;
extern lv_obj_t * ui_wifilist;
extern lv_obj_t * ui_wifisymbol1;
void ui_event_wifilistname(lv_event_t * e);
extern lv_obj_t * ui_wifilistname;
extern lv_obj_t * ui_wifilock;
extern lv_obj_t * ui_wifilistright;
extern lv_obj_t * ui_enterwifipass;
extern lv_obj_t * ui_passpannel;
extern lv_obj_t * ui_wifinamelabel;
void ui_event_wifipassinput(lv_event_t * e);
extern lv_obj_t * ui_wifipassinput;
void ui_event_connectbtn(lv_event_t * e);
extern lv_obj_t * ui_connectbtn;
extern lv_obj_t * ui_connecttext;
void ui_event_canceltbtn(lv_event_t * e);
extern lv_obj_t * ui_canceltbtn;
extern lv_obj_t * ui_canceltext;
extern lv_obj_t * ui_keypannel;
extern lv_obj_t * ui_Keyboard;
void ui_event_aboutui(lv_event_t * e);
extern lv_obj_t * ui_aboutui;
extern lv_obj_t * ui_aboutheader;
extern lv_obj_t * ui_aboutmobile;
extern lv_obj_t * ui_aboutwifi;
extern lv_obj_t * ui_aboutbattery;
extern lv_obj_t * ui_abouttime;
extern lv_obj_t * ui_aboutbatteryp;
extern lv_obj_t * ui_abouttitle;
extern lv_obj_t * ui_aboutbody;
extern lv_obj_t * ui_aboutpanel1;
extern lv_obj_t * ui_aboutlabel3;
extern lv_obj_t * ui_aboutlabel4;
extern lv_obj_t * ui_aboutpanel2;
extern lv_obj_t * ui_aboutlabel5;
extern lv_obj_t * ui_aboutlabel6;
extern lv_obj_t * ui_aboutpanel3;
extern lv_obj_t * ui_aboutlabel7;
extern lv_obj_t * ui_aboutlabel8;
extern lv_obj_t * ui_aboutpanel4;
extern lv_obj_t * ui_aboutlabel9;
extern lv_obj_t * ui_aboutlabel10;
extern lv_obj_t * ui_aboutpanel5;
extern lv_obj_t * ui_aboutlabel11;
extern lv_obj_t * ui_aboutlabel12;
extern lv_obj_t * ui_aboutpanel6;
extern lv_obj_t * ui_aboutlabel13;
extern lv_obj_t * ui_aboutlabel14;
extern lv_obj_t * ui_aboutpanel7;
extern lv_obj_t * ui_aboutlabel15;
extern lv_obj_t * ui_aboutlabel16;
extern lv_obj_t * ui_aboutpanel8;
extern lv_obj_t * ui_aboutlabel17;
extern lv_obj_t * ui_aboutlabel18;
void ui_event_datetimeui(lv_event_t * e);
extern lv_obj_t * ui_datetimeui;
extern lv_obj_t * ui_datetimeheader;
extern lv_obj_t * ui_datetimemobile;
extern lv_obj_t * ui_datetimewifi;
extern lv_obj_t * ui_datetimebattery;
extern lv_obj_t * ui_datetimetime;
extern lv_obj_t * ui_datetimebatteryp;
extern lv_obj_t * ui_datetimetitle;
extern lv_obj_t * ui_datetimebody;
extern lv_obj_t * ui_datetimepanel;
extern lv_obj_t * ui_autodatetimelabel1;
extern lv_obj_t * ui_autodatetimeswitch1;
extern lv_obj_t * ui_datetimepanel1;
extern lv_obj_t * ui_autodatetimelabel;
void ui_event_autodatetimeswitch(lv_event_t * e);
extern lv_obj_t * ui_autodatetimeswitch;
void ui_event_setdate(lv_event_t * e);
extern lv_obj_t * ui_setdate;
extern lv_obj_t * ui_date;
extern lv_obj_t * ui_dateright;
extern lv_obj_t * ui_settime;
extern lv_obj_t * ui_time1;
extern lv_obj_t * ui_timeright;
extern lv_obj_t * ui_datetimecountry;
extern lv_obj_t * ui_datetimecountrylabel;
extern lv_obj_t * ui_datetimelabel1;
void ui_event_calendar(lv_event_t * e);
extern lv_obj_t * ui_calendar;
void ui_event_bluetoothset(lv_event_t * e);
extern lv_obj_t * ui_bluetoothset;
extern lv_obj_t * ui_bluetoothheader;
extern lv_obj_t * ui_bluetoothmobile;
extern lv_obj_t * ui_bluetoothwifi;
extern lv_obj_t * ui_bluetoothbattery;
extern lv_obj_t * ui_bluetoothtime;
extern lv_obj_t * ui_bluetoothbatteryp;
extern lv_obj_t * ui_bluetoothtitle;
void ui_event_bluetoothbackico(lv_event_t * e);
extern lv_obj_t * ui_bluetoothbackico;
extern lv_obj_t * ui_bluetoothpannel;
extern lv_obj_t * ui_bluetoothwitchpanel;
extern lv_obj_t * ui_bluetoothsetlabel;
void ui_event_bluetoothswitch(lv_event_t * e);
extern lv_obj_t * ui_bluetoothswitch;
extern lv_obj_t * ui_bluetoothconnect;
extern lv_obj_t * ui_bluetoothsymbol;
extern lv_obj_t * ui_bluetoothname;
extern lv_obj_t * ui_bluetoothstats;
extern lv_obj_t * ui_bluetoothconright;
extern lv_obj_t * ui_bluetoothscan;
extern lv_obj_t * ui_bluetoothselecttitle;
void ui_event_bluetoohtrefresh(lv_event_t * e);
extern lv_obj_t * ui_bluetoohtrefresh;
void ui_event_bluetoothlist(lv_event_t * e);
extern lv_obj_t * ui_bluetoothlist;
extern lv_obj_t * ui_bluetoothsymbol1;
void ui_event_bluetoothlistname(lv_event_t * e);
extern lv_obj_t * ui_bluetoothlistname;
extern lv_obj_t * ui_bluetoothlistright;
extern lv_obj_t * ui_blacklistpanel;
extern lv_obj_t * ui_bluetoothblacklist;
extern lv_obj_t * ui_blacklistright;
extern lv_obj_t * ui_enterbluetooth;
extern lv_obj_t * ui_enterbluetooth1;
extern lv_obj_t * ui_bluetoothnamelabel;
void ui_event_blacklist(lv_event_t * e);
extern lv_obj_t * ui_blacklist;
extern lv_obj_t * ui_blacklisttext;
void ui_event_canceltbtn1(lv_event_t * e);
extern lv_obj_t * ui_canceltbtn1;
extern lv_obj_t * ui_canceltext1;
void ui_event_connectbtn1(lv_event_t * e);
extern lv_obj_t * ui_connectbtn1;
extern lv_obj_t * ui_connecttext1;
extern lv_obj_t * ui_keypannel1;
extern lv_obj_t * ui_Keyboard1;
extern lv_obj_t * ui____initial_actions0;


LV_IMG_DECLARE(ui_img_bg_png);    // assets\bg.png
LV_IMG_DECLARE(ui_img_camera_png);    // assets\camera.png
LV_IMG_DECLARE(ui_img_clock_png);    // assets\clock.png
LV_IMG_DECLARE(ui_img_gallery_png);    // assets\gallery.png
LV_IMG_DECLARE(ui_img_music_png);    // assets\music.png
LV_IMG_DECLARE(ui_img_settings_png);    // assets\settings.png
LV_IMG_DECLARE(ui_img_notes_png);    // assets\notes.png
LV_IMG_DECLARE(ui_img_weather_png);    // assets\weather.png
LV_IMG_DECLARE(ui_img_contacts_png);    // assets\contacts.png
LV_IMG_DECLARE(ui_img_calculator_png);    // assets\calculator.png
LV_IMG_DECLARE(ui_img_filemanager_png);    // assets\filemanager.png
LV_IMG_DECLARE(ui_img_videos_png);    // assets\videos.png
LV_IMG_DECLARE(ui_img_car_png);    // assets\car.png
LV_IMG_DECLARE(ui_img_jionet_png);    // assets\jionet.png
LV_IMG_DECLARE(ui_img_qrbarcode_png);    // assets\qrbarcode.png
LV_IMG_DECLARE(ui_img_bluetoothcontrl_png);    // assets\bluetoothcontrl.png
LV_IMG_DECLARE(ui_img_mi_remote_png);    // assets\mi_remote.png
LV_IMG_DECLARE(ui_img_phone_png);    // assets\phone.png
LV_IMG_DECLARE(ui_img_email_png);    // assets\email.png
LV_IMG_DECLARE(ui_img_browser_png);    // assets\browser.png
LV_IMG_DECLARE(ui_img_messaging_png);    // assets\messaging.png


LV_FONT_DECLARE(ui_font_misans16);
LV_FONT_DECLARE(ui_font_symbols16);

void ui_init(void);

#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif
