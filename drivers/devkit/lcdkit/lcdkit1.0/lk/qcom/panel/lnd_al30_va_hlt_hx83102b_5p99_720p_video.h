/* Copyright (c) 2013, The Linux Foundation. All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *  * Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 *  * Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in
 *    the documentation and/or other materials provided with the
 *    distribution.
 *  * Neither the name of The Linux Foundation nor the names of its
 *    contributors may be used to endorse or promote products derived
 *    from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
 * FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
 * COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
 * BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS
 * OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED
 * AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
 * OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT
 * OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
 * SUCH DAMAGE.
 */

/*-------------------------------------------------------------------------
 * This file is autogenerated file using gcdb parser. Please do not edit it.
 * Update input XML file to add a new entry or update variable in this file
 * VERSION = 1.1
 *-----------------------------------------------------------------------*/

#ifndef _PANEL_LND_AL30_VA_HLT_HX83102B_5P99_720P_VIDEO_H_

#define _PANEL_LND_AL30_VA_HLT_HX83102B_5P99_720P_VIDEO_H_
/*-----------------------------------------------------------------------*/
/* HEADER files                                                          */
/*-----------------------------------------------------------------------*/
#include "panel.h"

#include "lcdkit_bias_ic_common.h"

#include "lcd_bl.h"

/*-----------------------------------------------------------------------*/
/* Panel configuration                                                   */
/*-----------------------------------------------------------------------*/
static struct panel_config lnd_al30_va_hlt_hx83102b_5p99_720p_video_panel_data = {
        "lcdkit_lnd_al30_va_hlt_hx83102b_5p99_720p_video", "dsi:0:", 
        "hlt-hx83102b-5p99-720p-video", 10, 0, "DISPLAY_1", 0, 505680000, 
        60, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1, 0, 0 
};

/*-----------------------------------------------------------------------*/
/* Panel resolution                                                      */
/*-----------------------------------------------------------------------*/
static struct panel_resolution lnd_al30_va_hlt_hx83102b_5p99_720p_video_panel_res = {
        720, 1440, 40, 40, 20, 0, 255, 16, 2, 0, 0, 0, 0, 0, 0, 0, 
        0, 0 
};

/*-----------------------------------------------------------------------*/
/* Panel color information                                               */
/*-----------------------------------------------------------------------*/
static struct color_info lnd_al30_va_hlt_hx83102b_5p99_720p_video_color = {
        24, 0, 0x00, 0, 0, 0 
};

/*-----------------------------------------------------------------------*/
/* Panel on/off command                                                  */
/*-----------------------------------------------------------------------*/
static char lnd_al30_va_hlt_hx83102b_5p99_720p_video_on_cmd0[] = {
    0x04, 0x00, 0x39, 0xC0,
    0xB9, 0x83, 0x10, 0x2B,
   };


static char lnd_al30_va_hlt_hx83102b_5p99_720p_video_on_cmd1[] = {
    0x0e, 0x00, 0x39, 0xC0,
    0xB1, 0x04, 0x2A, 0x27,
    0x27, 0x33, 0x7A, 0x02,
    0x83, 0x03, 0xAF, 0x43,
    0xCC, 0x33, 0xFF, 0xFF};


static char lnd_al30_va_hlt_hx83102b_5p99_720p_video_on_cmd2[] = {
    0x0f, 0x00, 0x39, 0xC0,
    0xB2, 0x00, 0x00, 0x78,
    0x00, 0x10, 0xC8, 0x7E,
    0x00, 0x00, 0x00, 0x00,
    0x14, 0x60, 0xD7, 0xFF};


static char lnd_al30_va_hlt_hx83102b_5p99_720p_video_on_cmd3[] = {
    0x0f, 0x00, 0x39, 0xC0,
    0xB4, 0x69, 0x50, 0x69,
    0x50, 0x69, 0x50, 0x69,
    0x50, 0x03, 0x60, 0x01,
    0x20, 0x00, 0xFF, 0xFF};


static char lnd_al30_va_hlt_hx83102b_5p99_720p_video_on_cmd4[] = {
    0x02, 0x00, 0x39, 0xC0,
    0xCC, 0x02, 0xFF, 0xFF};


