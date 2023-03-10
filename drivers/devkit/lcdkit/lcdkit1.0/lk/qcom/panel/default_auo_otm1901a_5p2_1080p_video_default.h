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

#ifndef _PANEL_DEFAULT_AUO_OTM1901A_5P2_1080P_VIDEO_DEFAULT_H_

#define _PANEL_DEFAULT_AUO_OTM1901A_5P2_1080P_VIDEO_DEFAULT_H_
/*-----------------------------------------------------------------------*/
/* HEADER files                                                          */
/*-----------------------------------------------------------------------*/
#include "panel.h"

#include "lcdkit_bias_ic_common.h"

#include "lcd_bl.h"

/*-----------------------------------------------------------------------*/
/* Panel configuration                                                   */
/*-----------------------------------------------------------------------*/
static struct panel_config default_auo_otm1901a_5p2_1080p_video_default_panel_data = {
        "lcdkit_default_auo_otm1901a_5p2_1080p_video_default", "dsi:0:", 
        "auo_otm1901a_5p2_1080p_video_default", 10, 0, "DISPLAY_1", 
        0, 445730000, 60, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1, 0, 0 
};

/*-----------------------------------------------------------------------*/
/* Panel resolution                                                      */
/*-----------------------------------------------------------------------*/
static struct panel_resolution default_auo_otm1901a_5p2_1080p_video_default_panel_res = {
        1080, 1920, 52, 52, 20, 0, 2, 16, 9, 0, 0, 0, 0, 0, 0, 0, 0, 
        0 
};

/*-----------------------------------------------------------------------*/
/* Panel color information                                               */
/*-----------------------------------------------------------------------*/
static struct color_info default_auo_otm1901a_5p2_1080p_video_default_color = {
        24, 0, 0x00, 0, 0, 0 
};

/*-----------------------------------------------------------------------*/
/* Panel on/off command                                                  */
/*-----------------------------------------------------------------------*/
static char default_auo_otm1901a_5p2_1080p_video_default_on_cmd0[] = {
    0x02, 0x00, 0x29, 0xC0,
    0x00, 0x00, 0xFF, 0xFF};


static char default_auo_otm1901a_5p2_1080p_video_default_on_cmd1[] = {
    0x04, 0x00, 0x29, 0xC0,
    0xFF, 0x19, 0x01, 0x01,
   };


static char default_auo_otm1901a_5p2_1080p_video_default_on_cmd2[] = {
    0x02, 0x00, 0x29, 0xC0,
    0x00, 0x80, 0xFF, 0xFF};


static char default_auo_otm1901a_5p2_1080p_video_default_on_cmd3[] = {
    0x03, 0x00, 0x29, 0xC0,
    0xFF, 0x19, 0x01, 0xFF};


static char default_auo_otm1901a_5p2_1080p_video_default_on_cmd4[] = {
    0x02, 0x00, 0x29, 0xC0,
    0x00, 0x88, 0xFF, 0xFF};


static char default_auo_otm1901a_5p2_1080p_video_default_on_cmd5[] = {
    0x02, 0x00, 0x29, 0xC0,
    0xf3, 0x00, 0xFF, 0xFF};


static char default_auo_otm1901a_5p2_1080p_video_default_on_cmd6[] = {
    0x02, 0x00, 0x29, 0xC0,
    0x00, 0xB0, 0xFF, 0xFF};


static char default_auo_otm1901a_5p2_1080p_video_default_on_cmd7[] = {
    0x02, 0x00, 0x29, 0xC0,
    0xCA, 0x01, 0xFF, 0xFF};


static char default_auo_otm1901a_5p2_1080p_video_default_on_cmd8[] = {
    0x02, 0x00, 0x29, 0xC0,
    0x00, 0xB1, 0xFF, 0xFF};


static char default_auo_otm1901a_5p2_1080p_video_default_on_cmd9[] = {
    0x02, 0x00, 0x29, 0xC0,
    0xCA, 0x01, 0xFF, 0xFF};


static char default_auo_otm1901a_5p2_1080p_video_default_on_cmd10[] = {
    0x02, 0x00, 0x29, 0xC0,
    0x00, 0xB3, 0xFF, 0xFF};


static char default_auo_otm1901a_5p2_1080p_video_default_on_cmd11[] = {
    0x02, 0x00, 0x29, 0xC0,
    0xCA, 0x40, 0xFF, 0xFF};


static char default_auo_otm1901a_5p2_1080p_video_default_on_cmd12[] = {
    0x02, 0x00, 0x29, 0xC0,
    0x00, 0x00, 0xFF, 0xFF};


static char default_auo_otm1901a_5p2_1080p_video_default_on_cmd13[] = {
    0x04, 0x00, 0x29, 0xC0,
    0xFF, 0xFF, 0xFF, 0xFF,
   };


static char default_auo_otm1901a_5p2_1080p_video_default_on_cmd14[] = {
    0x35, 0x01, 0x15, 0x80};


