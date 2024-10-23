#include <lvgl.h>
#include <zmk/event_manager.h>
#include <zmk/events/keycode_state_changed.h>
#include "animation.h"
#include "peripheral_status.h"
#include <zmk/display.h>

LV_IMG_DECLARE(corro01);
LV_IMG_DECLARE(corro02);
LV_IMG_DECLARE(corro03);
LV_IMG_DECLARE(corro04);
LV_IMG_DECLARE(corro05);
LV_IMG_DECLARE(corro06);
LV_IMG_DECLARE(corro07);
LV_IMG_DECLARE(corro08);
LV_IMG_DECLARE(corro09);
LV_IMG_DECLARE(corro10);
LV_IMG_DECLARE(corro11);
LV_IMG_DECLARE(corro12);
LV_IMG_DECLARE(natalie_kiss_01);
LV_IMG_DECLARE(natalie_kiss_02);
LV_IMG_DECLARE(natalie_kiss_03);
LV_IMG_DECLARE(natalie_kiss_04);

const lv_img_dsc_t *natalie_kiss_anim[] = {
    &natalie_kiss_01,
    &natalie_kiss_02,
    &natalie_kiss_03,
    &natalie_kiss_04
};

const lv_img_dsc_t *urchin[] = {
    &corro01,
    &corro02,
    &corro03,
    &corro04,
    &corro05,
    &corro06,
    &corro07,
    &corro08,
    &corro09,
    &corro10,
    &corro11,
    &corro12,
};

const lv_img_dsc_t **anim_imgs[] = {
    natalie_kiss_anim,
    urchin
};

static uint8_t N_IMAGES=2;

static uint8_t N_FRAMES[] = {
    4,
    12
};


static void set_anim_status(struct zmk_widget_status *widget, struct anim_state state)
{
    if (state.next_frame){
        widget->state.anim_idx++;
        if (widget->state.anim_idx >= N_FRAMES[widget->state.img_idx]){
            widget->state.anim_idx = 0;
        }
    }

    draw_top(widget->obj, widget->cbuf, &widget->state);
}

static void update_anim_status_cb(struct anim_state state){
    struct zmk_widget_status *widget;
    SYS_SLIST_FOR_EACH_CONTAINER(&widgets, widget, node) { set_anim_status(widget, state); }
}

static struct anim_state get_anim_state(const zmk_event_t *eh){
    const struct zmk_keycode_state_changed *ev = as_zmk_keycode_state_changed(eh);
    struct anim_state state = {.next_frame=false};
    
    if (ev) {
        // count only key up events
        if (!ev->state && ev->keycode == A) {
            state.next_frame = true; 
            //LOG_DBG("keycode %d", ev->keycode);
        }
    }

    return state;
}

ZMK_DISPLAY_WIDGET_LISTENER(widget_animation, struct anim_state, update_anim_status_cb, get_anim_state)
ZMK_SUBSCRIPTION(widget_animation, zmk_keycode_state_changed)