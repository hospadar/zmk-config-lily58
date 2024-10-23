#include <lvgl.h>

struct anim_state {
    bool next_frame;
};

static void widget_animation_init();

const lv_img_dsc_t *natalie_kiss_anim[];