static char default_auo_otm1901a_5p2_1080p_video_default_on_cmd15[] = {
    0x53, 0x24, 0x15, 0x80};


static char default_auo_otm1901a_5p2_1080p_video_default_on_cmd16[] = {
    0x55, 0x00, 0x15, 0x80};


static char default_auo_otm1901a_5p2_1080p_video_default_on_cmd17[] = {
    0x5E, 0x28, 0x15, 0x80};


static char default_auo_otm1901a_5p2_1080p_video_default_on_cmd18[] = {
    0x11, 0x00, 0x05, 0x80};


static char default_auo_otm1901a_5p2_1080p_video_default_on_cmd19[] = {
    0x29, 0x00, 0x05, 0x80};




static struct mipi_dsi_cmd default_auo_otm1901a_5p2_1080p_video_default_on_command[] = {
{0x8, default_auo_otm1901a_5p2_1080p_video_default_on_cmd0, 0x0a},
{0x8, default_auo_otm1901a_5p2_1080p_video_default_on_cmd1, 0x0a},
{0x8, default_auo_otm1901a_5p2_1080p_video_default_on_cmd2, 0x0a},
{0x8, default_auo_otm1901a_5p2_1080p_video_default_on_cmd3, 0x0a},
{0x8, default_auo_otm1901a_5p2_1080p_video_default_on_cmd4, 0x0a},
{0x8, default_auo_otm1901a_5p2_1080p_video_default_on_cmd5, 0x0a},
{0x8, default_auo_otm1901a_5p2_1080p_video_default_on_cmd6, 0x0a},
{0x8, default_auo_otm1901a_5p2_1080p_video_default_on_cmd7, 0x0a},
{0x8, default_auo_otm1901a_5p2_1080p_video_default_on_cmd8, 0x0a},
{0x8, default_auo_otm1901a_5p2_1080p_video_default_on_cmd9, 0x0a},
{0x8, default_auo_otm1901a_5p2_1080p_video_default_on_cmd10, 0x0a},
{0x8, default_auo_otm1901a_5p2_1080p_video_default_on_cmd11, 0x0a},
{0x8, default_auo_otm1901a_5p2_1080p_video_default_on_cmd12, 0x0a},
{0x8, default_auo_otm1901a_5p2_1080p_video_default_on_cmd13, 0x0a},
{0x4, default_auo_otm1901a_5p2_1080p_video_default_on_cmd14, 0x0a},
{0x4, default_auo_otm1901a_5p2_1080p_video_default_on_cmd15, 0x0a},
{0x4, default_auo_otm1901a_5p2_1080p_video_default_on_cmd16, 0x0a},
{0x4, default_auo_otm1901a_5p2_1080p_video_default_on_cmd17, 0x0a},
{0x4, default_auo_otm1901a_5p2_1080p_video_default_on_cmd18, 0x78},
{0x4, default_auo_otm1901a_5p2_1080p_video_default_on_cmd19, 0x64}
};
#define DEFAULT_AUO_OTM1901A_5P2_1080P_VIDEO_DEFAULT_ON_COMMAND 20


static char default_auo_otm1901a_5p2_1080p_video_default_off_cmd0[] = {
    0x28, 0x00, 0x05, 0x80};


static char default_auo_otm1901a_5p2_1080p_video_default_off_cmd1[] = {
    0x10, 0x00, 0x05, 0x80};




static struct mipi_dsi_cmd default_auo_otm1901a_5p2_1080p_video_default_off_command[] = {
{0x4, default_auo_otm1901a_5p2_1080p_video_default_off_cmd0, 0x3C},
{0x4, default_auo_otm1901a_5p2_1080p_video_default_off_cmd1, 0x78}
};
#define DEFAULT_AUO_OTM1901A_5P2_1080P_VIDEO_DEFAULT_OFF_COMMAND 2


static struct command_state default_auo_otm1901a_5p2_1080p_video_default_state = {
        0, 0 
};

/*-----------------------------------------------------------------------*/
/* Command mode panel                                                    */
/*-----------------------------------------------------------------------*/
static struct commandpanel_info default_auo_otm1901a_5p2_1080p_video_default_command_panel = {
        1, 1, 1, 0, 0, 0x2c, 0, 0, 0, 1, 0, 0 
};

/*-----------------------------------------------------------------------*/
/* Video mode panel                                                      */
/*-----------------------------------------------------------------------*/
static struct videopanel_info default_auo_otm1901a_5p2_1080p_video_default_video_panel = {
        1, 0, 0, 0, 1, 1, 2, 0, 0x9 
};

/*-----------------------------------------------------------------------*/
/* Lane configuration                                                    */
/*-----------------------------------------------------------------------*/
static struct lane_configuration default_auo_otm1901a_5p2_1080p_video_default_lane_config = {
        4, 0, 1, 1, 1, 1, 0 
};