static char lnd_al30_va_hlt_hx83102b_5p99_720p_video_on_cmd5[] = {
    0x28, 0x00, 0x39, 0xC0,
    0xD3, 0x00, 0x00, 0x01,
    0x01, 0x01, 0x01, 0x01,
    0x01, 0x01, 0x00, 0x08,
    0x00, 0x47, 0x00, 0x44,
    0x47, 0x0B, 0x0B, 0x00,
    0x00, 0x32, 0x10, 0x09,
    0x00, 0x09, 0x32, 0x10,
    0x07, 0x00, 0x07, 0x32,
    0x10, 0x08, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,
   };


static char lnd_al30_va_hlt_hx83102b_5p99_720p_video_on_cmd6[] = {
    0x2d, 0x00, 0x39, 0xC0,
    0xD5, 0x18, 0x18, 0x3A,
    0x3A, 0x18, 0x18, 0x04,
    0x05, 0x06, 0x07, 0x00,
    0x01, 0x02, 0x03, 0x18,
    0x18, 0xBA, 0xBA, 0x19,
    0x19, 0x20, 0x21, 0x22,
    0x23, 0x18, 0x18, 0x18,
    0x18, 0x18, 0x18, 0x18,
    0x18, 0x18, 0x18, 0x18,
    0x18, 0x18, 0x18, 0x18,
    0x18, 0x18, 0x18, 0x18,
    0x18, 0xFF, 0xFF, 0xFF};


static char lnd_al30_va_hlt_hx83102b_5p99_720p_video_on_cmd7[] = {
    0x2d, 0x00, 0x39, 0xC0,
    0xD6, 0x18, 0x18, 0x3A,
    0x3A, 0x19, 0x19, 0x03,
    0x02, 0x01, 0x00, 0x07,
    0x06, 0x05, 0x04, 0x18,
    0x18, 0x3A, 0x3A, 0x18,
    0x18, 0x23, 0x22, 0x21,
    0x20, 0x18, 0x18, 0x18,
    0x18, 0x18, 0x18, 0x18,
    0x18, 0x18, 0x18, 0x18,
    0x18, 0x18, 0x18, 0x18,
    0x18, 0x18, 0x18, 0x18,
    0x18, 0xFF, 0xFF, 0xFF};


static char lnd_al30_va_hlt_hx83102b_5p99_720p_video_on_cmd8[] = {
    0x1c, 0x00, 0x39, 0xC0,
    0xE7, 0x14, 0x14, 0x12,
    0x82, 0x10, 0x82, 0x00,
    0x00, 0x00, 0x00, 0x00,
    0x00, 0xFF, 0x0F, 0x14,
    0x14, 0x32, 0xB9, 0x23,
    0xB9, 0x00, 0x00, 0x28,
    0x00, 0x00, 0x00, 0x07,
   };


static char lnd_al30_va_hlt_hx83102b_5p99_720p_video_on_cmd9[] = {
    0x02, 0x00, 0x39, 0xC0,
    0xBD, 0x01, 0xFF, 0xFF};


static char lnd_al30_va_hlt_hx83102b_5p99_720p_video_on_cmd10[] = {
    0x0a, 0x00, 0x39, 0xC0,
    0xE7, 0x01, 0x07, 0x40,
    0x01, 0x40, 0x13, 0x44,
    0x14, 0x01, 0xFF, 0xFF};


static char lnd_al30_va_hlt_hx83102b_5p99_720p_video_on_cmd11[] = {
    0x02, 0x00, 0x39, 0xC0,
    0xBD, 0x00, 0xFF, 0xFF};


static char lnd_al30_va_hlt_hx83102b_5p99_720p_video_on_cmd12[] = {
    0x04, 0x00, 0x39, 0xC0,
    0xB6, 0x9E, 0x9E, 0xE0,
   };


static char lnd_al30_va_hlt_hx83102b_5p99_720p_video_on_cmd13[] = {
    0x02, 0x00, 0x39, 0xC0,
    0xC1, 0x01, 0xFF, 0xFF};


static char lnd_al30_va_hlt_hx83102b_5p99_720p_video_on_cmd14[] = {
    0x02, 0x00, 0x39, 0xC0,
    0xBD, 0x01, 0xFF, 0xFF};


