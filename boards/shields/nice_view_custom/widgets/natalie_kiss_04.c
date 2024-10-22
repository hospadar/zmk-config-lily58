#ifdef __has_include
    #if __has_include("lvgl.h")
        #ifndef LV_LVGL_H_INCLUDE_SIMPLE
            #define LV_LVGL_H_INCLUDE_SIMPLE
        #endif
    #endif
#endif

#if defined(LV_LVGL_H_INCLUDE_SIMPLE)
    #include "lvgl.h"
#else
    #include "lvgl/lvgl.h"
#endif


#ifndef LV_ATTRIBUTE_MEM_ALIGN
#define LV_ATTRIBUTE_MEM_ALIGN
#endif

#ifndef LV_ATTRIBUTE_IMG_NATALIE_KISS_04
#define LV_ATTRIBUTE_IMG_NATALIE_KISS_04
#endif

const LV_ATTRIBUTE_MEM_ALIGN LV_ATTRIBUTE_LARGE_CONST LV_ATTRIBUTE_IMG_NATALIE_KISS_04 uint8_t natalie_kiss_04_map[] = {
  #if CONFIG_NICE_VIEW_WIDGET_INVERTED
    0xfe, 0xfe, 0xfe, 0xff, 	/*Color of index 0*/
    0x00, 0x00, 0x00, 0xff, 	/*Color of index 1*/
  #else
    0x00, 0x00, 0x00, 0xff, 	/*Color of index 1*/
    0xfe, 0xfe, 0xfe, 0xff, 	/*Color of index 0*/
  #endif

  0x24, 0x0d, 0x01, 0x40, 0x08, 0x20, 0x1f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xbf, 0xff, 0xb0, 0x00, 0x00, 0x00, 
  0x50, 0x60, 0x05, 0x00, 0x00, 0x60, 0x0f, 0xff, 0xfd, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xf0, 0x00, 0x00, 0x00, 
  0xa1, 0x20, 0x18, 0x00, 0x01, 0x30, 0x0b, 0xff, 0xff, 0x5f, 0xff, 0xff, 0xff, 0xff, 0xe0, 0x00, 0x00, 0x00, 
  0x8a, 0x82, 0xa0, 0x1a, 0x90, 0x00, 0x01, 0xff, 0xff, 0xbf, 0xff, 0xff, 0xff, 0xff, 0xf0, 0x00, 0x00, 0x00, 
  0x3c, 0x03, 0x00, 0x1b, 0x00, 0x10, 0x07, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 
  0x60, 0x3c, 0x03, 0x50, 0x50, 0x1c, 0x4f, 0xff, 0xff, 0xff, 0xff, 0xfe, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 
  0xc1, 0x40, 0x08, 0x01, 0x80, 0xdc, 0x1f, 0xff, 0xfd, 0xff, 0xff, 0xff, 0xef, 0xff, 0xff, 0xc0, 0x00, 0x00, 
  0x02, 0x80, 0x61, 0x58, 0xaa, 0x28, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe0, 0x00, 0x00, 
  0x0d, 0x05, 0x81, 0x24, 0xa0, 0xa2, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x7f, 0xff, 0xff, 0xf0, 0x00, 0x00, 
  0xb0, 0x3a, 0x02, 0xd7, 0x53, 0x05, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xd7, 0xeb, 0xff, 0xff, 0xf0, 0x00, 0x00, 
  0xc0, 0x60, 0x03, 0xab, 0xab, 0xd7, 0xbf, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf6, 0xff, 0xff, 0xfc, 0x00, 0x00, 
  0x45, 0x80, 0xb8, 0x58, 0x5e, 0xbc, 0x4f, 0xff, 0xff, 0xff, 0xe5, 0x96, 0x7f, 0xff, 0xff, 0xfe, 0x00, 0x00, 
  0x96, 0x02, 0xa0, 0x23, 0x93, 0x45, 0x77, 0xff, 0xff, 0xff, 0x9e, 0x5e, 0xaf, 0x7f, 0xff, 0xff, 0x00, 0x00, 
  0x38, 0x2b, 0x97, 0xe9, 0x7e, 0xfb, 0x9f, 0xff, 0xff, 0xff, 0x79, 0xe9, 0xd7, 0xff, 0xff, 0xff, 0x00, 0x00, 
  0xa8, 0xf8, 0x7d, 0x43, 0xd9, 0x9c, 0x5f, 0xff, 0xff, 0xff, 0xe6, 0x04, 0x5e, 0x5f, 0xff, 0xff, 0x00, 0x00, 
  0xe3, 0x05, 0xca, 0xa8, 0xae, 0xa0, 0x0f, 0xff, 0xff, 0xff, 0xed, 0xb9, 0xa7, 0xf3, 0xff, 0xff, 0x80, 0x00, 
  0x96, 0x1a, 0xb5, 0x69, 0x5f, 0x00, 0x01, 0xff, 0xff, 0xff, 0xff, 0x76, 0xf7, 0xfb, 0xff, 0xff, 0x80, 0x00, 
  0x58, 0x24, 0x69, 0xe6, 0xa4, 0x00, 0x83, 0xff, 0xff, 0xff, 0xfa, 0x89, 0x0d, 0xfe, 0xff, 0xff, 0x80, 0x00, 
  0xe9, 0xa0, 0x5d, 0x5d, 0xe0, 0x20, 0x21, 0xff, 0xff, 0xff, 0xe9, 0xa4, 0x66, 0x7f, 0xff, 0xff, 0xc0, 0x00, 
  0xc1, 0x49, 0xbe, 0xa5, 0xc0, 0x80, 0x07, 0xff, 0xff, 0xff, 0xf4, 0x41, 0x08, 0xdf, 0xff, 0xff, 0xe0, 0x00, 
  0x96, 0xb8, 0x7f, 0xda, 0x80, 0x40, 0x85, 0xff, 0xff, 0xff, 0xe8, 0x92, 0x41, 0x5f, 0xff, 0xff, 0xe0, 0x00, 
  0x5b, 0xa0, 0x7f, 0xbc, 0x1a, 0x09, 0x19, 0xff, 0xff, 0xff, 0x48, 0x9a, 0x90, 0x6b, 0xff, 0xff, 0xe0, 0x00, 
  0x7a, 0x8f, 0xff, 0xe4, 0x59, 0x79, 0x5b, 0xff, 0xff, 0xff, 0xe1, 0x05, 0x60, 0x0f, 0xff, 0xff, 0xf0, 0x00, 
  0xd6, 0xbf, 0xff, 0xd0, 0x80, 0x90, 0xbf, 0xff, 0xff, 0xfd, 0x80, 0x43, 0xc0, 0x0b, 0x7f, 0xff, 0xf0, 0x00, 
  0xff, 0xff, 0xff, 0xac, 0x03, 0x21, 0x1f, 0xff, 0xff, 0xff, 0xa0, 0x17, 0x50, 0x05, 0xff, 0xff, 0xe0, 0x00, 
  0xff, 0xff, 0xff, 0x58, 0x28, 0x06, 0x1f, 0xff, 0xff, 0xff, 0x80, 0x0e, 0xe0, 0x12, 0x7f, 0xff, 0xe0, 0x00, 
  0xff, 0xff, 0xfc, 0x60, 0x60, 0x1c, 0x3f, 0xff, 0xff, 0xfe, 0xc2, 0x07, 0xe8, 0x07, 0x3d, 0xff, 0xf0, 0x00, 
  0xff, 0xff, 0xf1, 0xa3, 0x82, 0xa0, 0xaf, 0xff, 0xff, 0xfe, 0x08, 0x02, 0x38, 0x1e, 0x5f, 0xff, 0xf0, 0x00, 
  0xff, 0xff, 0xa1, 0x9a, 0xa6, 0x81, 0x1f, 0xff, 0xff, 0xff, 0x10, 0x0e, 0x1a, 0x2e, 0x5f, 0xff, 0xf0, 0x00, 
  0xff, 0xfc, 0x1e, 0x64, 0x18, 0x06, 0x8f, 0xff, 0xff, 0xfe, 0x44, 0x40, 0xb8, 0xbe, 0x10, 0xff, 0xf0, 0x00, 
  0xff, 0xf0, 0x40, 0x78, 0x20, 0x34, 0x3f, 0xff, 0xff, 0xfe, 0xaa, 0x02, 0x5c, 0x3d, 0x04, 0x3f, 0xf0, 0x00, 
  0xff, 0xe1, 0xab, 0x83, 0xe5, 0x40, 0xe7, 0xff, 0xff, 0xfa, 0x52, 0x04, 0x15, 0x7e, 0x20, 0x1f, 0xf0, 0x00, 
  0xff, 0x85, 0x95, 0x07, 0x9a, 0x82, 0x9f, 0xff, 0xff, 0xfe, 0x95, 0x0c, 0x24, 0x7c, 0x80, 0x07, 0xf0, 0x00, 
  0xfc, 0x02, 0x0a, 0x7c, 0x5f, 0x5d, 0x1b, 0xff, 0xff, 0xf9, 0x68, 0x0a, 0x66, 0x7d, 0x40, 0x0b, 0xf0, 0x00, 
  0xf8, 0x08, 0x38, 0xd9, 0xf5, 0xf4, 0x66, 0xfe, 0xff, 0xfe, 0x36, 0x15, 0x60, 0x3e, 0x40, 0x03, 0xf0, 0x00, 
  0xf4, 0xc1, 0xc3, 0xa7, 0x9f, 0xff, 0xf5, 0x62, 0xff, 0xfd, 0xdc, 0x7a, 0xc4, 0x29, 0x80, 0x07, 0xf0, 0x00, 
  0xfe, 0x9d, 0xc1, 0xbf, 0x83, 0xa7, 0xbd, 0x80, 0x3f, 0xff, 0xf7, 0x7d, 0x60, 0x2a, 0x80, 0x07, 0xe0, 0x00, 
  0xc0, 0x76, 0x05, 0x80, 0x1f, 0xab, 0x78, 0xc6, 0x37, 0xfe, 0x2f, 0xe7, 0x80, 0x07, 0x00, 0x07, 0xe0, 0x00, 
  0x45, 0xe2, 0x0f, 0x80, 0x5e, 0x95, 0xee, 0x54, 0x03, 0xff, 0xff, 0xfe, 0xa0, 0x05, 0x80, 0x0b, 0xe0, 0x00, 
  0xfa, 0x04, 0xb0, 0x1b, 0xf2, 0x7f, 0x45, 0xb6, 0x03, 0xff, 0xcf, 0xff, 0x84, 0x00, 0x00, 0x07, 0xe0, 0x00, 
  0xe4, 0x19, 0xa0, 0x17, 0x5f, 0xff, 0x7f, 0xff, 0x00, 0xff, 0xe7, 0xbf, 0xd0, 0x00, 0x40, 0x8f, 0x80, 0x00, 
  0x81, 0xae, 0x03, 0x68, 0xbf, 0xff, 0xef, 0xff, 0x10, 0x0f, 0xab, 0xef, 0x41, 0x96, 0x00, 0x0f, 0xc0, 0x00, 
  0x79, 0x50, 0x1f, 0x85, 0xff, 0xff, 0xff, 0xff, 0x80, 0x07, 0xfd, 0xff, 0x9f, 0xe0, 0x00, 0x0f, 0x00, 0x00, 
  0x84, 0xa7, 0xe0, 0x57, 0xff, 0xff, 0xff, 0xff, 0xe0, 0x0b, 0xff, 0xa5, 0x7f, 0xf6, 0x88, 0x0f, 0x00, 0x00, 
  0x63, 0xfb, 0x80, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xf0, 0x08, 0xff, 0xdd, 0x3e, 0xfa, 0x24, 0x3f, 0x00, 0x00, 
  0xda, 0x00, 0x1f, 0xcf, 0x7f, 0xff, 0xff, 0xff, 0xe0, 0x00, 0xff, 0xa1, 0xfe, 0xe0, 0x00, 0xfc, 0x00, 0x00, 
  0xe4, 0x84, 0x5e, 0x7e, 0xff, 0xff, 0xff, 0xff, 0xf8, 0x02, 0x3f, 0xe8, 0xff, 0x79, 0x50, 0xf0, 0x00, 0x00, 
  0x8b, 0x42, 0xd1, 0xa9, 0xff, 0xff, 0xff, 0xff, 0xfc, 0x00, 0x7f, 0xff, 0xfe, 0xe1, 0x0b, 0xf0, 0x00, 0x00, 
  0x15, 0x15, 0x85, 0xaf, 0xff, 0xff, 0xff, 0xfd, 0xfc, 0x00, 0x7f, 0xff, 0xff, 0xfd, 0xff, 0xc0, 0x00, 0x00, 
  0xef, 0xfe, 0x1a, 0x57, 0xff, 0xff, 0xff, 0xf7, 0xfc, 0x00, 0x3f, 0xff, 0xff, 0xff, 0xff, 0x80, 0x00, 0x00, 
  0x59, 0x5a, 0xab, 0x7f, 0xff, 0xff, 0xff, 0xfd, 0xfe, 0x00, 0x7f, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 
  0xdb, 0xe2, 0x54, 0xa6, 0xff, 0xff, 0xff, 0xf2, 0x9e, 0x01, 0xff, 0xff, 0xff, 0xf7, 0xff, 0x00, 0x00, 0x00, 
  0xeb, 0xf9, 0x6a, 0x6b, 0xff, 0xff, 0xff, 0xdf, 0x47, 0x00, 0xff, 0xff, 0xff, 0xf2, 0x30, 0x00, 0x00, 0x00, 
  0xfa, 0x46, 0x95, 0xb9, 0xff, 0xff, 0xff, 0xf5, 0x2b, 0x00, 0xff, 0xff, 0xff, 0xf0, 0x00, 0x00, 0x00, 0x00, 
  0xfe, 0xfd, 0x2a, 0x5f, 0xff, 0xff, 0xff, 0xee, 0xa1, 0x83, 0xff, 0xff, 0xff, 0xc0, 0x00, 0x00, 0x00, 0x00, 
  0xf7, 0xaf, 0xd4, 0xbf, 0xff, 0xff, 0xff, 0xf9, 0x58, 0x03, 0xff, 0xff, 0xff, 0xc0, 0x00, 0x00, 0x00, 0x00, 
  0xeb, 0xfe, 0xaa, 0x3f, 0xff, 0xff, 0xff, 0xe6, 0x50, 0x0f, 0xff, 0xff, 0xff, 0xc0, 0x00, 0x00, 0x00, 0x00, 
  0xfe, 0x5b, 0x58, 0x7f, 0xff, 0xff, 0xff, 0xd8, 0x04, 0x07, 0xff, 0xff, 0xff, 0xe0, 0x00, 0x00, 0x00, 0x00, 
  0xf7, 0x56, 0x84, 0x7f, 0xff, 0xff, 0xff, 0xc0, 0x42, 0x1f, 0xff, 0xff, 0xff, 0xe0, 0x00, 0x00, 0x00, 0x00, 
  0xea, 0xa1, 0x69, 0x3f, 0xff, 0xff, 0xff, 0xa0, 0x00, 0x9f, 0xff, 0xff, 0xff, 0xe0, 0x00, 0x00, 0x00, 0x00, 
  0xe6, 0x9a, 0x98, 0x3f, 0xff, 0xff, 0xff, 0x08, 0x00, 0x1f, 0xff, 0xff, 0xff, 0xf0, 0x00, 0x00, 0x00, 0x00, 
  0x69, 0x65, 0x62, 0x7f, 0xff, 0xff, 0xff, 0xc0, 0x02, 0x5f, 0xff, 0xff, 0xff, 0xf0, 0x00, 0x00, 0x00, 0x00, 
  0xf2, 0xda, 0xa9, 0x3f, 0xff, 0xff, 0xff, 0x90, 0x01, 0x6e, 0xff, 0xff, 0xff, 0xf0, 0x00, 0x00, 0x00, 0x00, 
  0x89, 0x22, 0x48, 0xff, 0xff, 0xff, 0xfe, 0x80, 0x00, 0x94, 0xbf, 0xff, 0xff, 0xf0, 0x00, 0x00, 0x00, 0x00, 
  0xa6, 0x28, 0x98, 0x7f, 0xff, 0xff, 0xfe, 0x40, 0x00, 0x64, 0x9f, 0xff, 0xff, 0xe0, 0x00, 0x00, 0x00, 0x00, 
  0x49, 0xda, 0x66, 0x3f, 0xff, 0xff, 0x99, 0x00, 0x01, 0x8a, 0x0f, 0xff, 0xff, 0xf0, 0x00, 0x00, 0x00, 0x00, 
  0xd2, 0x64, 0x91, 0xff, 0xff, 0xff, 0xe6, 0x60, 0x01, 0x10, 0xaf, 0xff, 0xff, 0xf0, 0x00, 0x00, 0x00, 0x00, 
  0xa5, 0x09, 0x28, 0x3f, 0xff, 0xff, 0x9a, 0x00, 0x04, 0x66, 0x07, 0xff, 0xff, 0x70, 0x00, 0x00, 0x00, 0x00, 
};

const lv_img_dsc_t natalie_kiss_04 = {
  .header.cf = LV_IMG_CF_INDEXED_1BIT,
  .header.always_zero = 0,
  .header.reserved = 0,
  .header.w = 140,
  .header.h = 68,
  .data_size = 1232,
  .data = natalie_kiss_04_map,
};