/*-----------------------------------------------------------------------*/
/* Panel timing                                                          */
/*-----------------------------------------------------------------------*/
static const uint32_t default_auo_otm1901a_5p2_1080p_video_default_timings[]= {
        0x1E, 0x1B, 0x04, 0x06, 0x02, 0x03, 0x04, 0xA0,
			0x1E, 0x1B, 0x04, 0x06, 0x02, 0x03, 0x04, 0xA0,
			0x1E, 0x1B, 0x04, 0x06, 0x02, 0x03, 0x04, 0xA0,
			0x1E, 0x1B, 0x04, 0x06, 0x02, 0x03, 0x04, 0xA0,
			0x1E, 0x0E, 0x04, 0x05, 0x02, 0x03, 0x04, 0xA0 
};

static struct panel_timing default_auo_otm1901a_5p2_1080p_video_default_timing_info = {
        0, 4, 0x04, 0x26 
};

/*-----------------------------------------------------------------------*/
/* Panel reset sequence                                                  */
/*-----------------------------------------------------------------------*/
static struct panel_reset_sequence default_auo_otm1901a_5p2_1080p_video_default_reset_seq = {
    { 1, 0, 1, }, { 10, 10, 50, }, 2
};

/*-----------------------------------------------------------------------*/
/* Backlight setting                                                     */
/*-----------------------------------------------------------------------*/
static struct backlight default_auo_otm1901a_5p2_1080p_video_default_backlight = {
        0, 40, 4095, 1, 1, 0 
};

/*-----------------------------------------------------------------------*/
/* Labibb setting                                                        */
/*-----------------------------------------------------------------------*/
static struct labibb_desc default_auo_otm1901a_5p2_1080p_video_default_labibb = {
        0, 1, 5500000, 5500000, 5500000, 5500000, 50, 0, 3, 1, 0 
};

/*-----------------------------------------------------------------------*/
/* turn on backlight delay                                               */
/*-----------------------------------------------------------------------*/
int default_auo_otm1901a_5p2_1080p_video_default_mdp_pipe_type  = MDSS_MDP_PIPE_TYPE_RGB;

int default_auo_otm1901a_5p2_1080p_video_default_dsi_pll_type  = DSI_PLL_TYPE_THULIUM;

int default_auo_otm1901a_5p2_1080p_video_default_mipi_signature  = 0xffff;

static const uint32_t default_auo_otm1901a_5p2_1080p_video_default_regulator_setting[]= {
        0x1d, 0x1d, 0x1d, 0x1d, 0x1d 
};

/*-----------------------------------------------------------------------*/
/* platform Config                                                       */
/*-----------------------------------------------------------------------*/
static struct lcdkit_platform_config default_auo_otm1901a_5p2_1080p_video_default_panel_platform_config = {
        3, 1, 0, 0, 0x10002, 0x10000, 0x200, 0x20, 0, 12, 0, 61, 0, 
        0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 5500000, 5500000, 100, 20, 0, 
        0, 0, 1, 0, 0, 0 
};

/*-----------------------------------------------------------------------*/
/* misc Information                                                      */
/*-----------------------------------------------------------------------*/
static struct lcdkit_misc_info default_auo_otm1901a_5p2_1080p_video_default_panel_misc_info = {
        0, 0, 0, 0x01, 0x01, 0x01, 0x01, 0, 1, 0, 1, 0, 0 
};

/*-----------------------------------------------------------------------*/
/* delay ctrl                                                            */
/*-----------------------------------------------------------------------*/
static struct lcdkit_delay_ctrl default_auo_otm1901a_5p2_1080p_video_default_panel_delay_ctrl = {
        0, 10, 0, 50, 3, 0, 3, 0, 0, 0, 0, 0, 20, 0, 50 
};

static char default_auo_otm1901a_5p2_1080p_video_default_backlight_cmd0[] = {
    0x51, 0x00, 0x15, 0x80};




static struct mipi_dsi_cmd default_auo_otm1901a_5p2_1080p_video_default_backlight_command[] = {
{0x4, default_auo_otm1901a_5p2_1080p_video_default_backlight_cmd0, 0x00}
};
#define DEFAULT_AUO_OTM1901A_5P2_1080P_VIDEO_DEFAULT_BACKLIGHT_COMMAND 1



static struct lcd_bias_voltage_info * default_auo_otm1901a_5p2_1080p_video_default_bias_ic_array[0];
 
#define DEFAULT_AUO_OTM1901A_5P2_1080P_VIDEO_DEFAULT_BIAS_IC_ARRAY 0


static struct backlight_ic_info * default_auo_otm1901a_5p2_1080p_video_default_backlight_ic_array[0];
 
#define DEFAULT_AUO_OTM1901A_5P2_1080P_VIDEO_DEFAULT_BACKLIGHT_IC_ARRAY 0


#endif /*_PANEL_DEFAULT_AUO_OTM1901A_5P2_1080P_VIDEO_DEFAULT_H_*/