static char lnd_al30_va_hlt_hx83102b_5p99_720p_video_on_cmd15[] = {
    0x3a, 0x00, 0x39, 0xC0,
    0xC1, 0x00, 0x11, 0x21,
    0x2C, 0x35, 0x3D, 0x43,
    0x4D, 0x51, 0x54, 0x58,
    0x5B, 0x5D, 0x60, 0x62,
    0x65, 0x67, 0x69, 0x6B,
    0x6E, 0x72, 0x75, 0x79,
    0x7C, 0x7F, 0x83, 0x86,
    0x8A, 0x8D, 0x91, 0x96,
    0x9A, 0x9F, 0xA4, 0xAA,
    0xB1, 0xB8, 0xC1, 0xCC,
    0xDA, 0xE4, 0xEA, 0xF1,
    0xF9, 0xFF, 0x37, 0x84,
    0x30, 0xEC, 0x53, 0x61,
    0x88, 0xF2, 0x64, 0x91,
    0x03, 0x00, 0xFF, 0xFF};


static char lnd_al30_va_hlt_hx83102b_5p99_720p_video_on_cmd16[] = {
    0x02, 0x00, 0x39, 0xC0,
    0xBD, 0x02, 0xFF, 0xFF};


static char lnd_al30_va_hlt_hx83102b_5p99_720p_video_on_cmd17[] = {
    0x3a, 0x00, 0x39, 0xC0,
    0xC1, 0x00, 0x11, 0x21,
    0x2C, 0x35, 0x3D, 0x43,
    0x4D, 0x51, 0x54, 0x58,
    0x5B, 0x5D, 0x60, 0x62,
    0x65, 0x67, 0x69, 0x6B,
    0x6E, 0x72, 0x75, 0x79,
    0x7C, 0x7F, 0x83, 0x86,
    0x8A, 0x8D, 0x91, 0x96,
    0x9A, 0x9F, 0xA4, 0xAA,
    0xB1, 0xB8, 0xC1, 0xCC,
    0xDA, 0xE4, 0xEA, 0xF1,
    0xF9, 0xFF, 0x37, 0x84,
    0x30, 0xEC, 0x53, 0x61,
    0x88, 0xF2, 0x64, 0x91,
    0x03, 0x00, 0xFF, 0xFF};


static char lnd_al30_va_hlt_hx83102b_5p99_720p_video_on_cmd18[] = {
    0x02, 0x00, 0x39, 0xC0,
    0xBD, 0x03, 0xFF, 0xFF};


static char lnd_al30_va_hlt_hx83102b_5p99_720p_video_on_cmd19[] = {
    0x3a, 0x00, 0x39, 0xC0,
    0xC1, 0x00, 0x11, 0x21,
    0x2C, 0x35, 0x3D, 0x43,
    0x4D, 0x51, 0x54, 0x58,
    0x5B, 0x5D, 0x60, 0x62,
    0x65, 0x67, 0x69, 0x6B,
    0x6E, 0x72, 0x75, 0x79,
    0x7C, 0x7F, 0x83, 0x86,
    0x8A, 0x8D, 0x91, 0x96,
    0x9A, 0x9F, 0xA4, 0xAA,
    0xB1, 0xB8, 0xC1, 0xCC,
    0xDA, 0xE4, 0xEA, 0xF1,
    0xF9, 0xFF, 0x37, 0x84,
    0x30, 0xEC, 0x53, 0x61,
    0x88, 0xF2, 0x64, 0x91,
    0x03, 0x00, 0xFF, 0xFF};


static char lnd_al30_va_hlt_hx83102b_5p99_720p_video_on_cmd20[] = {
    0x02, 0x00, 0x39, 0xC0,
    0xBD, 0x00, 0xFF, 0xFF};


static char lnd_al30_va_hlt_hx83102b_5p99_720p_video_on_cmd21[] = {
    0x02, 0x00, 0x39, 0xC0,
    0xBD, 0x02, 0xFF, 0xFF};


