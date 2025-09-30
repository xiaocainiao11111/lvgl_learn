/*
* Copyright 2025 NXP
* NXP Proprietary. This software is owned or controlled by NXP and may only be used strictly in
* accordance with the applicable license terms. By expressly accepting such terms or by downloading, installing,
* activating and/or otherwise using the software, you are agreeing that you have read, and that you agree to
* comply with and are bound by, such license terms.  If you do not agree to be bound by the applicable license
* terms, then you may not retain, install, activate or otherwise use the software.
*/

#include "lvgl.h"
#include <stdio.h>
#include "gui_guider.h"
#include "events_init.h"
#include "widgets_init.h"
#include "custom.h"



void setup_scr_blueCounter(lv_ui *ui)
{
    //Write codes blueCounter
    ui->blueCounter = lv_obj_create(NULL);
    lv_obj_set_size(ui->blueCounter, 480, 272);
    lv_obj_set_scrollbar_mode(ui->blueCounter, LV_SCROLLBAR_MODE_OFF);

    //Write style for blueCounter, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->blueCounter, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->blueCounter, lv_color_hex(0x599cc7), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->blueCounter, LV_GRAD_DIR_VER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_color(ui->blueCounter, lv_color_hex(0x8dcdeb), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_main_stop(ui->blueCounter, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_stop(ui->blueCounter, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes blueCounter_cont_1
    ui->blueCounter_cont_1 = lv_obj_create(ui->blueCounter);
    lv_obj_set_pos(ui->blueCounter_cont_1, 93, 51);
    lv_obj_set_size(ui->blueCounter_cont_1, 294, 170);
    lv_obj_set_scrollbar_mode(ui->blueCounter_cont_1, LV_SCROLLBAR_MODE_OFF);

    //Write style for blueCounter_cont_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->blueCounter_cont_1, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->blueCounter_cont_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->blueCounter_cont_1, lv_color_hex(0xacceea), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->blueCounter_cont_1, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->blueCounter_cont_1, 12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->blueCounter_cont_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->blueCounter_cont_1, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->blueCounter_cont_1, LV_GRAD_DIR_VER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_color(ui->blueCounter_cont_1, lv_color_hex(0x4e95cb), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_main_stop(ui->blueCounter_cont_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_stop(ui->blueCounter_cont_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->blueCounter_cont_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->blueCounter_cont_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->blueCounter_cont_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->blueCounter_cont_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->blueCounter_cont_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes blueCounter_plus
    ui->blueCounter_plus = lv_imgbtn_create(ui->blueCounter_cont_1);
    lv_obj_add_flag(ui->blueCounter_plus, LV_OBJ_FLAG_CHECKABLE);
    lv_imgbtn_set_src(ui->blueCounter_plus, LV_IMGBTN_STATE_RELEASED, NULL, &_btn_alpha_65x65, NULL);
    ui->blueCounter_plus_label = lv_label_create(ui->blueCounter_plus);
    lv_label_set_text(ui->blueCounter_plus_label, "+");
    lv_label_set_long_mode(ui->blueCounter_plus_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->blueCounter_plus_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->blueCounter_plus, 0, LV_STATE_DEFAULT);
    lv_obj_set_pos(ui->blueCounter_plus, 193, 13);
    lv_obj_set_size(ui->blueCounter_plus, 65, 65);

    //Write style for blueCounter_plus, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->blueCounter_plus, lv_color_hex(0x4d6e81), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->blueCounter_plus, &lv_font_arial_34, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->blueCounter_plus, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->blueCounter_plus, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->blueCounter_plus, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_clip_corner(ui->blueCounter_plus, true, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->blueCounter_plus, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for blueCounter_plus, Part: LV_PART_MAIN, State: LV_STATE_PRESSED.
    lv_obj_set_style_img_recolor_opa(ui->blueCounter_plus, 0, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_img_opa(ui->blueCounter_plus, 129, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_text_color(ui->blueCounter_plus, lv_color_hex(0xFF33FF), LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_text_font(ui->blueCounter_plus, &lv_font_montserratMedium_34, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_text_opa(ui->blueCounter_plus, 255, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_shadow_width(ui->blueCounter_plus, 0, LV_PART_MAIN|LV_STATE_PRESSED);

    //Write style for blueCounter_plus, Part: LV_PART_MAIN, State: LV_IMGBTN_STATE_RELEASED.
    lv_obj_set_style_img_recolor_opa(ui->blueCounter_plus, 0, LV_PART_MAIN|LV_IMGBTN_STATE_RELEASED);
    lv_obj_set_style_img_opa(ui->blueCounter_plus, 255, LV_PART_MAIN|LV_IMGBTN_STATE_RELEASED);

    //Write codes blueCounter_minus
    ui->blueCounter_minus = lv_imgbtn_create(ui->blueCounter_cont_1);
    lv_obj_add_flag(ui->blueCounter_minus, LV_OBJ_FLAG_CHECKABLE);
    lv_imgbtn_set_src(ui->blueCounter_minus, LV_IMGBTN_STATE_RELEASED, NULL, &_btn_alpha_65x65, NULL);
    ui->blueCounter_minus_label = lv_label_create(ui->blueCounter_minus);
    lv_label_set_text(ui->blueCounter_minus_label, "-");
    lv_label_set_long_mode(ui->blueCounter_minus_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->blueCounter_minus_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->blueCounter_minus, 0, LV_STATE_DEFAULT);
    lv_obj_set_pos(ui->blueCounter_minus, 193, 85);
    lv_obj_set_size(ui->blueCounter_minus, 65, 65);

    //Write style for blueCounter_minus, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->blueCounter_minus, lv_color_hex(0x4d6e81), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->blueCounter_minus, &lv_font_arial_34, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->blueCounter_minus, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->blueCounter_minus, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->blueCounter_minus, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_clip_corner(ui->blueCounter_minus, true, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->blueCounter_minus, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for blueCounter_minus, Part: LV_PART_MAIN, State: LV_STATE_PRESSED.
    lv_obj_set_style_img_recolor_opa(ui->blueCounter_minus, 0, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_img_opa(ui->blueCounter_minus, 129, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_text_color(ui->blueCounter_minus, lv_color_hex(0xFF33FF), LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_text_font(ui->blueCounter_minus, &lv_font_montserratMedium_34, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_text_opa(ui->blueCounter_minus, 255, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_shadow_width(ui->blueCounter_minus, 0, LV_PART_MAIN|LV_STATE_PRESSED);

    //Write style for blueCounter_minus, Part: LV_PART_MAIN, State: LV_IMGBTN_STATE_RELEASED.
    lv_obj_set_style_img_recolor_opa(ui->blueCounter_minus, 0, LV_PART_MAIN|LV_IMGBTN_STATE_RELEASED);
    lv_obj_set_style_img_opa(ui->blueCounter_minus, 255, LV_PART_MAIN|LV_IMGBTN_STATE_RELEASED);

    //Write codes blueCounter_counter
    ui->blueCounter_counter = lv_label_create(ui->blueCounter_cont_1);
    lv_label_set_text(ui->blueCounter_counter, "0");
    lv_label_set_long_mode(ui->blueCounter_counter, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->blueCounter_counter, 58, 63);
    lv_obj_set_size(ui->blueCounter_counter, 114, 43);

    //Write style for blueCounter_counter, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->blueCounter_counter, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->blueCounter_counter, 7, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->blueCounter_counter, lv_color_hex(0x024f5a), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->blueCounter_counter, &lv_font_arial_40, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->blueCounter_counter, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->blueCounter_counter, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->blueCounter_counter, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->blueCounter_counter, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->blueCounter_counter, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->blueCounter_counter, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->blueCounter_counter, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->blueCounter_counter, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->blueCounter_counter, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->blueCounter_counter, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes blueCounter_logo
    ui->blueCounter_logo = lv_img_create(ui->blueCounter_cont_1);
    lv_obj_add_flag(ui->blueCounter_logo, LV_OBJ_FLAG_CLICKABLE);
    lv_img_set_src(ui->blueCounter_logo, &_NXP_Logo_alpha_60x29);
    lv_img_set_pivot(ui->blueCounter_logo, 50,50);
    lv_img_set_angle(ui->blueCounter_logo, 0);
    lv_obj_set_pos(ui->blueCounter_logo, 11, 9);
    lv_obj_set_size(ui->blueCounter_logo, 60, 29);

    //Write style for blueCounter_logo, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_img_recolor_opa(ui->blueCounter_logo, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_img_opa(ui->blueCounter_logo, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->blueCounter_logo, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_clip_corner(ui->blueCounter_logo, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //The custom code of blueCounter.


    //Update current screen layout.
    lv_obj_update_layout(ui->blueCounter);

    //Init events for screen.
    events_init_blueCounter(ui);
}