static char lnd_al30_va_hlt_hx83102b_5p99_720p_video_on_cmd22[] = {
    0x07, 0x00, 0x39, 0xC0,
    0xB4, 0xC0, 0x00, 0x9B,
    0x1B, 0x00, 0x88, 0xFF};


static char lnd_al30_va_hlt_hx83102b_5p99_720p_video_on_cmd23[] = {
    0x02, 0x00, 0x39, 0xC0,
    0xBD, 0x00, 0xFF, 0xFF};


static char lnd_al30_va_hlt_hx83102b_5p99_720p_video_on_cmd24[] = {
    0x08, 0x00, 0x39, 0xC0,
    0xC8, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,
   };


static char lnd_al30_va_hlt_hx83102b_5p99_720p_video_on_cmd25[] = {
    0x06, 0x00, 0x39, 0xC0,
    0xBF, 0x00, 0x00, 0x00,
    0x04, 0x83, 0xFF, 0xFF};


static char lnd_al30_va_hlt_hx83102b_5p99_720p_video_on_cmd26[] = {
    0x0b, 0x00, 0x39, 0xC0,
    0xC7, 0x00, 0xC2, 0x30,
    0x02, 0x42, 0x00, 0x00,
    0x00, 0x00, 0x08, 0xFF};


static char lnd_al30_va_hlt_hx83102b_5p99_720p_video_on_cmd27[] = {
    0x02, 0x00, 0x39, 0xC0,
    0xD9, 0x02, 0xFF, 0xFF};


static char lnd_al30_va_hlt_hx83102b_5p99_720p_video_on_cmd28[] = {
    0x02, 0x00, 0x39, 0xC0,
    0x11, 0x00, 0xFF, 0xFF};


static char lnd_al30_va_hlt_hx83102b_5p99_720p_video_on_cmd29[] = {
    0x02, 0x00, 0x39, 0xC0,
    0x29, 0x00, 0xFF, 0xFF};




static struct mipi_dsi_cmd lnd_al30_va_hlt_hx83102b_5p99_720p_video_on_command[] = {
{0x8, lnd_al30_va_hlt_hx83102b_5p99_720p_video_on_cmd0, 0x00},
{0x14, lnd_al30_va_hlt_hx83102b_5p99_720p_video_on_cmd1, 0x00},
{0x14, lnd_al30_va_hlt_hx83102b_5p99_720p_video_on_cmd2, 0x00},
{0x14, lnd_al30_va_hlt_hx83102b_5p99_720p_video_on_cmd3, 0x00},
{0x8, lnd_al30_va_hlt_hx83102b_5p99_720p_video_on_cmd4, 0x00},
{0x2c, lnd_al30_va_hlt_hx83102b_5p99_720p_video_on_cmd5, 0x00},
{0x34, lnd_al30_va_hlt_hx83102b_5p99_720p_video_on_cmd6, 0x00},
{0x34, lnd_al30_va_hlt_hx83102b_5p99_720p_video_on_cmd7, 0x00},
{0x20, lnd_al30_va_hlt_hx83102b_5p99_720p_video_on_cmd8, 0x00},
{0x8, lnd_al30_va_hlt_hx83102b_5p99_720p_video_on_cmd9, 0x00},
{0x10, lnd_al30_va_hlt_hx83102b_5p99_720p_video_on_cmd10, 0x00},
{0x8, lnd_al30_va_hlt_hx83102b_5p99_720p_video_on_cmd11, 0x00},
{0x8, lnd_al30_va_hlt_hx83102b_5p99_720p_video_on_cmd12, 0x00},
{0x8, lnd_al30_va_hlt_hx83102b_5p99_720p_video_on_cmd13, 0x00},
{0x8, lnd_al30_va_hlt_hx83102b_5p99_720p_video_on_cmd14, 0x00},
{0x40, lnd_al30_va_hlt_hx83102b_5p99_720p_video_on_cmd15, 0x00},
{0x8, lnd_al30_va_hlt_hx83102b_5p99_720p_video_on_cmd16, 0x00},
{0x40, lnd_al30_va_hlt_hx83102b_5p99_720p_video_on_cmd17, 0x00},
{0x8, lnd_al30_va_hlt_hx83102b_5p99_720p_video_on_cmd18, 0x00},
{0x40, lnd_al30_va_hlt_hx83102b_5p99_720p_video_on_cmd19, 0x00},
{0x8, lnd_al30_va_hlt_hx83102b_5p99_720p_video_on_cmd20, 0x00},
{0x8, lnd_al30_va_hlt_hx83102b_5p99_720p_video_on_cmd21, 0x00},
{0xc, lnd_al30_va_hlt_hx83102b_5p99_720p_video_on_cmd22, 0x00},
{0x8, lnd_al30_va_hlt_hx83102b_5p99_720p_video_on_cmd23, 0x00},
{0xc, lnd_al30_va_hlt_hx83102b_5p99_720p_video_on_cmd24, 0x00},
{0xc, lnd_al30_va_hlt_hx83102b_5p99_720p_video_on_cmd25, 0x00},
{0x10, lnd_al30_va_hlt_hx83102b_5p99_720p_video_on_cmd26, 0x00},
{0x8, lnd_al30_va_hlt_hx83102b_5p99_720p_video_on_cmd27, 0x00},
{0x8, lnd_al30_va_hlt_hx83102b_5p99_720p_video_on_cmd28, 0x78},
{0x8, lnd_al30_va_hlt_hx83102b_5p99_720p_video_on_cmd29, 0x14}
};
#define LND_AL30_VA_HLT_HX83102B_5P99_720P_VIDEO_ON_COMMAND 30


static char lnd_al30_va_hlt_hx83102b_5p99_720p_video_off_cmd0[] = {
    0x28, 0x00, 0x05, 0x80};


static char lnd_al30_va_hlt_hx83102b_5p99_720p_video_off_cmd1[] = {
    0x10, 0x00, 0x05, 0x80};




static struct mipi_dsi_cmd lnd_al30_va_hlt_hx83102b_5p99_720p_video_off_command[] = {
{0x4, lnd_al30_va_hlt_hx83102b_5p99_720p_video_off_cmd0, 0x0A},
{0x4, lnd_al30_va_hlt_hx83102b_5p99_720p_video_off_cmd1, 0x78}
};
#define LND_AL30_VA_HLT_HX83102B_5P99_720P_VIDEO_OFF_COMMAND 2


static struct command_state lnd_al30_va_hlt_hx83102b_5p99_720p_video_state = {
        0, 1 
};

/*-----------------------------------------------------------------------*/
/* Command mode panel                                                    */
/*-----------------------------------------------------------------------*/
static struct commandpanel_info lnd_al30_va_hlt_hx83102b_5p99_720p_video_command_panel = {
        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 
};

/*-----------------------------------------------------------------------*/
/* Video mode panel                                                      */
/*-----------------------------------------------------------------------*/
static struct videopanel_info lnd_al30_va_hlt_hx83102b_5p99_720p_video_video_panel = {
        1, 0, 0, 0, 1, 1, 2, 0, 0x9 
};

/*-----------------------------------------------------------------------*/
/* Lane configuration                                                    */
/*-----------------------------------------------------------------------*/
static struct lane_configuration lnd_al30_va_hlt_hx83102b_5p99_720p_video_lane_config = {
        4, 0, 1, 1, 1, 1, 0 
};

/*-----------------------------------------------------------------------*/
/* Panel timing                                                          */
/*-----------------------------------------------------------------------*/
static const uint32_t lnd_al30_va_hlt_hx83102b_5p99_720p_video_timings[]= {
        0x1F, 0x1C, 0x05, 0x06, 0x03, 0x03, 0x04, 0xA0,
			0x1F, 0x1C, 0x05, 0x06, 0x03, 0x03, 0x04, 0xA0,
			0x1F, 0x1C, 0x05, 0x06, 0x03, 0x03, 0x04, 0xA0,
			0x1F, 0x1C, 0x05, 0x06, 0x03, 0x03, 0x04, 0xA0,
			0x1F, 0x10, 0x04, 0x06, 0x03, 0x03, 0x04, 0xA0 
};

static struct panel_timing lnd_al30_va_hlt_hx83102b_5p99_720p_video_timing_info = {
        0, 4, 0x10, 0x33 
};

/*-----------------------------------------------------------------------*/
/* Panel reset sequence                                                  */
/*-----------------------------------------------------------------------*/
static struct panel_reset_sequence lnd_al30_va_hlt_hx83102b_5p99_720p_video_reset_seq = {
    { 1, 0, 1, }, { 5, 5, 50, }, 2
};

/*-----------------------------------------------------------------------*/
/* Backlight setting                                                     */
/*-----------------------------------------------------------------------*/
static struct backlight lnd_al30_va_hlt_hx83102b_5p99_720p_video_backlight = {
        0, 24, 4095, 1, 1, 0 
};

/*-----------------------------------------------------------------------*/
/* Labibb setting                                                        */
/*-----------------------------------------------------------------------*/
static struct labibb_desc lnd_al30_va_hlt_hx83102b_5p99_720p_video_labibb = {
        0, 1, 6000000, 6000000, 6000000, 6000000, 5, 0, 3, 1, 0 
};

/*-----------------------------------------------------------------------*/
/* turn on backlight delay                                               */
/*-----------------------------------------------------------------------*/
int lnd_al30_va_hlt_hx83102b_5p99_720p_video_mdp_pipe_type  = MDSS_MDP_PIPE_TYPE_RGB;

int lnd_al30_va_hlt_hx83102b_5p99_720p_video_dsi_pll_type  = DSI_PLL_TYPE_THULIUM;

int lnd_al30_va_hlt_hx83102b_5p99_720p_video_mipi_signature  = 0xffff;

static const uint32_t lnd_al30_va_hlt_hx83102b_5p99_720p_video_regulator_setting[]= {
        0x1d, 0x1d, 0x1d, 0x1d, 0x1d 
};

/*-----------------------------------------------------------------------*/
/* platform Config                                                       */
/*-----------------------------------------------------------------------*/
static struct lcdkit_platform_config lnd_al30_va_hlt_hx83102b_5p99_720p_video_panel_platform_config = {
        0, 0, 0, 0, 0x10002, 0x10000, 0x200, 0x20, 0, 0, 0, 61, 0, 
        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6000000, 6000000, 100, 20, 0, 0, 
        0, 0, 0, 0, 0 
};

/*-----------------------------------------------------------------------*/
/* misc Information                                                      */
/*-----------------------------------------------------------------------*/
static struct lcdkit_misc_info lnd_al30_va_hlt_hx83102b_5p99_720p_video_panel_misc_info = {
        0, 0, 2, 0x01, 0x01, 0x01, 0x01, 0, 1, 0, 1, 0, 0 
};

/*-----------------------------------------------------------------------*/
/* delay ctrl                                                            */
/*-----------------------------------------------------------------------*/
static struct lcdkit_delay_ctrl lnd_al30_va_hlt_hx83102b_5p99_720p_video_panel_delay_ctrl = {
        0, 10, 0, 5, 5, 0, 3, 5, 0, 0, 0, 0, 20, 0, 50 
};

static char lnd_al30_va_hlt_hx83102b_5p99_720p_video_backlight_cmd0[] = {
    0x02, 0x00, 0x39, 0xC0,
    0x51, 0x00, 0xFF, 0xFF};




static struct mipi_dsi_cmd lnd_al30_va_hlt_hx83102b_5p99_720p_video_backlight_command[] = {
{0x8, lnd_al30_va_hlt_hx83102b_5p99_720p_video_backlight_cmd0, 0x00}
};
#define LND_AL30_VA_HLT_HX83102B_5P99_720P_VIDEO_BACKLIGHT_COMMAND 1



static struct lcd_bias_voltage_info * lnd_al30_va_hlt_hx83102b_5p99_720p_video_bias_ic_array[0];
 
#define LND_AL30_VA_HLT_HX83102B_5P99_720P_VIDEO_BIAS_IC_ARRAY 0


static struct backlight_ic_info * lnd_al30_va_hlt_hx83102b_5p99_720p_video_backlight_ic_array[0];
 
#define LND_AL30_VA_HLT_HX83102B_5P99_720P_VIDEO_BACKLIGHT_IC_ARRAY 0


#endif /*_PANEL_LND_AL30_VA_HLT_HX83102B_5P99_720P_VIDEO_H_*/
